// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vysyx_22040895_top.h"
#include "Vysyx_22040895_top__Syms.h"
#include "verilated_dpi.h"


void Vysyx_22040895_top::get_inst(int* inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040895_top___024root::get_inst\n"); );
    // Variables
    IData/*31:0*/ inst__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_inst");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_22040895_top__Vcb_get_inst_t __Vcb = (Vysyx_22040895_top__Vcb_get_inst_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_22040895_top__Syms*)(__Vscopep->symsp()), inst__Vcvt);
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) *inst = inst__Vcvt;
}
