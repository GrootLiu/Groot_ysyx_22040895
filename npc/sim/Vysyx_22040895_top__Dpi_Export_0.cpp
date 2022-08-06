// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vysyx_22040895_top.h"
#include "Vysyx_22040895_top__Syms.h"
#include "verilated_dpi.h"


int Vysyx_22040895_top::get_reg_a0() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040895_top___024root::get_reg_a0\n"); );
    // Variables
    IData/*31:0*/ get_reg_a0__Vfuncrtn__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("get_reg_a0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_22040895_top__Vcb_get_reg_a0_t __Vcb = (Vysyx_22040895_top__Vcb_get_reg_a0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_22040895_top__Syms*)(__Vscopep->symsp()), get_reg_a0__Vfuncrtn__Vcvt);
    int get_reg_a0__Vfuncrtn;
    for (size_t get_reg_a0__Vfuncrtn__Vidx = 0; get_reg_a0__Vfuncrtn__Vidx < 1; ++get_reg_a0__Vfuncrtn__Vidx) get_reg_a0__Vfuncrtn = get_reg_a0__Vfuncrtn__Vcvt;
    return get_reg_a0__Vfuncrtn;
}
