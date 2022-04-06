#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "verilated.h"
#include "Vtop.h"
int main(int argc, char** argv, char** env) {
  printf("Hello, ysyx!\n");
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};
  while(!contextp->gotFinish())
  {
    int a = rand() & 1;
    int b = rand() & 1;
    top->a = a;
    top->b = b;
    top->eval();
    printf("a = %d, b = %d, f = %d\n", a, b, top->f);
    assert(top->g == a ^ b);
  }
  delete top;
  delete contextp;
  return 0;
}
