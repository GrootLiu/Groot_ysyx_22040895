// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__my_regfile__DOT__regs[2U] = 0xffffffffULL;
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->top__DOT__rs1addr_id_reg = 0U;
        vlSelf->top__DOT__imm1_id_sext = 0U;
        vlSelf->top__DOT__imm2_id_sext = 0U;
        vlSelf->top__DOT__rdaddr_id_reg = 0U;
    } else {
        vlSelf->top__DOT__rs1addr_id_reg = (0x1fU & 
                                            (vlSelf->inst_i 
                                             >> 0xfU));
        vlSelf->top__DOT__imm1_id_sext = (vlSelf->inst_i 
                                          >> 0x14U);
        vlSelf->top__DOT__imm2_id_sext = (vlSelf->inst_i 
                                          >> 0xcU);
        vlSelf->top__DOT__rdaddr_id_reg = (0x1fU & 
                                           (vlSelf->inst_i 
                                            >> 7U));
    }
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

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst_i = VL_RAND_RESET_I(32);
    vlSelf->instaddr_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ce_ifu_instrom = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imm1_id_sext = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__imm2_id_sext = VL_RAND_RESET_I(20);
    vlSelf->top__DOT__simm_sext_opnummux = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rs1addr_id_reg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rdaddr_id_reg = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__opsrc_cu_opnumsel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__rdata1_reg_mux = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wdata_ex_reg = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__my_regfile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__my_cu__DOT__addi = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
