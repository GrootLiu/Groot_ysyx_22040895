/*
 * @Author: Groot
 * @Date: 2022-04-06 19:26:19
 * @LastEditTime: 2022-08-11 21:28:43
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/nemu/src/cpu/difftest/ref.c
 * 版权声明
 */
#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

typedef struct diff_context_t
{
	uint64_t gpr[32];
	uint64_t pc;
}diff_context_t;

void diff_set_regs(void* diff_context)
{
	diff_context_t *ctx = (diff_context_t*) diff_context;
	for (int i = 0; i < 32; i++)
	{
		cpu.gpr[i] = ctx->gpr[i];
	}
	cpu.pc = ctx->pc;
}

// 目前不需要向NPC的寄存器写值
void diff_get_regs(void* diff_context)
{
	return;
}

// 等用RTL写了存储器之后再写这个
void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction)
{
	assert(0);
}

// `direction`为`DIFFTEST_TO_DUT`时, 获取REF的寄存器状态到`dut`;
// `direction`为`DIFFTEST_TO_REF`时, 设置REF的寄存器状态为`dut`;
void difftest_regcpy(void *dut, bool direction)
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

void difftest_exec(uint64_t n)
{
	cpu_exec(n);
	// assert(0);
}

// 后面中断的时候实现
void difftest_raise_intr(word_t NO)
{
	assert(0);
}

void difftest_init(int port)
{
	/* Perform ISA dependent initialization. */
	init_isa();
}
