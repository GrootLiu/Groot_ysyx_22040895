/*** 
 * @Author: Groot
 * @Date: 2022-08-08 10:26:30
 * @LastEditTime: 2022-08-08 22:37:37
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/src/monitor/monitor.cpp
 * @版权声明
 */
#include "../memory/paddr.c"
#include "../include/utils.h"
#include <stdio.h>
static char* img_file = NULL;
static void welcome()
{
  printf("Welcome to %s\n", ASNI_FMT("riscv64-NPC!", ASNI_FG_YELLOW ASNI_BG_RED));
}
static void load_img(char *img_file)
{
	// 初始化内存
	init_mem();
	FILE *fp = fopen(img_file, "rb");
	printf("img: %s\n", img_file);

	fseek(fp, 0, SEEK_END);
	long size = ftell(fp);

	fseek(fp, 0, SEEK_SET);
	int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);

	fclose(fp);
}
void init_monitor(int argc, char *argv[])
{
	load_img(argv[1]);
	welcome();
}