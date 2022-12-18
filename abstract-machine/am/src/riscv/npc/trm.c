/*
 * @Author: Groot
 * @Date: 2022-04-06 19:54:14
 * @LastEditTime: 2022-08-05 15:31:01
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/abstract-machine/am/src/riscv/npc/trm.c
 * 版权声明
 */
#include <am.h>
#include <klib-macros.h>

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch)
{
}

void halt(int code)
{
	asm __volatile("mv a0, %0; ebreak"
				 :
				 : "r"(code));
	while (1);
}

void _trm_init()
{
	int ret = main(mainargs);
	halt(ret);
}