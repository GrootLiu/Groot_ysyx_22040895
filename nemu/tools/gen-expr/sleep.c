/*
 * @Author: Groot
 * @Date: 2022-07-04 22:02:17
 * @LastEditTime: 2022-07-04 22:16:53
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/nemu/tools/gen-expr/sleep.c
 * 版权声明
 */
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    for (int i = 0; i < 1000; i++)
    {
        int ret = system("./gen-expr 1 >> input ");
        if (ret != 0)
            continue;
        sleep(1);
    }
    return 0;
}
