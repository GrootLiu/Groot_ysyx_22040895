/*
 * @Author: Groot
 * @Date: 2022-04-06 19:26:19
 * @LastEditTime: 2022-08-14 11:58:40
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/nemu/src/cpu/difftest/ref.c
 * 版权声明
 */
#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
#ifdef _STDIO_H
#include <stdio.h>
#endif

typedef struct diff_context_t
{
	uint64_t gpr[32];
	vaddr_t pc;
} diff_context_t;

void diff_set_regs(void *diff_context)
{

	diff_context_t *ctx = (diff_context_t *)diff_context;
	for (int i = 0; i < 32; i++)
	{
		cpu.gpr[i] = ctx->gpr[i];
	}
	cpu.pc = ctx->pc;
}

void diff_get_regs(void *diff_context)
{
	diff_context_t *ctx = (diff_context_t *)diff_context;
	for (int i = 0; i < 32; i++)
	{
		ctx->gpr[i] = cpu.gpr[i];
	}
	ctx->pc = cpu.pc;
}

void diff_memcpy(paddr_t dest, void* src , size_t n)
{
	memcpy(guest_to_host(dest), src, n);
}

void my_difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction)
{
	if (direction == DIFFTEST_TO_REF)
	{
		diff_memcpy(addr, buf, n);
	}
	else
	{
		assert(0);
	}
}

// `direction`为`DIFFTEST_TO_DUT`时, 获取REF的寄存器状态到`dut`;
// `direction`为`DIFFTEST_TO_REF`时, 设置REF的寄存器状态为`dut`;
void my_difftest_regcpy(void *dut, bool direction)
{
	if (direction == DIFFTEST_TO_REF)
	{
		diff_set_regs(dut);
	}
	else
	{
		diff_get_regs(dut);
	}
	// assert(0);
}

void my_difftest_exec(uint64_t n)
{
	cpu_exec(1);
	// assert(0);
}

// 后面中断的时候实现
void difftest_raise_intr(word_t NO)
{
	
	assert(0);
}

void my_difftest_init(int port)
{
	/* Perform ISA dependent initialization. */
	init_isa();
}