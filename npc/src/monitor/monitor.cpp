/***
 * @Author: Groot
 * @Date: 2022-08-08 10:26:30
 * @LastEditTime: 2022-08-12 15:02:34
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/npc/src/monitor/monitor.cpp
 * @版权声明
 */
#include "../memory/paddr.c"
#include "../include/utils.h"
#include "../include/disasm.cc"
#include "../include/log.c"
#include "../include/logo.c"
#include "../ftrace.cpp"
#include "../conf.h"
#include "../include/global.h"
#include "sdb.cpp"

#include <getopt.h>

static char *img_file = NULL;
static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *elf_file = NULL;
static int difftest_port = 1234;
static int img_size = 0;

extern void init_difftest(char *ref_so_file, long img_size, int port);
void sdb_set_batch_mode();
static void welcome()
{
	printf(ASNI_FMT("%s", ASNI_FG_BLUE), npc_logo);
	printf("%s\n", ASNI_FMT("Welcome to riscv64-NPC!", ASNI_FG_BLUE ASNI_BG_WHITE));
}

static int load_img(char *img_file)
{
	// 初始化内存
	init_mem();
	FILE *fp = fopen(img_file, "rb");

	fseek(fp, 0, SEEK_END);
	long size = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);

	fclose(fp);
	return size;
}

static int parse_args(int argc, char *argv[])
{
	const struct option table[] = {
		{"batch", no_argument, NULL, 'b'},
		{"log", required_argument, NULL, 'l'},
		{"diff", required_argument, NULL, 'd'},
		{"mtrace", required_argument, NULL, 'm'},
		{"port", required_argument, NULL, 'p'},
		{"help", no_argument, NULL, 'h'},
		{0, 0, NULL, 0},
	};
	int o;
	while ((o = getopt_long(argc, argv, "-bhl:d:p:f:", table, NULL)) != -1)
	{
		switch (o)
		{
		case 'b':
			sdb_set_batch_mode();
			break;
		case 'p':
			sscanf(optarg, "%d", &difftest_port);
			break;
		case 'l':
			log_file = optarg;
			break;
		case 'd':
			diff_so_file = optarg;
			break;
		case 'f':
			elf_file = optarg;
			break;
		case 1:
			img_file = optarg;
			return 0;
		default:
			printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
			printf("\t-b,--batch              run with batch mode\n");
			printf("\t-l,--log=FILE           output log to FILE\n");
			printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
			printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
			printf("\t-f,--ftrace=FILE        input a elf file\n");
			printf("\n");
			exit(0);
		}
	}
	return 0;
}

void init_monitor(int argc, char *argv[])
{
	parse_args(argc, argv);

	img_size = load_img(img_file);
	// printf("%s\n", img_file);
	init_log(log_file);
	init_disasm("riscv64");
#ifdef DIFFTEST
	init_difftest(diff_so_file, img_size, difftest_port);
#endif
	#ifdef FTRACE
		init_elf(elf_file);
	#endif
	welcome();
}

void wave_gen()
{
	contextp->traceEverOn(true);
	tfp = new VerilatedVcdC;
	top->trace(tfp, 99);
	// VCD文件保存位置
	tfp->open("./wave/wave.vcd");
}

void set_gpr_ptr(const svOpenArrayHandle r)
{
	cpu.cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar *)r)->datap());
}

int sim_main(int argc, char **argv)
{
	contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	top = new Vysyx_22040895_top{contextp};
	wave_gen();
	top->rst = ysyx_22040895_RstEnable;

	top->eval();



	int state = main_loop(contextp, tfp);
	
	top->final();
	tfp->close();
	delete top;
	delete contextp;
	return state;
}