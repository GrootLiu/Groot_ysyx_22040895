/***
 * @Author: Groot
 * @Date: 2022-08-08 15:05:17
 * @LastEditTime: 2022-08-09 10:21:40
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/npc/src/monitor/sdb.cpp
 * @版权声明
 */
#include "../cpu/cpu-excu.cpp"
#include "../cpu/regs-display.cpp"
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>

#define CLOSE "\001\033[0m\002"
#define BEGIN "\001\033[1;36m" "\001\033[1;46m\002"
static char *rl_gets()
{
	static char *line_read = NULL;

	if (line_read)
	{
		free(line_read);
		line_read = NULL;
	}

	line_read = readline(BEGIN "(npc) " CLOSE);

	if (line_read && *line_read)
	{
		add_history(line_read);
	}

	return line_read;
}

static int cmd_help(char *args);
static int cmd_si(char *args);
static int cmd_c(char *args);
static int cmd_q(char *args);

static struct
{
	const char *name;
	const char *description;
	/* the following statement is a function pointer,
	   points a function which name is 'char *'
	 */
	int (*handler)(char *);
} cmd_table[] = {
	{"help", "Display informations about all supported commands", cmd_help},
	{"c", "Continue the execution of the program", cmd_c},
	{"q", "Exit NEMU", cmd_q},

	/* TODO: Add more commands */
	{"si", "si [N]: Let the program step through N instructions and pause execution. When N is not given, it defaults to 1", cmd_si},
	// {"info", "info r or info w: Print register status or Print monitor point information", cmd_info},
	// {"x", "x N EXPR: Calculate the value of the expression EXPR, use the result as the starting memory address, then output consecutive N 4-bytes in hexadecimal form", cmd_x}
};

// 我猜ARRLEN返回cmd_table的长度
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args)
{
	/* extract the first argument */
	/*
	 *the first attribute of func(strtok) is NULL because it isn't the first call of strtok
	 *the second attibute of func(strtok) is 'space' because the parsing string shoud be delimted by 'space'
	 */
	char *arg = strtok(NULL, " ");
	int i;

	if (arg == NULL)
	{
		/* no argument given */
		for (i = 0; i < NR_CMD; i++)
		{
			printf("%-4s - %s\n", cmd_table[i].name, cmd_table[i].description);
		}
	}
	else
	{
		for (i = 0; i < NR_CMD; i++)
		{
			if (strcmp(arg, cmd_table[i].name) == 0)
			{
				printf("%-4s - %s\n", cmd_table[i].name, cmd_table[i].description);
				return 0;
			}
		}
		printf("Unknown command '%s'\n", arg);
	}
	return 0;
}

static int cmd_si(char *args)
{
	int N;
	if (args == NULL)
	{
		N = 1;
	}
	else
	{
		char *arg = strtok(NULL, " ");
		N = atoi(arg);
	}
	int ret = excute(contextp, tfp, N);
	regs_display();
	return ret;
}

static int cmd_c(char *args)
{
	excute(contextp, tfp, -1);
	regs_display();
	return -1;
}

static int cmd_q(char *args)
{
	return -1;
}

void main_loop(VerilatedContext *contextp, VerilatedVcdC *tfp)
{
	int n;
	for (char *str; (str = rl_gets()) != NULL;)
	{
		char *cmd = strtok(str, " ");
		char *str_end = str + strlen(str);
		if (cmd == NULL)
		{
			continue;
		}

		char *args = cmd + strlen(cmd) + 1;
		if (args >= str_end)
		{
			args = NULL;
		}
		int i;
		for (i = 0; i < NR_CMD; i++)
		{
			if (strcmp(cmd, cmd_table[i].name) == 0)
			{
				if (cmd_table[i].handler(args) < 0)
				{
					return;
				}
				break;
			}
		}
		if (i == NR_CMD)
		{
			printf("Unknown command '%s'\n", cmd);
		}
	}
}