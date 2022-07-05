/*
 * @Author: Groot
 * @Date: 2022-04-06 19:26:19
 * @LastEditTime: 2022-07-05 10:19:19
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/nemu/src/nemu-main.c
 * 版权声明
 */
#include <common.h>
#include "sdb/expr.c"
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
  char buf[1024];
  FILE *fp = fopen("nemu/tools/gen-expr/input", "r");
  assert(fp != NULL);

  while (fgets(buf, 2000, fp) != NULL)
  {
    printf("%s\n", buf);
  }
  

  fclose(fp);

  expr();

  return is_exit_status_bad();
}
