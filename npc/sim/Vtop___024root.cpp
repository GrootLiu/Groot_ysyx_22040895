// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->top__DOT__rs1addr_id_reg = 0U;
        vlSelf->top__DOT__imm1_id_sext = 0U;
        vlSelf->top__DOT__imm2_id_sext = 0U;
    } else {
        vlSelf->top__DOT__rs1addr_id_reg = (0x1fU & 
                                            (vlSelf->inst_i 
                                             >> 0xfU));
        vlSelf->top__DOT__imm1_id_sext = (vlSelf->inst_i 
                                          >> 0x14U);
        vlSelf->top__DOT__imm2_id_sext = (vlSelf->inst_i 
                                          >> 0xcU);
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__my_regfile__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_regfile__DOT__regs__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__my_regfile__DOT__regs__v0;
    // Body
    __Vdlyvset__top__DOT__my_regfile__DOT__regs__v0 = 0U;
    vlSelf->top__DOT__ce_ifu_instrom = (1U & (~ (IData)(vlSelf->rst)));
    vlSelf->instaddr_o = ((IData)(vlSelf->rst) ? 0x7ffffffcU
                           : ((IData)(4U) + vlSelf->instaddr_o));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((IData)(vlSelf->top__DOT__my_cu__DOT__addi) 
             & (0U != (IData)(vlSelf->top__DOT__rdaddr_id_reg)))) {
            __Vdlyvval__top__DOT__my_regfile__DOT__regs__v0 
                = vlSelf->top__DOT__wdata_ex_reg;
            __Vdlyvset__top__DOT__my_regfile__DOT__regs__v0 = 1U;
            __Vdlyvdim0__top__DOT__my_regfile__DOT__regs__v0 
                = vlSelf->top__DOT__rdaddr_id_reg;
        }
    }
    if (__Vdlyvset__top__DOT__my_regfile__DOT__regs__v0) {
        vlSelf->top__DOT__my_regfile__DOT__regs[__Vdlyvdim0__top__DOT__my_regfile__DOT__regs__v0] 
            = __Vdlyvval__top__DOT__my_regfile__DOT__regs__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__rdaddr_id_reg = ((IData)(vlSelf->rst)
                                        ? 0U : (0x1fU 
                                                & (vlSelf->inst_i 
                                                   >> 7U)));
    vlSelf->top__DOT__my_cu__DOT__addi = ((0x13U == 
                                           ((IData)(vlSelf->rst)
                                             ? 0U : 
                                            (0x7fU 
                                             & vlSelf->inst_i))) 
                                          & (0U == 
                                             ((IData)(vlSelf->rst)
                                               ? 0U
                                               : (7U 
                                                  & (vlSelf->inst_i 
                                                     >> 0xcU)))));
    vlSelf->top__DOT__rdata1_reg_mux = (((IData)(vlSelf->rst) 
                                         | (0U == (IData)(vlSelf->top__DOT__rs1addr_id_reg)))
                                         ? 0ULL : vlSelf->top__DOT__my_regfile__DOT__regs
                                        [vlSelf->top__DOT__rs1addr_id_reg]);
    vlSelf->top__DOT__simm_sext_opnummux = ((IData)(vlSelf->rst)
                                             ? 0ULL
                                             : ((IData)(vlSelf->top__DOT__my_cu__DOT__addi)
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__imm1_id_sext) 
                                                                         >> 0xbU))))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(vlSelf->top__DOT__imm1_id_sext)))
                                                 : 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__imm2_id_sext 
                                                                         >> 0x13U))))) 
                                                  << 0x14U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__imm2_id_sext)))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
