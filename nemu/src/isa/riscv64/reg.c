/*
 * @Author: Groot
 * @Date: 2022-04-06 19:26:19
 * @LastEditTime: 2022-07-08 15:47:39
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/nemu/src/isa/riscv64/reg.c
 * 版权声明
 */
#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

/**
 * @description: print all regs' content
 * @return {*}
 * @use: 
 */
void isa_reg_display() {
  printf("++++++++++++++++++++++++++++++++++++++++++reg info:++++++++++++++++++++++++++++++++++++++++++++++\n");
  for (int i = 1; i <= 32; i++)
  {  
    if (i % 1 == 0)
    {
      printf("|");
    }  
    printf("%-3s :%-16.8lx\t", regs[i-1], cpu.gpr[i-1]);
    if (i % 4 == 0)
    {
      printf("|");
      printf("\n");      
    }
  }
  printf("|%-3s :%#-35.16lx\t|\n", "pc", cpu.pc);
  printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}

word_t isa_reg_str2val(const char *s, bool *success) {
  return 0;
}
