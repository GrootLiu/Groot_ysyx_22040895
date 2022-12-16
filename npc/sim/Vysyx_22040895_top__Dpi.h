// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at vsrc/ysyx_22040895_top.v:101:19
    extern void get_inst(int* inst);

    // DPI IMPORTS
    // DPI import at /home/groot/ysyx-workbench/npc/vsrc/ysyx_22040895_mmu.v:3:30
    extern void pmem_read(long long raddr, long long* rdata, char wmask);
    // DPI import at /home/groot/ysyx-workbench/npc/vsrc/ysyx_22040895_mmu.v:4:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at /home/groot/ysyx-workbench/npc/vsrc/ysyx_22040895_regfile.v:3:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
