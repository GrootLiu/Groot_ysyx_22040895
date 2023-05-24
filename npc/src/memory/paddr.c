/*
 * @Author: Groot
 * @Date: 2022-07-14 22:36:28
 * @LastEditTime: 2022-12-18 15:19:47
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/npc/src/memory/paddr.c
 * 版权声明
 */
// #include "memconf.h"
#include <stdint.h>

#ifndef _STDIO_H
#include <stdio.h>
#endif
#ifndef _STDLIB_H
#include <stdlib.h>
#endif

#include <time.h>
#include "../conf.h"

typedef struct
{
	int year, month, day, hour, minute, second;
} TIME;

#define PG_ALIGN __attribute((aligned(4096)))
#define RESET_VECTOR (CONFIG_MBASE + CONFIG_PC_RESET_OFFSET)
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

uint8_t *guest_to_host(paddr_t paddr)
{ /*printf("g2h: %08x\n", *(pmem + paddr - CONFIG_MBASE)); */
	return pmem + paddr - CONFIG_MBASE;
}
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static uint64_t host_read(void *addr, int len)
{
	switch (len)
	{
	case 1:
		return *(int8_t *)addr;
	case 2:
		return *(int16_t *)addr;
	case 4:
		return *(int32_t *)addr;
	case 8:
		return *(int64_t *)addr;
	}
	// printf("read addr: %08llx\n", *(long long unsigned int*)addr);
	return 0;
}

static void host_write(void *addr, int len, int64_t data)
{
	switch (len)
	{
	case 1:
		*(int8_t *)addr = data;
		return;
	case 2:
		*(int16_t *)addr = data;
		return;
	case 4:
		*(int32_t *)addr = data;
		return;
	case 8:
		*(int64_t *)addr = data;
		// printf("write addr: %08llx\n", *(long long unsigned int*)addr);
		return;
	}
}

int in_pmem(uint64_t addr)
{
	return (addr >= CONFIG_MBASE) && (addr < (uint64_t)CONFIG_MBASE + CONFIG_MSIZE);
}

void outOfBound()
{
	printf("!!!---memory access out of boundry---!!!\n");
	exit(0);
	return;
}
extern "C" void pmem_read(long long raddr, long long *rdata, char wmask)
{
	paddr_t addr = raddr;
	if (addr == 0xa0000048)
	{
		int sec = time((time_t *)NULL);
		*rdata = sec;
	}
	else
	{
		int len = 0;
		switch ((int)wmask)
		{
		case 1:
			len = 1;
			break;
		case 3:
			len = 2;
			break;
		case 15:
			len = 4;
			break;
		case -1:
			len = 8;
			break;
		default:
			break;
		}
		long long ret = host_read(guest_to_host(addr), len);
		// printf("read data: %016llx\n", ret);
		*rdata = ret;
	}
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask)
{
	paddr_t addr = waddr;
	// `wmask`中每比特表示`wdata`中1个字节的掩码,
	// 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
	if (addr == 0xa00003f8)
	{
		char ch = (uint8_t)wdata;
		printf("%c", ch);
	}
	else
	{
		int len = 0;
		switch ((int)wmask)
		{
		case 1:
			len = 1;
			break;
		case 3:
			len = 2;
			break;
		case 15:
			len = 4;
			break;
		case -1:
			len = 8;
			break;
		default:
			break;
		}
		host_write(guest_to_host(addr), len, wdata);
	}
	return;
}

uint32_t paddr_read(uint64_t addr)
{
	if (!in_pmem(addr))
	{
		outOfBound();
		return 0;
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
