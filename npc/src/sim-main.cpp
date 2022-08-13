/*** 
 * @Author: Groot
 * @Date: 2022-08-08 10:34:47
 * @LastEditTime: 2022-08-13 11:16:53
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/src/sim-main.cpp
 * @版权声明
 */
#include "./include/global.h"
#include "conf.h"
#include "./monitor/sdb.cpp"

void wave_gen();

void sim_main(int argc, char **argv)
{
	contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);
	top = new Vysyx_22040895_top{contextp};
	wave_gen();
	top->rst = ysyx_22040895_RstEnable;
	
	main_loop(contextp, tfp);
	
	top->final();
	tfp->close();
	delete top;
	delete contextp;
	return;
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
	uint64_t* gpr = (uint64_t *)(((VerilatedDpiOpenVar *)r)->datap());
	for (int i = 0; i < 32; i++)
	{
		cpu.cpu_gpr[i] = gpr[i];
	}
}