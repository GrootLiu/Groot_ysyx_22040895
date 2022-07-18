// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+7,"clk", false,-1);
        tracep->declBit(c+8,"rst", false,-1);
        tracep->declBus(c+9,"inst_i", false,-1, 31,0);
        tracep->declBus(c+10,"instaddr_o", false,-1, 31,0);
        tracep->declBit(c+7,"top clk", false,-1);
        tracep->declBit(c+8,"top rst", false,-1);
        tracep->declBus(c+9,"top inst_i", false,-1, 31,0);
        tracep->declBus(c+10,"top instaddr_o", false,-1, 31,0);
        tracep->declBit(c+21,"top jmup_branch", false,-1);
        tracep->declBus(c+22,"top dnpc", false,-1, 31,0);
        tracep->declBit(c+11,"top ce_ifu_instrom", false,-1);
        tracep->declBus(c+9,"top inst_ifu_idu", false,-1, 31,0);
        tracep->declBus(c+10,"top pc_ifu_idu", false,-1, 31,0);
        tracep->declBus(c+12,"top opcode_id_cu", false,-1, 6,0);
        tracep->declBus(c+13,"top func3_id_cu", false,-1, 2,0);
        tracep->declBus(c+14,"top func7_id_cu", false,-1, 6,0);
        tracep->declBus(c+1,"top imm1_id_sext", false,-1, 11,0);
        tracep->declBus(c+2,"top imm2_id_sext", false,-1, 19,0);
        tracep->declBit(c+23,"top immsel_cu_sext", false,-1);
        tracep->declQuad(c+15,"top simm_sext_opnummux", false,-1, 63,0);
        tracep->declBus(c+17,"top rs1addr_id_reg", false,-1, 4,0);
        tracep->declBus(c+18,"top rs2addr_id_reg", false,-1, 4,0);
        tracep->declBus(c+19,"top rdaddr_id_reg", false,-1, 4,0);
        tracep->declBus(c+20,"top pc_id_ex", false,-1, 31,0);
        tracep->declBit(c+7,"top my_ifu clk", false,-1);
        tracep->declBit(c+8,"top my_ifu rst", false,-1);
        tracep->declBus(c+9,"top my_ifu inst_i_ifu", false,-1, 31,0);
        tracep->declBit(c+21,"top my_ifu jb_i_ifu", false,-1);
        tracep->declBus(c+22,"top my_ifu dnpc_i_ifu", false,-1, 31,0);
        tracep->declBus(c+9,"top my_ifu inst_o_ifu", false,-1, 31,0);
        tracep->declBus(c+10,"top my_ifu instaddr_o_ifu", false,-1, 31,0);
        tracep->declBus(c+10,"top my_ifu pc_o_ifu", false,-1, 31,0);
        tracep->declBit(c+11,"top my_ifu ce_o_ifu", false,-1);
        tracep->declBit(c+7,"top my_ifu my_pc clk", false,-1);
        tracep->declBit(c+8,"top my_ifu my_pc rst", false,-1);
        tracep->declBit(c+21,"top my_ifu my_pc jb_i_pc", false,-1);
        tracep->declBus(c+22,"top my_ifu my_pc dnpc_i_pc", false,-1, 31,0);
        tracep->declBus(c+10,"top my_ifu my_pc pc_o_pc", false,-1, 31,0);
        tracep->declBit(c+11,"top my_ifu my_pc ce_o_pc", false,-1);
        tracep->declBit(c+8,"top my_idu rst", false,-1);
        tracep->declBus(c+9,"top my_idu inst_i_idu", false,-1, 31,0);
        tracep->declBus(c+10,"top my_idu pc_i_idu", false,-1, 31,0);
        tracep->declBus(c+12,"top my_idu opcode_o_idu", false,-1, 6,0);
        tracep->declBus(c+13,"top my_idu func3_o_idu", false,-1, 2,0);
        tracep->declBus(c+14,"top my_idu func7_o_idu", false,-1, 6,0);
        tracep->declBus(c+1,"top my_idu imm1_o_idu", false,-1, 11,0);
        tracep->declBus(c+2,"top my_idu imm2_o_idu", false,-1, 19,0);
        tracep->declBus(c+17,"top my_idu rs1addr_o_idu", false,-1, 4,0);
        tracep->declBus(c+18,"top my_idu rs2addr_o_idu", false,-1, 4,0);
        tracep->declBus(c+19,"top my_idu rdaddr_o_idu", false,-1, 4,0);
        tracep->declBus(c+20,"top my_idu pc_o_idu", false,-1, 31,0);
        tracep->declBit(c+8,"top my_sext rst", false,-1);
        tracep->declBit(c+23,"top my_sext immsel_i_sext", false,-1);
        tracep->declBus(c+1,"top my_sext imm1_i_sext", false,-1, 11,0);
        tracep->declBus(c+2,"top my_sext imm2_i_sext", false,-1, 19,0);
        tracep->declQuad(c+15,"top my_sext simm_o_sext", false,-1, 63,0);
        tracep->declQuad(c+3,"top my_sext sign_imm_ext", false,-1, 63,0);
        tracep->declQuad(c+3,"top my_sext sign_imm1_ext", false,-1, 63,0);
        tracep->declQuad(c+5,"top my_sext sign_imm2_ext", false,-1, 63,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->top__DOT__imm1_id_sext),12);
        tracep->fullIData(oldp+2,(vlSelf->top__DOT__imm2_id_sext),20);
        tracep->fullQData(oldp+3,((((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->top__DOT__imm1_id_sext) 
                                                           >> 0xbU))))) 
                                    << 0xcU) | (QData)((IData)(vlSelf->top__DOT__imm1_id_sext)))),64);
        tracep->fullQData(oldp+5,((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__imm2_id_sext 
                                                           >> 0x13U))))) 
                                    << 0x14U) | (QData)((IData)(vlSelf->top__DOT__imm2_id_sext)))),64);
        tracep->fullBit(oldp+7,(vlSelf->clk));
        tracep->fullBit(oldp+8,(vlSelf->rst));
        tracep->fullIData(oldp+9,(vlSelf->inst_i),32);
        tracep->fullIData(oldp+10,(vlSelf->instaddr_o),32);
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__ce_ifu_instrom));
        tracep->fullCData(oldp+12,(((IData)(vlSelf->rst)
                                     ? 0U : (0x7fU 
                                             & vlSelf->inst_i))),7);
        tracep->fullCData(oldp+13,(((IData)(vlSelf->rst)
                                     ? 0U : (7U & (vlSelf->inst_i 
                                                   >> 0xcU)))),3);
        tracep->fullCData(oldp+14,(((IData)(vlSelf->rst)
                                     ? 0U : (vlSelf->inst_i 
                                             >> 0x19U))),7);
        tracep->fullQData(oldp+15,(((IData)(vlSelf->rst)
                                     ? 0ULL : (((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__imm1_id_sext) 
                                                                       >> 0xbU))))) 
                                                << 0xcU) 
                                               | (QData)((IData)(vlSelf->top__DOT__imm1_id_sext))))),64);
        tracep->fullCData(oldp+17,(((IData)(vlSelf->rst)
                                     ? 0U : (0x1fU 
                                             & (vlSelf->inst_i 
                                                >> 0xfU)))),5);
        tracep->fullCData(oldp+18,(((IData)(vlSelf->rst)
                                     ? 0U : (0x1fU 
                                             & (vlSelf->inst_i 
                                                >> 0x14U)))),5);
        tracep->fullCData(oldp+19,(((IData)(vlSelf->rst)
                                     ? 0U : (0x1fU 
                                             & (vlSelf->inst_i 
                                                >> 7U)))),5);
        tracep->fullIData(oldp+20,(((IData)(vlSelf->rst)
                                     ? 0U : vlSelf->instaddr_o)),32);
        tracep->fullBit(oldp+21,(0U));
        tracep->fullIData(oldp+22,(0U),32);
        tracep->fullBit(oldp+23,(1U));
    }
}
