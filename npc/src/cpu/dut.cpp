/***
 * @Author: Groot
 * @Date: 2022-08-11 21:57:18
 * @LastEditTime: 2022-08-13 10:23:11
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/npc/src/cpu/dut.cpp
 * @版权声明
 */
#include <dlfcn.h>
const char *regss[] = {
	"$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
	"s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
	"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
	"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};
typedef struct REF_CPU_state
{
	uint64_t cpu_gpr[32];
	uint64_t pc;
} REF_CPU_state;

static bool is_skip_ref = false;

void difftest_skip_ref()
{
	is_skip_ref = true;
}

REF_CPU_state ref_cpu;

void reg_tans(REF_CPU_state ref_cpu, CPU_state dut_cpu_state)
{
	for (int i = 0; i < 32; i++)
	{
		ref_cpu.cpu_gpr[i] = dut_cpu_state.cpu_gpr[i];
	}
	ref_cpu.pc = cpu.pc;
}

void (*ref_difftest_init)(int port) = NULL;
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

#ifdef DIFFTEST

void init_difftest(char *ref_so_file, long img_size, int port)
{
	assert(ref_so_file != NULL);

	void *handle;
	handle = dlopen(ref_so_file, RTLD_LAZY);
	assert(handle);
	ref_difftest_init = (void (*)(int))dlsym(handle, "my_difftest_init");
	ref_difftest_init(port);
	assert(ref_difftest_init);

	ref_difftest_memcpy = (void (*)(uint32_t, void *, size_t, bool))dlsym(handle, "my_difftest_memcpy");
	assert(ref_difftest_memcpy);

	ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "my_difftest_regcpy");
	assert(ref_difftest_regcpy);

	ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "my_difftest_exec");
	assert(ref_difftest_exec);

	ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
	assert(ref_difftest_raise_intr);

	char log_info_1[64] = ASNI_FMT("Differential testing: ON", ASNI_FG_GREEN);
	my_log(log_info_1);
	char log_info_2[256] = "The result of every instruction will be compared with ref_so_file. \nThis will help you a lot for debugging, but also significantly reduce the performance.\n";
	my_log(log_info_2);

	reg_tans(ref_cpu, cpu);
	ref_cpu.pc = RESET_VECTOR;
	ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
	ref_difftest_regcpy(&ref_cpu, DIFFTEST_TO_REF);
}

static int checkgpregs(REF_CPU_state ref, uint64_t pc)
{
	int abort = 0;
	for (int i = 0; i < 32; i++)
	{
		if (cpu.cpu_gpr[i] != ref.cpu_gpr[i])
		{
			abort = 1;
			printf(ASNI_FMT("***************************************************************************************************\n", ASNI_FG_CYAN));
			printf(ASNI_FMT("The wrong reg is: %s\n", ), regss[i]);
			printf("nemu's ");
			printf(ASNI_FMT("%s ", ASNI_FG_RED), regss[i]);
			printf("is %08lx; npc's ", ref.cpu_gpr[i]);
			printf(ASNI_FMT("%s ", ASNI_FG_RED), regss[i]);
			printf("is %08lx\n", cpu.cpu_gpr[i]);
		}
	}
	if (abort == 1)
	{
		contextp->gotFinish(true);

		char log_info[96] = ASNI_FMT("Differential testing Failed, Please Check Your NPC", ASNI_FG_RED);
		my_log(log_info);
		printf("Differential testing Failed, Please Check Your NPC at the previous directive of the instruction: ");
		printf(ASNI_FMT("\n%08lx\n", ASNI_FG_RED), cpu.pc);
		printf(ASNI_FMT("***************************************************************************************************\n", ASNI_FG_CYAN));
		return abort + 1;
	}
	return abort;
}

int difftest_step(uint64_t pc)
{
	// 0: nornal
	int exit = 0;

	reg_tans(ref_cpu, cpu);

	REF_CPU_state ref_temp;

	// 是否跳过difftest比对
	if (is_skip_ref == true)
	{
		printf("111\n");
		// to skip the checking of an instruction, just copy the reg state to reference design
		ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
		is_skip_ref = false;
		return 1;
	}

	ref_difftest_exec(1);

	ref_difftest_regcpy(&ref_temp, DIFFTEST_TO_DUT);

	exit = checkgpregs(ref_temp, pc);

	return exit;
}

#endif