/*** 
 * @Author: Groot
 * @Date: 2022-07-22 21:31:37
 * @LastEditTime: 2022-07-29 10:09:08
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/memory/memconf.h
 * @版权声明
 */
#define CONFIG_ISA_riscv64 1
#define CONFIG_DIFFTEST_REF_NAME "none"
#define CONFIG_ENGINE "interpreter"
#define CONFIG_PC_RESET_OFFSET 0x0
#define CONFIG_TARGET_NATIVE_ELF 1
#define CONFIG_MSIZE 0x000000008000000
#define CONFIG_CC_O2 1
#define CONFIG_MODE_SYSTEM 1
#define CONFIG_MEM_RANDOM 1
#define CONFIG_ITRACE 1
#define CONFIG_TRACE_END 10000
#define CONFIG_MBASE 0x0000000080000000
#define CONFIG_TIMER_GETTIMEOFDAY 1
#define CONFIG_ENGINE_INTERPRETER 1
#define CONFIG_CC_OPT "-O2"
#define CONFIG_RT_CHECK 1
#define CONFIG_ISA64 1
#define CONFIG_ITRACE_COND "true"
#define CONFIG_CC "gcc"
#define CONFIG_DIFFTEST_REF_PATH "none"
#define CONFIG_TRACE_START 0
#define CONFIG_CC_GCC 1
#define CONFIG_TRACE 1
#define CONFIG_ISA "riscv64"
#define CONFIG_PMEM_GARRAY 1

#define CONFIG_MTRACE 0
#define CONFIG_FTRACE 1