/*
 * @Author: Groot
 * @Date: 2022-04-06 19:26:19
 * @LastEditTime: 2022-07-04 22:15:30
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/nemu/tools/gen-expr/gen-expr.c
 * 版权声明
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <unistd.h>
// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
    "#include <stdio.h>\n"
    "int main() { "
    "  int result = %s; "
    "  printf(\"%%u\", result); "
    "  return 0; "
    "}";
static int op_pos = 0;

void gen_rand_expr();
uint32_t choose(uint32_t n);
char* gen_num(char *num_str);
char gen_rand_op();

/* use the bollow func to generate the test expression
 * and write the expression into buf
 */
void gen_rand_expr()
{
  if (op_pos > 999)
  {
    return;
  }  
  switch (choose(3))
  {
    case 0:
    {
      char num_str[4];
      gen_num(num_str);
      for (int i = 0; i < strlen(num_str); i++)
      {
        buf[op_pos] = num_str[i];
        op_pos++;
      }      
      break;
    }      
    case 1:
      buf[op_pos++] = '(';
      gen_rand_expr();
      buf[op_pos++] = ')';
      break;
    default:
      gen_rand_expr();
      buf[op_pos++] = gen_rand_op();
      gen_rand_expr();
      break;
  }
}
int main(int argc, char *argv[])
{
  int seed = time(NULL);
  srand(seed);
  int loop = 1;
  if (argc > 1)
  {
    /* read the format input from argv[1] use format "%d" and store it in loop
     * we will generate loop expressions
     */
    sscanf(argv[1], "%d", &loop);
    // printf("%d\n", loop);
  }
  int i;
  for (i = 0; i < loop; i++)
  {
    gen_rand_expr();
    // usleep(500);

    /* splicing buf to write to code_buf */
    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0)
      continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    fscanf(fp, "%d", &result);
    pclose(fp);
    if (result > 0)
    {
      printf("%u %s\n", result, buf);
    }       
  }
  return 0;
}

uint32_t choose(uint32_t n)
{
  // srand((unsigned)time(NULL));
  return (rand() % n);
}

/*  */
char* gen_num(char *num_str)
{
  // srand(time(NULL));
  int num = rand() % 1024;
  sprintf(num_str, "%d", num);
  // printf("-----%d-----\n", num);
}

char gen_rand_op()
{
  int num = rand() % 5;
  if (num % 2 == 0)
  {
    return '+';
  }
  else if (num % 3 == 0)
  {
    return '-';
  }
  else if (num % 1 == 0)
  {
    return '*';
  }
  else 
  {
    return '/';
  }
}