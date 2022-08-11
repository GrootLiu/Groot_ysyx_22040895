/***
 * @Author: Groot
 * @Date: 2022-08-08 10:26:30
 * @LastEditTime: 2022-08-10 10:11:23
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/npc/src/monitor/monitor.cpp
 * @版权声明
 */
#include "../memory/paddr.c"
#include "../include/utils.h"
#include "../include/disasm.cc"
#include "../include/log.c"
#include "../include/logo.c"
#include "../ftrace.cpp"
#include <stdio.h>

static char *img_file = NULL;
static void welcome()
{
	printf(ASNI_FMT("%s", ASNI_FG_BLUE), npc_logo);
	printf("%s\n", ASNI_FMT("Welcome to riscv64-NPC!", ASNI_FG_BLUE ASNI_BG_WHITE));
}
static void load_img(char *img_file)
{
	// 初始化内存
	init_mem();
	FILE *fp = fopen(img_file, "rb");
	// printf("img: %s\n", img_file);

	fseek(fp, 0, SEEK_END);
	long size = ftell(fp);

	fseek(fp, 0, SEEK_SET);
	int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);

	fclose(fp);
}
void init_monitor(int argc, char *argv[])
{
	load_img(argv[1]);
	init_log("./log/log");
	init_disasm("riscv64");
#ifdef FTRACE
	init_elf(argv[2]);
#endif
	welcome();
}