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
        tracep->declBit(c+85,"clk", false,-1);
        tracep->declBit(c+86,"rst", false,-1);
        tracep->declBus(c+87,"inst_i", false,-1, 31,0);
        tracep->declBus(c+88,"instaddr_o", false,-1, 31,0);
        tracep->declBit(c+85,"top clk", false,-1);
        tracep->declBit(c+86,"top rst", false,-1);
        tracep->declBus(c+87,"top inst_i", false,-1, 31,0);
        tracep->declBus(c+88,"top instaddr_o", false,-1, 31,0);
        tracep->declBit(c+20,"top ce_ifu_instrom", false,-1);
        tracep->declBit(c+96,"top pcsel_cu_if", false,-1);
        tracep->declBus(c+87,"top inst_ifu_idu", false,-1, 31,0);
        tracep->declBus(c+88,"top pc_ifu_idu", false,-1, 31,0);
        tracep->declBus(c+89,"top opcode_id_cu", false,-1, 6,0);
        tracep->declBus(c+90,"top func3_id_cu", false,-1, 2,0);
        tracep->declBus(c+91,"top func7_id_cu", false,-1, 6,0);
        tracep->declBus(c+1,"top imm1_id_sext", false,-1, 11,0);
        tracep->declBus(c+2,"top imm2_id_sext", false,-1, 19,0);
        tracep->declBit(c+3,"top immsel_cu_sext", false,-1);
        tracep->declQuad(c+4,"top simm_sext_opnummux", false,-1, 63,0);
        tracep->declBus(c+6,"top rs1addr_id_reg", false,-1, 4,0);
        tracep->declBus(c+92,"top rs2addr_id_reg", false,-1, 4,0);
        tracep->declBus(c+7,"top rdaddr_id_reg", false,-1, 4,0);
        tracep->declBit(c+3,"top re1_cu_reg", false,-1);
        tracep->declBit(c+96,"top re2_cu_reg", false,-1);
        tracep->declBit(c+3,"top we_cu_reg", false,-1);
        tracep->declBus(c+97,"top opsrc_cu_opnumsel", false,-1, 1,0);
        tracep->declQuad(c+8,"top rdata1_reg_mux", false,-1, 63,0);
        tracep->declQuad(c+93,"top rdata2_reg_mux", false,-1, 63,0);
        tracep->declQuad(c+98,"top wdata_ex_reg", false,-1, 63,0);
        tracep->declBus(c+95,"top pc_id_ex", false,-1, 31,0);
        tracep->declQuad(c+10,"top opnum1_opnumsel_ex", false,-1, 63,0);
        tracep->declQuad(c+12,"top opnum2_opnumsel_ex", false,-1, 63,0);
        tracep->declBit(c+85,"top my_ifu clk", false,-1);
        tracep->declBit(c+86,"top my_ifu rst", false,-1);
        tracep->declBus(c+87,"top my_ifu inst_i_ifu", false,-1, 31,0);
        tracep->declBit(c+96,"top my_ifu pcsel_i_ifu", false,-1);
        tracep->declBus(c+100,"top my_ifu dnpc_i_ifu", false,-1, 31,0);
        tracep->declBus(c+87,"top my_ifu inst_o_ifu", false,-1, 31,0);
        tracep->declBus(c+88,"top my_ifu instaddr_o_ifu", false,-1, 31,0);
        tracep->declBus(c+88,"top my_ifu pc_o_ifu", false,-1, 31,0);
        tracep->declBit(c+20,"top my_ifu ce_o_ifu", false,-1);
        tracep->declBit(c+85,"top my_ifu my_pc clk", false,-1);
        tracep->declBit(c+86,"top my_ifu my_pc rst", false,-1);
        tracep->declBit(c+96,"top my_ifu my_pc pcsel_i_pc", false,-1);
        tracep->declBus(c+100,"top my_ifu my_pc dnpc_i_pc", false,-1, 31,0);
        tracep->declBus(c+88,"top my_ifu my_pc pc_o_pc", false,-1, 31,0);
        tracep->declBit(c+20,"top my_ifu my_pc ce_o_pc", false,-1);
        tracep->declBit(c+86,"top my_sext rst", false,-1);
        tracep->declBit(c+3,"top my_sext immsel_i_sext", false,-1);
        tracep->declBus(c+1,"top my_sext imm1_i_sext", false,-1, 11,0);
        tracep->declBus(c+2,"top my_sext imm2_i_sext", false,-1, 19,0);
        tracep->declQuad(c+4,"top my_sext simm_o_sext", false,-1, 63,0);
        tracep->declQuad(c+14,"top my_sext sign_imm_ext", false,-1, 63,0);
        tracep->declQuad(c+16,"top my_sext sign_imm1_ext", false,-1, 63,0);
        tracep->declQuad(c+18,"top my_sext sign_imm2_ext", false,-1, 63,0);
        tracep->declBit(c+86,"top my_idu rst", false,-1);
        tracep->declBus(c+87,"top my_idu inst_i_idu", false,-1, 31,0);
        tracep->declBus(c+88,"top my_idu pc_i_idu", false,-1, 31,0);
        tracep->declBus(c+89,"top my_idu opcode_o_idu", false,-1, 6,0);
        tracep->declBus(c+90,"top my_idu func3_o_idu", false,-1, 2,0);
        tracep->declBus(c+91,"top my_idu func7_o_idu", false,-1, 6,0);
        tracep->declBus(c+1,"top my_idu imm1_o_idu", false,-1, 11,0);
        tracep->declBus(c+2,"top my_idu imm2_o_idu", false,-1, 19,0);
        tracep->declBus(c+6,"top my_idu rs1addr_o_idu", false,-1, 4,0);
        tracep->declBus(c+92,"top my_idu rs2addr_o_idu", false,-1, 4,0);
        tracep->declBus(c+7,"top my_idu rdaddr_o_idu", false,-1, 4,0);
        tracep->declBus(c+95,"top my_idu pc_o_idu", false,-1, 31,0);
        tracep->declBit(c+85,"top my_regfile clk", false,-1);
        tracep->declBit(c+86,"top my_regfile rst", false,-1);
        tracep->declBit(c+3,"top my_regfile re1_i_reg", false,-1);
        tracep->declBit(c+96,"top my_regfile re2_i_reg", false,-1);
        tracep->declBit(c+3,"top my_regfile we_i_reg", false,-1);
        tracep->declBus(c+6,"top my_regfile raddr1_i_reg", false,-1, 4,0);
        tracep->declBus(c+92,"top my_regfile raddr2_i_reg", false,-1, 4,0);
        tracep->declBus(c+7,"top my_regfile waddr_i_reg", false,-1, 4,0);
        tracep->declQuad(c+8,"top my_regfile rdata1_o_reg", false,-1, 63,0);
        tracep->declQuad(c+93,"top my_regfile rdata2_o_reg", false,-1, 63,0);
        tracep->declQuad(c+98,"top my_regfile wdata_i_reg", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+21+i*2,"top my_regfile regs", true,(i+0), 63,0);}}
        tracep->declBus(c+97,"top my_opnumsel opsrc_i_opnumsel", false,-1, 1,0);
        tracep->declQuad(c+4,"top my_opnumsel simm_i_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+8,"top my_opnumsel rdata1_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+93,"top my_opnumsel rdata2_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+10,"top my_opnumsel opnum1_o_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+12,"top my_opnumsel opnum2_o_opnumsel", false,-1, 63,0);
        tracep->declBit(c+86,"top my_cu rst", false,-1);
        tracep->declBus(c+89,"top my_cu opcode_i_cu", false,-1, 6,0);
        tracep->declBus(c+90,"top my_cu func3_i_cu", false,-1, 2,0);
        tracep->declBus(c+91,"top my_cu func7_i_cu", false,-1, 6,0);
        tracep->declBit(c+96,"top my_cu jb_i_cu", false,-1);
        tracep->declBus(c+101,"top my_cu aluop_o_cu", false,-1, 3,0);
        tracep->declBus(c+102,"top my_cu opsel_o_cu", false,-1, 1,0);
        tracep->declBit(c+3,"top my_cu immsel_o_cu", false,-1);
        tracep->declBit(c+3,"top my_cu re1_o_cu", false,-1);
        tracep->declBit(c+96,"top my_cu re2_o_cu", false,-1);
        tracep->declBit(c+3,"top my_cu we_o_cu", false,-1);
        tracep->declBit(c+96,"top my_cu pcsel_o_cu", false,-1);
        tracep->declBus(c+89,"top my_cu op", false,-1, 6,0);
        tracep->declBus(c+90,"top my_cu func3", false,-1, 2,0);
        tracep->declBus(c+91,"top my_cu func7", false,-1, 6,0);
        tracep->declBit(c+3,"top my_cu addi", false,-1);
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
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__my_cu__DOT__addi));
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__simm_sext_opnummux),64);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__rs1addr_id_reg),5);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__rdaddr_id_reg),5);
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__rdata1_reg_mux),64);
        tracep->fullQData(oldp+10,(((2U & (IData)(vlSelf->top__DOT__opsrc_cu_opnumsel))
                                     ? vlSelf->top__DOT__rdata1_reg_mux
                                     : vlSelf->top__DOT__simm_sext_opnummux)),64);
        tracep->fullQData(oldp+12,(((1U & (IData)(vlSelf->top__DOT__opsrc_cu_opnumsel))
                                     ? vlSelf->top__DOT__simm_sext_opnummux
                                     : vlSelf->top__DOT__rdata1_reg_mux)),64);
        tracep->fullQData(oldp+14,(((IData)(vlSelf->top__DOT__my_cu__DOT__addi)
                                     ? (((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__imm1_id_sext) 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(vlSelf->top__DOT__imm1_id_sext)))
                                     : (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->top__DOT__imm2_id_sext 
                                                                >> 0x13U))))) 
                                         << 0x14U) 
                                        | (QData)((IData)(vlSelf->top__DOT__imm2_id_sext))))),64);
        tracep->fullQData(oldp+16,((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__imm1_id_sext) 
                                                            >> 0xbU))))) 
                                     << 0xcU) | (QData)((IData)(vlSelf->top__DOT__imm1_id_sext)))),64);
        tracep->fullQData(oldp+18,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__imm2_id_sext 
                                                            >> 0x13U))))) 
                                     << 0x14U) | (QData)((IData)(vlSelf->top__DOT__imm2_id_sext)))),64);
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__ce_ifu_instrom));
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__my_regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__my_regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__my_regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__my_regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__my_regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__my_regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__my_regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__my_regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__my_regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__my_regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__my_regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__my_regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__my_regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__my_regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__my_regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__my_regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__my_regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__my_regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__my_regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__my_regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__my_regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__my_regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__my_regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__my_regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__my_regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__my_regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__my_regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__my_regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__my_regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__my_regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__my_regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__my_regfile__DOT__regs[31]),64);
        tracep->fullBit(oldp+85,(vlSelf->clk));
        tracep->fullBit(oldp+86,(vlSelf->rst));
        tracep->fullIData(oldp+87,(vlSelf->inst_i),32);
        tracep->fullIData(oldp+88,(vlSelf->instaddr_o),32);
        tracep->fullCData(oldp+89,(((IData)(vlSelf->rst)
                                     ? 0U : (0x7fU 
                                             & vlSelf->inst_i))),7);
        tracep->fullCData(oldp+90,(((IData)(vlSelf->rst)
                                     ? 0U : (7U & (vlSelf->inst_i 
                                                   >> 0xcU)))),3);
        tracep->fullCData(oldp+91,(((IData)(vlSelf->rst)
                                     ? 0U : (vlSelf->inst_i 
                                             >> 0x19U))),7);
        tracep->fullCData(oldp+92,(((IData)(vlSelf->rst)
                                     ? 0U : (0x1fU 
                                             & (vlSelf->inst_i 
                                                >> 0x14U)))),5);
        tracep->fullQData(oldp+93,((((IData)(vlSelf->rst) 
                                     | (0U == (IData)(vlSelf->top__DOT__rs1addr_id_reg)))
                                     ? 0ULL : vlSelf->top__DOT__my_regfile__DOT__regs
                                    [((IData)(vlSelf->rst)
                                       ? 0U : (0x1fU 
                                               & (vlSelf->inst_i 
                                                  >> 0x14U)))])),64);
        tracep->fullIData(oldp+95,(((IData)(vlSelf->rst)
                                     ? 0U : vlSelf->instaddr_o)),32);
        tracep->fullBit(oldp+96,(0U));
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__opsrc_cu_opnumsel),2);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__wdata_ex_reg),64);
        tracep->fullIData(oldp+100,(0U),32);
        tracep->fullCData(oldp+101,(0U),4);
        tracep->fullCData(oldp+102,(0U),2);
    }
}
