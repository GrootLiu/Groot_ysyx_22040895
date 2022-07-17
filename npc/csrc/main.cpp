/*** 
 * @Author: Groot
 * @Date: 2022-07-05 22:56:28
 * @LastEditTime: 2022-07-17 18:27:28
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/csrc/main.cpp
 * @版权声明
 */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "verilated.h"
#include "Vtop.h"
#include "../memory/paddr.c"

// 用于输出显示波形
#include "verilated_vcd_c.h"
#define RstEnable 1
#define RstDisable 0
// This is a 64-bit integer to reduce wrap over issues and allow modulus.
// This is in units of timeprecision used in Verilog(or from --timescale-override)
vluint64_t main_time = 1000;

static long load_img()
{

  FILE *fp = fopen("/home/groot/ysyx-workbench/am-kernels/tests/cpu-tests/build/add-riscv64-nemu.bin", "rb");

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  printf("-----------------\n");

  fseek(fp, 0, SEEK_SET);
  printf("+++++++++++++++++\n");
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);

  fclose(fp);
  return 0;
}



int main(int argc, char **argv, char **env)
{

  init_mem();
  long img_size = load_img();// load_img();

  printf("Hello, ysyx!\n");
  VerilatedContext *contextp = new VerilatedContext;

  contextp->commandArgs(argc, argv);
  // 用于打开VCD记录
  contextp->traceEverOn(true);

  // Instantiation of model
  // Create model
  Vtop *top = new Vtop{contextp};
  VerilatedVcdC *tfp = new VerilatedVcdC;

  // 还没明白什么意思
  top->trace(tfp, 99);
  // VCD文件保存位置
  tfp->open("./wave.vcd");

  // contextp->time()记录仿真时间
  while (contextp->time() < main_time && !contextp->gotFinish())
  {
    contextp->timeInc(1);
    if (contextp->time() > 195)
    {
      top->rst = RstEnable;
    }

    if ((contextp->time() % 10) == 0)
    {
      top->clk = 1;
      // printf("%x\n", top->instaddr_o);
      if (top->instaddr_o >= 0x80000000)
      {
        top->inst_i = paddr_read(top->instaddr_o);
        printf("inst:%x\n", top->inst_i);
      }
      
      // uint32_t instaddr = top->instaddr_o;
      // printf("%x\n",instaddr);
      // top->inst_i = paddr_read(instaddr);
    }
    if ((contextp->time() % 10) == 5)
    {
      top->clk = 0;
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
