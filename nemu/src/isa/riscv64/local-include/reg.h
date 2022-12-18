/*** 
 * @Author: Groot
 * @Date: 2022-04-06 19:26:19
 * @LastEditTime: 2022-07-07 12:13:03
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/nemu/src/isa/riscv64/local-include/reg.h
 * @版权声明
 */
#ifndef __RISCV64_REG_H__
#define __RISCV64_REG_H__

#include <common.h>

static inline int check_reg_idx(int idx) {
  // printf("gpr: %d\n", idx);
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])

static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

#endif
