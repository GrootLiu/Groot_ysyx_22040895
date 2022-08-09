/*** 
 * @Author: Groot
 * @Date: 2022-08-08 15:05:17
 * @LastEditTime: 2022-08-08 22:55:15
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/src/monitor/sdb.cpp
 * @版权声明
 */
#include "../cpu/cpu-excu.cpp"
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>

static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}


void main_loop(VerilatedContext *contextp, VerilatedVcdC *tfp)
{
	int n;
	for (char *str; (str = rl_gets()) != NULL; )
	{
		char *cmd = strtok(str, " ");
		// if (n == -1)
		// {
		// 	break;
		// }
		printf("%s\n",cmd);
		printf("1\n");
		// excute(contextp, tfp, n);
	}
}