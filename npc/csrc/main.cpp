/*** 
 * @Author: Groot
 * @Date: 2022-07-05 22:56:28
 * @LastEditTime: 2022-07-23 16:02:04
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
vluint64_t main_time = 100;

static void load_img();

int main(int argc, char **argv, char **env)
{
  load_img(); // load_img();

  printf("Hello, ysyx!\n");
  VerilatedContext* contextp = new VerilatedContext;

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
  while (contextp->time() < main_time && !contextp->gotFinish())
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
    if (top->instaddr_o >= 0x80000000)
    {
      uint32_t pc = top->instaddr_o;
      top->inst_i = 0xffc10113;
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

static void load_img()
{
  // 初始化内存
  init_mem();
  FILE *fp = fopen("/home/groot/ysyx-workbench/am-kernels/tests/cpu-tests/build/add-riscv64-nemu.bin", "rb");

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);

  fclose(fp);
}