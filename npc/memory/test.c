/*
 * @Author: Groot
 * @Date: 2022-07-14 23:22:10
 * @LastEditTime: 2022-07-14 23:36:33
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/npc/memory/test.c
 * 版权声明
 */
#include "paddr.c"
// #pragma GCC diagnostic ignored Wincompatible-pointer-types
int main(int argc, char const *argv[])
{
    init_mem();
    for (int i = 0; i < (int)(CONFIG_MSIZE / sizeof(uint32_t)); i++)
    {
        // printf("p[%d] : %u\n", i, pmem[i]);
    }
    uint32_t inst = paddr_read(0x80000002);
    printf("inst: %d\n", inst);
    return 0;
}
