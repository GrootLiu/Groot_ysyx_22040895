/*** 
 * @Author: Groot
 * @Date: 2022-07-16 10:23:43
 * @LastEditTime: 2022-07-16 10:24:53
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/test/compile/trap.h
 * @版权声明
 */
#ifndef __TRAP_H__
#define __TRAP_H__

#include "am.h"
#include "klib.h"
#include "klib-macros.h"

__attribute__((noinline))
void check(bool cond) {
  if (!cond) halt(1);
}

#endif
