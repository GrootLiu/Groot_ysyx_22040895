/***
 * @Author: Groot
 * @Date: 2022-08-08 12:05:19
 * @LastEditTime: 2022-08-10 10:19:40
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/npc/src/cpu/cpu-excu.cpp
 * @版权声明
 */
#include "dut.cpp"

#ifdef ITRACE
char inst_asm[128];
#endif
#ifdef FTRACE
int func_depth = 0;
#endif

int excu_once(int exit)
{
	contextp->timeInc(1);
	if (contextp->time() >= 0)
	{
		top->rst = ysyx_22040895_RstDisable;
	}
	if ((contextp->time() % 2) == 1)
	{
		top->clk = 1;
	}
	else if ((contextp->time() % 2) == 0)
	{
		top->clk = 0;
	}
	top->eval();
	if (top->clk == 1)
	{
#ifdef ITRACE
		int inst;
		svSetScope(svGetScopeFromName("TOP.ysyx_22040895_top.my_ifu"));
		get_inst(&inst);
		disassemble(inst_asm, 128, cpu.pc, (uint8_t *)&inst, 4);
		char log_buf[256];
		sprintf(log_buf, "%016x: inst %s\n", inst, inst_asm);
		my_log(log_buf);
#endif
	}
	if (top->instaddr_o >= 0x80000000 && top->rst == ysyx_22040895_RstDisable)
	{
		cpu.pc = top->instaddr_o;

		top->inst_i = paddr_read(cpu.pc);
		if (top->inst_i == EBREAK)
		{
			exit = 1;
			top->eval();
			tfp->dump(contextp->time());
			return exit;
		}
	}
	top->eval();
	tfp->dump(contextp->time());

	if (top->clk == 1)
	{
#ifdef FTRACE
		char func_name[128];
		char func_buff[1024];
		if (inst_asm[0] == 'j')
		{
			printf("j\n");
			char *c = func_buff;
			find_func(func_name, cpu.pc);
			memset(c, ' ', func_depth);
			c += func_depth;
			sprintf(c, "call function: [%s@0x%8lx]\n", func_name, cpu.pc);
			printf("%s", func_buff);
			my_log(func_buff);
			func_depth++;
		}
		else if (inst_asm[0] == 'r')
		{
			printf("r\n");
			char *c = func_buff;
			func_depth--;
			memset(c, ' ', func_depth);
			c += func_depth;
			sprintf(c, "ret function: [%s@0x%8lx]\n", func_name, cpu.pc);
			printf("%s", func_buff);
			my_log(func_buff);
		}
#endif
	}

	if (exit == 1)
	{
		contextp->gotFinish(true);
	}
	return exit;
}

int trig_once(int exit)
{

	exit = excu_once(exit);
	if (exit == 1)
	{
		return exit;
	}
	exit = excu_once(exit);
	printf("exit: %d\n", exit);
#ifdef DIFFTEST
	difftest_step(cpu.pc);
#endif
	return exit;
}

int excute(int n)
{
	int exit = 0;
	int times = 0;
	if (n == -1)
	{
		while (!contextp->gotFinish())
		{
			exit = trig_once(exit);
			times++;
			printf("11111111111111\n");
		}
	}
	else
	{
		while (!contextp->gotFinish() && times < n)
		{
			exit = trig_once(exit);
			times++;
		}
	}
	if (exit == 1)
	{
		return -1;
	}
	return 0;
}