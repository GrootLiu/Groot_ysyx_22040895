/*
 * @Author: Groot
 * @Date: 2022-04-06 19:26:19
 * @LastEditTime: 2022-08-04 11:48:22
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/nemu/src/isa/riscv64/difftest/dut.c
 * 版权声明
 */
#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

// 自己实现
bool isa_difftest_checkregs(CPU_state *ref, vaddr_t pc)
{
  for (size_t i = 0; i < 32; i++)
  {
    if (cpu.gpr[i] != ref->gpr[i])
    {
      return false;
    }
  }
  return true;
}

void isa_difftest_attach() {
}
