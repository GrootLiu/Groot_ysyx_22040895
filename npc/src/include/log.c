/*
 * @Author: Groot
 * @Date: 2022-08-09 16:11:09
 * @LastEditTime: 2022-08-12 12:15:13
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/src/include/log.c
 * 版权声明
 */
FILE *log_fp = NULL;

void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
	assert(fp);
    log_fp = fp;
  }
}

void my_log(char* log_info)
{
	int size = strlen(log_info);
	fwrite(log_info, size, 1, log_fp);
}