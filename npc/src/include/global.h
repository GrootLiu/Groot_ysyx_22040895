/*** 
 * @Author: Groot
 * @Date: 2022-08-08 12:08:25
 * @LastEditTime: 2022-11-09 21:12:07
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/src/include/global.h
 * @版权声明
 */
// #include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_22040895_top.h"
#include "utils.h"

#include "verilated_dpi.h"
#include "Vysyx_22040895_top__Dpi.h"


#define EBREAK 0x00100073

#define ysyx_22040895_RstEnable 1
#define ysyx_22040895_RstDisable 0

#define DIFFTEST_TO_DUT  0
#define DIFFTEST_TO_REF 1

VerilatedContext *contextp = NULL;
Vysyx_22040895_top *top = NULL;
VerilatedVcdC *tfp = NULL;


typedef struct CPU_state
{
	uint64_t* cpu_gpr;
	uint64_t pc;
}CPU_state;

CPU_state cpu;
