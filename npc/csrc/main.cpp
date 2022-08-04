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
#include "../sim/Vtop.h"
// 用于输出显示波形
#include "verilated_vcd_c.h"

#include "../memory/paddr.c"

#define RstEnable 1
#define RstDisable 0
// This is a 64-bit integer to reduce wrap over issues and allow modulus.
// This is in units of timeprecision used in Verilog(or from --timescale-override)

static void load_img(char *img_file);
int main(int argc, char **argv, char **env)
{
	load_img(argv[1]); // load_img();

	printf("Hello, ysyx!\n");
	VerilatedContext *contextp = new VerilatedContext;

	contextp->commandArgs(argc, argv);
	// 用于打开VCD记录
	contextp->traceEverOn(true);

	// Instantiation of model
	// Create model
	Vtop *top = new Vtop{contextp};
	VerilatedVcdC *tfp = new VerilatedVcdC;

	top->trace(tfp, 99);
	// VCD文件保存位置
	tfp->open("./wave/wave.vcd");
	top->rst = RstEnable;
	while (!contextp->gotFinish())
	{
		contextp->timeInc(1);
		if (contextp->time() > 10)
		{
			top->rst = RstDisable;
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
		if (top->instaddr_o >= 0x80000000 && top->rst == RstDisable)
		{
			uint32_t pc = top->instaddr_o;
			top->inst_i = paddr_read(pc);
		}
		top->eval();
		tfp->dump(contextp->time());
	}
	// Down simulating
	top->final();
	tfp->close();
	delete top;
	delete contextp;
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

// unsigned int getInst();
// int count = 0;
// unsigned int insts[26] = {
// 	0x00108113, 0x00117193, 0x0021e213, 0xfff24293, 0xffb2a313,
// 	0x002303b3, 0x40538433, 0x007474b3, 0x0074e533, 0x00a445b3,
// 	0x00653613, 0x00c526b3, 0x00b63733, 0x004717b3, 0x00e7d833,
// 	0x40e2d8b3, 0x00009917, 0x04e60063, 0x0507d063, 0x0507f063,
// 	0x0508c063, 0x04f86063, 0x04f81063, 0x0400096f, 0x008609e7};
// unsigned int getInst()
// {
// 	unsigned int inst = insts[count];
// 	count++;
// 	return inst;
// }