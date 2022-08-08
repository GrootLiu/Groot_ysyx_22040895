/*** 
 * @Author: Groot
 * @Date: 2022-08-08 12:05:19
 * @LastEditTime: 2022-08-08 15:28:39
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/main/cpu-excu.cpp
 * @版权声明
 */
int excu_once(VerilatedContext *contextp, VerilatedVcdC *tfp, int exit)
{
	uint32_t pc;
	contextp->timeInc(1);
	if (contextp->time() > 10)
	{
		top->rst = ysyx_22040895_RstDisable;
	}
	if ((contextp->time() % 2) == 0)
	{
		top->clk = 0;
	}
	else if ((contextp->time() % 2) == 1)
	{
		top->clk = 1;
	}
	top->eval();
	if (top->instaddr_o >= 0x80000000 && top->rst == ysyx_22040895_RstDisable)
	{
		pc = top->instaddr_o;
		top->inst_i = paddr_read(pc);
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
	if (exit == 1)
	{
		contextp->gotFinish(true);
	}
	return exit;
}

void excute(VerilatedContext *contextp, VerilatedVcdC *tfp, int n)
{
	int exit = 0;
	int times = 0;
	while (!contextp->gotFinish() && times <= n)
	{
		exit = excu_once(contextp, tfp, exit);
		times++;
	}
}