/*** 
 * @Author: Groot
 * @Date: 2022-08-08 10:58:41
 * @LastEditTime: 2022-08-08 10:58:41
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/csrc/main.cpp
 * @版权声明
 */
/***
 * @Author: Groot
 * @Date: 2022-07-05 22:56:28
 * @LastEditTime: 2022-08-04 20:54:40
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/npc/csrc/main.cpp
 * @版权声明
 */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "verilated.h"
#include "../sim/Vysyx_22040895_top.h"
// 用于输出显示波形
#include "verilated_vcd_c.h"
// 用于DPI-C
#include "verilated_dpi.h"
#include "Vysyx_22040895_top__Dpi.h"
// 访存
#include "../memory/paddr.c"
// 用于输出正误
#include "../include/utils.h"

#define ysyx_22040895_RstEnable 1
#define ysyx_22040895_RstDisable 0

#define EBREAK 0x00100073
// This is a 64-bit integer to reduce wrap over issues and allow modulus.
// This is in units of timeprecision used in Verilog(or from --timescale-override)

vluint64_t main_time = 100;
uint64_t *cpu_gpr = NULL;

static void load_img(char *img_file);
int main(int argc, char **argv, char **env)
{
	load_img(argv[1]); // load_img();
	int exit = 0;
	uint32_t pc;
	printf("Hello, ysyx!\n");
	VerilatedContext *contextp = new VerilatedContext;

	contextp->commandArgs(argc, argv);
	// 用于打开VCD记录
	contextp->traceEverOn(true);

	// Instantiation of model
	// Create model
	Vysyx_22040895_top *top = new Vysyx_22040895_top{contextp};
	VerilatedVcdC *tfp = new VerilatedVcdC;

	top->trace(tfp, 99);
	// VCD文件保存位置
	tfp->open("./wave/wave.vcd");
	top->rst = ysyx_22040895_RstEnable;
	while (!contextp->gotFinish())
	{
		contextp->timeInc(1);
		if (contextp->time() > 10)
		{
			top->rst = ysyx_22040895_RstDisable;
		}
		if ((contextp->time() % 2) == 0)
		{
			top->clk = 0;
		}
		else if ((contextp->time() % 2) == 1)
		{
			top->clk = 1;
		}
		top->eval();
		if (top->instaddr_o >= 0x80000000 && top->rst == ysyx_22040895_RstDisable)
		{
			pc = top->instaddr_o;
			top->inst_i = paddr_read(pc);
			if (top->inst_i == EBREAK)
			{
				exit = 1;
				top->eval();
				tfp->dump(contextp->time());
				continue;
			}
		}
		top->eval();
		tfp->dump(contextp->time());
		if (exit == 1)
		{
			contextp->gotFinish(true);
		}
	}
	// Down simulating
	// printf("r0: %ld\n", *reg_a0);
	top->final();
	tfp->close();
	delete top;
	delete contextp;
	switch (cpu_gpr[10])
	{
	case 0:
		printf("npc: %s at pc = %x\n", ASNI_FMT("HIT GOOD TRAP", ASNI_FG_CYAN), pc);
		break;
	default:
		printf("npc: %s at pc = %x\n", ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED), pc);
		break;
	}

	return 0;
}
static void load_img(char *img_file)
{
	// 初始化内存
	init_mem();
	FILE *fp = fopen(img_file, "rb");
	printf("img: %s\n", img_file);

	fseek(fp, 0, SEEK_END);
	long size = ftell(fp);

	fseek(fp, 0, SEEK_SET);
	int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);

	fclose(fp);
}

void set_gpr_ptr(const svOpenArrayHandle r)
{
	cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar *)r)->datap());
}