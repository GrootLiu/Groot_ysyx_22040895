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
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__my_cu__DOT__addi));
            tracep->chgQData(oldp+3,(vlSelf->top__DOT__simm_sext_opnummux),64);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__rs1addr_id_reg),5);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__rdaddr_id_reg),5);
            tracep->chgQData(oldp+7,(vlSelf->top__DOT__rdata1_reg_mux),64);
            tracep->chgQData(oldp+9,(((2U & (IData)(vlSelf->top__DOT__opsrc_cu_opnumsel))
                                       ? vlSelf->top__DOT__rdata1_reg_mux
                                       : vlSelf->top__DOT__simm_sext_opnummux)),64);
            tracep->chgQData(oldp+11,(((1U & (IData)(vlSelf->top__DOT__opsrc_cu_opnumsel))
                                        ? vlSelf->top__DOT__simm_sext_opnummux
                                        : vlSelf->top__DOT__rdata1_reg_mux)),64);
            tracep->chgQData(oldp+13,(((IData)(vlSelf->top__DOT__my_cu__DOT__addi)
                                        ? (((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__imm1_id_sext) 
                                                                   >> 0xbU))))) 
                                            << 0xcU) 
                                           | (QData)((IData)(vlSelf->top__DOT__imm1_id_sext)))
                                        : (((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__imm2_id_sext 
                                                                   >> 0x13U))))) 
                                            << 0x14U) 
                                           | (QData)((IData)(vlSelf->top__DOT__imm2_id_sext))))),64);
            tracep->chgQData(oldp+15,((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__imm1_id_sext) 
                                                               >> 0xbU))))) 
                                        << 0xcU) | (QData)((IData)(vlSelf->top__DOT__imm1_id_sext)))),64);
            tracep->chgQData(oldp+17,((((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->top__DOT__imm2_id_sext 
                                                               >> 0x13U))))) 
                                        << 0x14U) | (QData)((IData)(vlSelf->top__DOT__imm2_id_sext)))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__ce_ifu_instrom));
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__my_regfile__DOT__regs[0]),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__my_regfile__DOT__regs[1]),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__my_regfile__DOT__regs[2]),64);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__my_regfile__DOT__regs[3]),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__my_regfile__DOT__regs[4]),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__my_regfile__DOT__regs[5]),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__my_regfile__DOT__regs[6]),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__my_regfile__DOT__regs[7]),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__my_regfile__DOT__regs[8]),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__my_regfile__DOT__regs[9]),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__my_regfile__DOT__regs[10]),64);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__my_regfile__DOT__regs[11]),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__my_regfile__DOT__regs[12]),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__my_regfile__DOT__regs[13]),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__my_regfile__DOT__regs[14]),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__my_regfile__DOT__regs[15]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__my_regfile__DOT__regs[16]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__my_regfile__DOT__regs[17]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__my_regfile__DOT__regs[18]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__my_regfile__DOT__regs[19]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__my_regfile__DOT__regs[20]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__my_regfile__DOT__regs[21]),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__my_regfile__DOT__regs[22]),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__my_regfile__DOT__regs[23]),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__my_regfile__DOT__regs[24]),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__my_regfile__DOT__regs[25]),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__my_regfile__DOT__regs[26]),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__my_regfile__DOT__regs[27]),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__my_regfile__DOT__regs[28]),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__my_regfile__DOT__regs[29]),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__my_regfile__DOT__regs[30]),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__my_regfile__DOT__regs[31]),64);
        }
        tracep->chgBit(oldp+84,(vlSelf->clk));
        tracep->chgBit(oldp+85,(vlSelf->rst));
        tracep->chgIData(oldp+86,(vlSelf->inst_i),32);
        tracep->chgIData(oldp+87,(vlSelf->instaddr_o),32);
        tracep->chgCData(oldp+88,(((IData)(vlSelf->rst)
                                    ? 0U : (0x7fU & vlSelf->inst_i))),7);
        tracep->chgCData(oldp+89,(((IData)(vlSelf->rst)
                                    ? 0U : (7U & (vlSelf->inst_i 
                                                  >> 0xcU)))),3);
        tracep->chgCData(oldp+90,(((IData)(vlSelf->rst)
                                    ? 0U : (vlSelf->inst_i 
                                            >> 0x19U))),7);
        tracep->chgCData(oldp+91,(((IData)(vlSelf->rst)
                                    ? 0U : (0x1fU & 
                                            (vlSelf->inst_i 
                                             >> 0x14U)))),5);
        tracep->chgQData(oldp+92,((((IData)(vlSelf->rst) 
                                    | (0U == (IData)(vlSelf->top__DOT__rs1addr_id_reg)))
                                    ? 0ULL : vlSelf->top__DOT__my_regfile__DOT__regs
                                   [((IData)(vlSelf->rst)
                                      ? 0U : (0x1fU 
                                              & (vlSelf->inst_i 
                                                 >> 0x14U)))])),64);
        tracep->chgIData(oldp+94,(((IData)(vlSelf->rst)
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
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
