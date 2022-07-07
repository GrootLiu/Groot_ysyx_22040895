/*
 * @Author: Groot
 * @Date: 2022-04-06 19:26:19
 * @LastEditTime: 2022-07-06 10:04:41
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/nemu/src/nemu-main.c
 * 版权声明
 */
#include <common.h>
// #include "/home/groot/ysyx-workbench/nemu/tools/gen-expr/gen-expr.h"
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

int main(int argc, char *argv[])
{
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
