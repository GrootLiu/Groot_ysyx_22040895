// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vysyx_22040895_top::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vysyx_22040895_top__Dpi.h"
#include "Vysyx_22040895_top.h"

#ifndef VL_DPIDECL_get_inst_
#define VL_DPIDECL_get_inst_
void get_inst(int* inst) {
    // DPI export at sim/../vsrc/ysyx_22040895_ifu.v:30:19
    return Vysyx_22040895_top::get_inst(inst);
}
#endif

