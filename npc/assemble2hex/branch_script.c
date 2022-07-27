/*
 * @Author: Groot
 * @Date: 2022-07-26 21:49:02
 * @LastEditTime: 2022-07-26 23:37:49
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/npc/assemble2hex/branch_script.c
 * 版权声明
 */
#include <stdio.h>

void reverse(char *str, int begin, int end)
{
    for (int i = begin; i < (end - begin + 1) / 2; i++)
    {
        char temp;
        temp = str[i];
        str[i] = str[end - i];
        str[end - i] = temp;
    }
}

int main(int argc, char const *argv[])
{
    char imm[12];
    char rs1[5];
    char rs2[5];
    char func3[3];
    printf("立即数为: ");
    scanf("%s", &imm);
    reverse(imm, 0, 11);
    printf("%s\n", imm);

    printf("rs1为: ");
    scanf("%s", &rs1);
    reverse(rs1, 0, 4);
    printf("%s\n", rs1);

    printf("rs2为: ");
    scanf("%s", &rs2);
    reverse(rs2, 0, 4);
    printf("%s\n", rs2);

    printf("func3为: ");
    scanf("%s", &func3);
    reverse(func3, 0, 2);
    char inst[32] = "11000110000000000000000000000000";
    inst[31] = imm[0];
    inst[7] = imm[1];
    for (int i = 25; i <= 30; i++)
    {
        inst[i] = imm[i - 23];
    }
    for (int i = 24; i >= 20; i--)
    {
        inst[i] = rs2[i - 20];
    }
    // printf("%s\n", inst);
    for (int i = 19; i >= 15; i--)
    {
        inst[i] = rs1[i - 15];
    }
    // printf("%s\n", inst);
    for (int i = 14; i >= 12; i--)
    {
        inst[i] = func3[i - 12];
    }
    // printf("%s\n", inst);
    for (int i = 11; i >= 8; i--)
    {
        inst[i] = imm[i];
    }
    printf("%s\n", inst);
    for (int i = 31; i >= 0; i--)
    {
        printf("%c", inst[i]);
    }

    // printf("inst: %s\n",inst);
    return 0;
}
