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
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBus(c+3,"inst_i", false,-1, 31,0);
        tracep->declBus(c+4,"instaddr_o", false,-1, 31,0);
        tracep->declBit(c+1,"top clk", false,-1);
        tracep->declBit(c+2,"top rst", false,-1);
        tracep->declBus(c+3,"top inst_i", false,-1, 31,0);
        tracep->declBus(c+4,"top instaddr_o", false,-1, 31,0);
        tracep->declBit(c+15,"top jmup_branch", false,-1);
        tracep->declBus(c+16,"top dnpc", false,-1, 31,0);
        tracep->declBit(c+5,"top ce_ifu_instrom", false,-1);
        tracep->declBus(c+3,"top inst_ifu_idu", false,-1, 31,0);
        tracep->declBus(c+4,"top pc_ifu_idu", false,-1, 31,0);
        tracep->declBus(c+6,"top opcode_id_cu", false,-1, 6,0);
        tracep->declBus(c+7,"top func3_id_cu", false,-1, 2,0);
        tracep->declBus(c+8,"top func7_id_cu", false,-1, 6,0);
        tracep->declBus(c+9,"top imm1_id_sext", false,-1, 11,0);
        tracep->declBus(c+10,"top imm2_id_sext", false,-1, 19,0);
        tracep->declBus(c+11,"top rs1addr_id_reg", false,-1, 4,0);
        tracep->declBus(c+12,"top rs2addr_id_reg", false,-1, 4,0);
        tracep->declBus(c+13,"top rdaddr_id_reg", false,-1, 4,0);
        tracep->declBus(c+14,"top pc_id_ex", false,-1, 31,0);
        tracep->declBit(c+1,"top my_ifu clk", false,-1);
        tracep->declBit(c+2,"top my_ifu rst", false,-1);
        tracep->declBus(c+3,"top my_ifu inst_i_ifu", false,-1, 31,0);
        tracep->declBit(c+15,"top my_ifu jb_i_ifu", false,-1);
        tracep->declBus(c+16,"top my_ifu dnpc_i_ifu", false,-1, 31,0);
        tracep->declBus(c+3,"top my_ifu inst_o_ifu", false,-1, 31,0);
        tracep->declBus(c+4,"top my_ifu instaddr_o_ifu", false,-1, 31,0);
        tracep->declBus(c+4,"top my_ifu pc_o_ifu", false,-1, 31,0);
        tracep->declBit(c+5,"top my_ifu ce_o_ifu", false,-1);
        tracep->declBit(c+1,"top my_ifu my_pc clk", false,-1);
        tracep->declBit(c+2,"top my_ifu my_pc rst", false,-1);
        tracep->declBit(c+15,"top my_ifu my_pc jb_i_pc", false,-1);
        tracep->declBus(c+16,"top my_ifu my_pc dnpc_i_pc", false,-1, 31,0);
        tracep->declBus(c+4,"top my_ifu my_pc pc_o_pc", false,-1, 31,0);
        tracep->declBit(c+5,"top my_ifu my_pc ce_o_pc", false,-1);
        tracep->declBit(c+2,"top my_idu rst", false,-1);
        tracep->declBus(c+3,"top my_idu inst_i_idu", false,-1, 31,0);
        tracep->declBus(c+4,"top my_idu pc_i_idu", false,-1, 31,0);
        tracep->declBus(c+6,"top my_idu opcode_o_idu", false,-1, 6,0);
        tracep->declBus(c+7,"top my_idu func3_o_idu", false,-1, 2,0);
        tracep->declBus(c+8,"top my_idu func7_o_idu", false,-1, 6,0);
        tracep->declBus(c+9,"top my_idu imm1_o_idu", false,-1, 11,0);
        tracep->declBus(c+10,"top my_idu imm2_o_idu", false,-1, 19,0);
        tracep->declBus(c+11,"top my_idu rs1addr_o_idu", false,-1, 4,0);
        tracep->declBus(c+12,"top my_idu rs2addr_o_idu", false,-1, 4,0);
        tracep->declBus(c+13,"top my_idu rdaddr_o_idu", false,-1, 4,0);
        tracep->declBus(c+14,"top my_idu pc_o_idu", false,-1, 31,0);
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
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->rst));
        tracep->fullIData(oldp+3,(vlSelf->inst_i),32);
        tracep->fullIData(oldp+4,(vlSelf->instaddr_o),32);
        tracep->fullBit(oldp+5,(vlSelf->top__DOT__ce_ifu_instrom));
        tracep->fullCData(oldp+6,(((IData)(vlSelf->rst)
                                    ? (0x7fU & vlSelf->inst_i)
                                    : 0U)),7);
        tracep->fullCData(oldp+7,(((IData)(vlSelf->rst)
                                    ? (7U & (vlSelf->inst_i 
                                             >> 0xcU))
                                    : 0U)),3);
        tracep->fullCData(oldp+8,(((IData)(vlSelf->rst)
                                    ? (vlSelf->inst_i 
                                       >> 0x19U) : 0U)),7);
        tracep->fullSData(oldp+9,(((IData)(vlSelf->rst)
                                    ? (vlSelf->inst_i 
                                       >> 0x14U) : 0U)),12);
        tracep->fullIData(oldp+10,(((IData)(vlSelf->rst)
                                     ? (vlSelf->inst_i 
                                        >> 0xcU) : 0U)),20);
        tracep->fullCData(oldp+11,(((IData)(vlSelf->rst)
                                     ? (0x1fU & (vlSelf->inst_i 
                                                 >> 0xfU))
                                     : 0U)),5);
        tracep->fullCData(oldp+12,(((IData)(vlSelf->rst)
                                     ? (0x1fU & (vlSelf->inst_i 
                                                 >> 0x14U))
                                     : 0U)),5);
        tracep->fullCData(oldp+13,(((IData)(vlSelf->rst)
                                     ? (0x1fU & (vlSelf->inst_i 
                                                 >> 7U))
                                     : 0U)),5);
        tracep->fullIData(oldp+14,(((IData)(vlSelf->rst)
                                     ? vlSelf->instaddr_o
                                     : 0U)),32);
        tracep->fullBit(oldp+15,(0U));
        tracep->fullIData(oldp+16,(0U),32);
    }
}
