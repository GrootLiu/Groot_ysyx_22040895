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
        tracep->chgBit(oldp+0,(vlSelf->clk));
        tracep->chgBit(oldp+1,(vlSelf->rst));
        tracep->chgIData(oldp+2,(vlSelf->inst_i),32);
        tracep->chgIData(oldp+3,(vlSelf->instaddr_o),32);
        tracep->chgBit(oldp+4,(vlSelf->top__DOT__ce_ifu_instrom));
        tracep->chgCData(oldp+5,(((IData)(vlSelf->rst)
                                   ? (0x7fU & vlSelf->inst_i)
                                   : 0U)),7);
        tracep->chgCData(oldp+6,(((IData)(vlSelf->rst)
                                   ? (7U & (vlSelf->inst_i 
                                            >> 0xcU))
                                   : 0U)),3);
        tracep->chgCData(oldp+7,(((IData)(vlSelf->rst)
                                   ? (vlSelf->inst_i 
                                      >> 0x19U) : 0U)),7);
        tracep->chgSData(oldp+8,(((IData)(vlSelf->rst)
                                   ? (vlSelf->inst_i 
                                      >> 0x14U) : 0U)),12);
        tracep->chgIData(oldp+9,(((IData)(vlSelf->rst)
                                   ? (vlSelf->inst_i 
                                      >> 0xcU) : 0U)),20);
        tracep->chgCData(oldp+10,(((IData)(vlSelf->rst)
                                    ? (0x1fU & (vlSelf->inst_i 
                                                >> 0xfU))
                                    : 0U)),5);
        tracep->chgCData(oldp+11,(((IData)(vlSelf->rst)
                                    ? (0x1fU & (vlSelf->inst_i 
                                                >> 0x14U))
                                    : 0U)),5);
        tracep->chgCData(oldp+12,(((IData)(vlSelf->rst)
                                    ? (0x1fU & (vlSelf->inst_i 
                                                >> 7U))
                                    : 0U)),5);
        tracep->chgIData(oldp+13,(((IData)(vlSelf->rst)
                                    ? vlSelf->instaddr_o
                                    : 0U)),32);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
