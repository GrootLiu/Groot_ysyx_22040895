/*
 * @Author: Groot
 * @Date: 2022-07-14 22:36:28
 * @LastEditTime: 2022-08-14 11:52:21
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/npc/src/memory/paddr.c
 * 版权声明
 */
#include "memconf.h"
#include <stdint.h>

#ifndef _STDIO_H
#include <stdio.h>
#endif
#ifndef _STDLIB_H
#include <stdlib.h>
#endif

#define PG_ALIGN __attribute((aligned(4096)))
#define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};


uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

int outOfBound(uint64_t addr)
{
	if ((addr >= CONFIG_MBASE) && (addr < (uint64_t)CONFIG_MBASE + CONFIG_MSIZE))
	{
		return 0;
	}
	return 1;
}

uint32_t paddr_read(uint64_t addr)
{
	// printf("pc: %lx\n", addr);
	if (outOfBound(addr) == 1)
	{
		printf("!!!---memory access out of boundry---!!!\n");
		exit(0);
	}
	else
	{
		uint8_t *paddr = pmem + addr - CONFIG_MBASE;
		return *(uint32_t *)paddr;
	}
}

void init_mem()
{
	uint32_t *p = (uint32_t *)pmem;
	int i;
	for (i = 0; i < (int)(CONFIG_MSIZE / sizeof(p[0])); i++)
	{
		p[i] = rand();
	}
}