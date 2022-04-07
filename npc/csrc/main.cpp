#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "verilated.h"
#include "Vtop.h"

// 用于输出显示波形
#include "verilated_vcd_c.h"

// This is a 64-bit integer to reduce wrap over issues and allow modulus.
// This is in units of timeprecision used in Verilog(or from --timescale-override)
vluint64_t main_time = 10;

int main(int argc, char** argv, char** env) {
  printf("Hello, ysyx!\n");
  VerilatedContext* contextp = new VerilatedContext;

  contextp->commandArgs(argc, argv);
  // 用于打开VCD记录
  contextp->traceEverOn(true);

	// Instantiation of model 
	// Create model
  Vtop* top = new Vtop{contextp};
  VerilatedVcdC* tfp = new VerilatedVcdC;
  
  // 还没明白什么意思
  top->trace(tfp, 99);
  // VCD文件保存位置
  tfp->open("../wave.vcd");

  // contextp->time()记录仿真时间
  while(contextp->time() < sim_time && !contextp->gotFinish())
 {
    contextp->timeInc(1);
    int a = rand() & 1;
    int b = rand() & 1;
    top->a = a;
    top->b = b;

		// Evaluate model
    top->eval();
    printf("a = %d, b = %d, f = %d\n", a, b, top->f);
    assert(top->f == a ^ b);
    tfp->dump(contextp->time());
  }

	// Down simulating
  top->final();
  tfp->close();
  delete top;
  delete contextp;
  return 0;
}

