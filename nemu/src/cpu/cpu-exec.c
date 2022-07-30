#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10
#define MAX_IRING_BUF 10
// 用来记录当前pc，每次进入的时候都会根据这个值继续执行指令

// typedef struct {
//   word_t gpr[32];
//   vaddr_t pc;
// } riscv64_CPU_state;

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

// 环形缓冲区
#ifdef CONFIG_ITRACE_COND
typedef struct IringBuf
{
  IFDEF(CONFIG_ITRACE, char recent_inst[MAX_IRING_BUF][128]);
  int inst_num;
} IringBuf;
IringBuf iringbuf = {};
void log_iring(Decode *_this)
{
#ifdef CONFIG_ISA_riscv64
  if (cpu.pc == 0x80000000)
  {
    iringbuf.inst_num = 0;
  }
#endif
  if (iringbuf.inst_num == MAX_IRING_BUF)
  {
    iringbuf.inst_num = 0;
  }
  memcpy(iringbuf.recent_inst[iringbuf.inst_num], _this->logbuf, sizeof(_this->logbuf));
  iringbuf.inst_num++;
}
#endif

void device_update();

static void trace_and_difftest(Decode *_this, vaddr_t dnpc)
{
#ifdef CONFIG_ITRACE_COND
  log_iring(_this);
  // 在这里将log写入
  if (ITRACE_COND)
  {
    log_write("%s\n", _this->logbuf);
  }
#endif
  if (g_print_step)
  {
    IFDEF(CONFIG_ITRACE, puts(_this->logbuf));
  }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
#ifdef CONFIG_FTRACE
  // char func_name[128];
  // extern Symtab_info symtab_info;
  // extern char *find_func(char *func_name, Symtab_info symtab_info, long int pc);
  // find_func(func_name, symtab_info, 0x0000000080000011);
  // printf("fun_name: %s\n", func_name);
  if (_this->logbuf[32] == 'j')
  {
    printf("pc: %016lx\n", dnpc - 4);
  }
#endif
}

/**
 * @description:
 * @param {Decode} *s
 * @param {vaddr_t} pc
 * @return {*}
 * @use: call it with the si function to complete the work of single step excution
 */
static void exec_once(Decode *s, vaddr_t pc)
{
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = 0; i < ilen; i++)
  {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0)
    space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
              MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
#endif
}

static void execute(uint64_t n)
{
  Decode s;
  for (; n > 0; n--)
  {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst++;
    trace_and_difftest(&s, cpu.pc);
    // 只要nemu的状态不为running，就停止执行
    if (nemu_state.state != NEMU_RUNNING)
      break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic()
{
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0)
    Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else
    Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg()
{
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
/*
 * this cpu_exec function is designed for simulate the real cpu's way of work
 */
void cpu_exec(uint64_t n)
{
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state)
  {
  case NEMU_END:
  case NEMU_ABORT:
    printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
    return;
  default:
    nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state)
  {
  case NEMU_RUNNING:
    nemu_state.state = NEMU_STOP;
    break;

  case NEMU_END:
  case NEMU_ABORT:
    Log("nemu: %s at pc = " FMT_WORD,
        (nemu_state.state == NEMU_ABORT ? ASNI_FMT("ABORT", ASNI_FG_RED) : (nemu_state.halt_ret == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) : ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED))),
        nemu_state.halt_pc);
    // fall through
  case NEMU_QUIT:
    statistic();
  }

#ifdef CONFIG_ITRACE_COND
  // 客户程序出错的时候输出最近执行的若干条指令呢
  if (nemu_state.state == NEMU_ABORT || nemu_state.halt_ret != 0)
  {
    for (int i = 0; i < 10; i++)
    {
      printf("recent: %s\n", iringbuf.recent_inst[i]);
    }
  }
#endif
}