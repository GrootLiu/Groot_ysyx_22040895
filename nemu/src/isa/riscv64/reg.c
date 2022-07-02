/*
 * @Author: Groot
 * @Date: 2022-04-06 19:26:19
 * @LastEditTime: 2022-07-02 11:44:08
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

void isa_reg_display() {
  for (int i = 0; i < 32; i++)
  {
    printf("The reg %d's content is: %s\n", i, regs[i]);
  }
  
}

word_t isa_reg_str2val(const char *s, bool *success) {
  return 0;
}
