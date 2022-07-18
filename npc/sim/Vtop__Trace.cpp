// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlSelf->top__DOT__imm1_id_sext),12);
            tracep->chgIData(oldp+1,(vlSelf->top__DOT__imm2_id_sext),20);
            tracep->chgQData(oldp+2,((((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__imm1_id_sext) 
                                                              >> 0xbU))))) 
                                       << 0xcU) | (QData)((IData)(vlSelf->top__DOT__imm1_id_sext)))),64);
            tracep->chgQData(oldp+4,((((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->top__DOT__imm2_id_sext 
                                                              >> 0x13U))))) 
                                       << 0x14U) | (QData)((IData)(vlSelf->top__DOT__imm2_id_sext)))),64);
        }
        tracep->chgBit(oldp+6,(vlSelf->clk));
        tracep->chgBit(oldp+7,(vlSelf->rst));
        tracep->chgIData(oldp+8,(vlSelf->inst_i),32);
        tracep->chgIData(oldp+9,(vlSelf->instaddr_o),32);
        tracep->chgBit(oldp+10,(vlSelf->top__DOT__ce_ifu_instrom));
        tracep->chgCData(oldp+11,(((IData)(vlSelf->rst)
                                    ? 0U : (0x7fU & vlSelf->inst_i))),7);
        tracep->chgCData(oldp+12,(((IData)(vlSelf->rst)
                                    ? 0U : (7U & (vlSelf->inst_i 
                                                  >> 0xcU)))),3);
        tracep->chgCData(oldp+13,(((IData)(vlSelf->rst)
                                    ? 0U : (vlSelf->inst_i 
                                            >> 0x19U))),7);
        tracep->chgQData(oldp+14,(((IData)(vlSelf->rst)
                                    ? 0ULL : (((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__imm1_id_sext) 
                                                                      >> 0xbU))))) 
                                               << 0xcU) 
                                              | (QData)((IData)(vlSelf->top__DOT__imm1_id_sext))))),64);
        tracep->chgCData(oldp+16,(((IData)(vlSelf->rst)
                                    ? 0U : (0x1fU & 
                                            (vlSelf->inst_i 
                                             >> 0xfU)))),5);
        tracep->chgCData(oldp+17,(((IData)(vlSelf->rst)
                                    ? 0U : (0x1fU & 
                                            (vlSelf->inst_i 
                                             >> 0x14U)))),5);
        tracep->chgCData(oldp+18,(((IData)(vlSelf->rst)
                                    ? 0U : (0x1fU & 
                                            (vlSelf->inst_i 
                                             >> 7U)))),5);
        tracep->chgIData(oldp+19,(((IData)(vlSelf->rst)
                                    ? 0U : vlSelf->instaddr_o)),32);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
