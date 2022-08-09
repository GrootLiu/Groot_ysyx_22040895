/***
 * @Author: Groot
 * @Date: 2022-08-09 10:07:45
 * @LastEditTime: 2022-08-09 10:14:27
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/npc/src/cpu/regs-dispaly.cpp
 * @版权声明
 */
const char *regs[] = {
	"$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
	"s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
	"a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
	"s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};

void regs_display()
{
	printf("++++++++++++++++++++++++++++++++++++++++++reg info:++++++++++++++++++++++++++++++++++++++++++++++\n");
	for (int i = 1; i <= 32; i++)
	{
		if (i % 1 == 0)
		{
			printf("|");
		}
		printf("%-3s :%-16.8lx\t", regs[i - 1], cpu_gpr[i - 1]);
		if (i % 4 == 0)
		{
			printf("|");
			printf("\n");
		}
	}
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}