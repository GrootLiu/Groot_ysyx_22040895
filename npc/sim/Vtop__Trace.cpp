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
    VlWide<3>/*95:0*/ __Vtemp31;
    VlWide<3>/*95:0*/ __Vtemp32;
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp35;
    VlWide<3>/*95:0*/ __Vtemp38;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp45;
    VlWide<3>/*95:0*/ __Vtemp46;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->top__DOT__ce_ifu_instrom));
            tracep->chgQData(oldp+1,(vlSelf->top__DOT__my_regfile__DOT__regs[0]),64);
            tracep->chgQData(oldp+3,(vlSelf->top__DOT__my_regfile__DOT__regs[1]),64);
            tracep->chgQData(oldp+5,(vlSelf->top__DOT__my_regfile__DOT__regs[2]),64);
            tracep->chgQData(oldp+7,(vlSelf->top__DOT__my_regfile__DOT__regs[3]),64);
            tracep->chgQData(oldp+9,(vlSelf->top__DOT__my_regfile__DOT__regs[4]),64);
            tracep->chgQData(oldp+11,(vlSelf->top__DOT__my_regfile__DOT__regs[5]),64);
            tracep->chgQData(oldp+13,(vlSelf->top__DOT__my_regfile__DOT__regs[6]),64);
            tracep->chgQData(oldp+15,(vlSelf->top__DOT__my_regfile__DOT__regs[7]),64);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__my_regfile__DOT__regs[8]),64);
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__my_regfile__DOT__regs[9]),64);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__my_regfile__DOT__regs[10]),64);
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__my_regfile__DOT__regs[11]),64);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__my_regfile__DOT__regs[12]),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__my_regfile__DOT__regs[13]),64);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__my_regfile__DOT__regs[14]),64);
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__my_regfile__DOT__regs[15]),64);
            tracep->chgQData(oldp+33,(vlSelf->top__DOT__my_regfile__DOT__regs[16]),64);
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__my_regfile__DOT__regs[17]),64);
            tracep->chgQData(oldp+37,(vlSelf->top__DOT__my_regfile__DOT__regs[18]),64);
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__my_regfile__DOT__regs[19]),64);
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__my_regfile__DOT__regs[20]),64);
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__my_regfile__DOT__regs[21]),64);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__my_regfile__DOT__regs[22]),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__my_regfile__DOT__regs[23]),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__my_regfile__DOT__regs[24]),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__my_regfile__DOT__regs[25]),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__my_regfile__DOT__regs[26]),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__my_regfile__DOT__regs[27]),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__my_regfile__DOT__regs[28]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__my_regfile__DOT__regs[29]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__my_regfile__DOT__regs[30]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__my_regfile__DOT__regs[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+65,(((0ULL == vlSelf->top__DOT__my_exu__DOT__alu_result) 
                                     & (1U == (1U & 
                                               (- (IData)((IData)(vlSelf->top__DOT__my_cu__DOT__beq_op))))))));
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__opcode_id_cu),7);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__func3_id_cu),3);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__func7_id_cu),7);
            tracep->chgSData(oldp+69,(vlSelf->top__DOT__imm1_id_sext),12);
            tracep->chgIData(oldp+70,(vlSelf->top__DOT__imm2_id_sext),20);
            tracep->chgBit(oldp+71,(((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                     | (0x17U != (IData)(vlSelf->top__DOT__opcode_id_cu)))));
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__simm_sext_opnummux_exu),64);
            tracep->chgCData(oldp+74,(vlSelf->top__DOT__rs1addr_id_reg),5);
            tracep->chgCData(oldp+75,(vlSelf->top__DOT__rs2addr_id_reg),5);
            tracep->chgCData(oldp+76,(vlSelf->top__DOT__rdaddr_id_reg),5);
            tracep->chgBit(oldp+77,((((((((((((((((
                                                   ((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__add_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op))));
            tracep->chgBit(oldp+78,((((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__add_op) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op))));
            tracep->chgBit(oldp+79,((((((((((((((((
                                                   ((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__add_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                     | (0x17U == (IData)(vlSelf->top__DOT__opcode_id_cu)))));
            tracep->chgBit(oldp+80,((1U & ((~ (((((
                                                   ((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                               | (0x17U 
                                                  == (IData)(vlSelf->top__DOT__opcode_id_cu)))) 
                                           | (((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__add_op) 
                                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op))))));
            tracep->chgCData(oldp+81,(vlSelf->top__DOT__aluop_cu_exu),4);
            tracep->chgCData(oldp+82,((1U & (- (IData)((IData)(vlSelf->top__DOT__my_cu__DOT__beq_op))))),3);
            tracep->chgQData(oldp+83,((vlSelf->top__DOT__pc_id_exu 
                                       + vlSelf->top__DOT__simm_sext_opnummux_exu)),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__rdata1_reg_mux),64);
            tracep->chgQData(oldp+87,((((0xaU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                         ? 1U : 0U)
                                        ? (vlSelf->top__DOT__pc_id_exu 
                                           + (vlSelf->top__DOT__opnum2_opnumsel_ex 
                                              << 0xcU))
                                        : vlSelf->top__DOT__my_exu__DOT__alu_result)),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__pc_id_exu),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__opnum2_opnumsel_ex),64);
            tracep->chgQData(oldp+93,((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                        | (0x17U != (IData)(vlSelf->top__DOT__opcode_id_cu)))
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
            tracep->chgQData(oldp+95,((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__imm1_id_sext) 
                                                               >> 0xbU))))) 
                                        << 0xcU) | (QData)((IData)(vlSelf->top__DOT__imm1_id_sext)))),64);
            tracep->chgQData(oldp+97,((((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->top__DOT__imm2_id_sext 
                                                               >> 0x13U))))) 
                                        << 0x14U) | (QData)((IData)(vlSelf->top__DOT__imm2_id_sext)))),64);
            tracep->chgBit(oldp+99,(((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                     & (0U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+100,(vlSelf->top__DOT__my_cu__DOT__addi_op));
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__my_cu__DOT__andi_op));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__my_cu__DOT__ori_op));
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__my_cu__DOT__xori_op));
            tracep->chgBit(oldp+104,(vlSelf->top__DOT__my_cu__DOT__slti_op));
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__my_cu__DOT__sltiu_op));
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__my_cu__DOT__add_op));
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__my_cu__DOT__sub_op));
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__my_cu__DOT__and_op));
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__my_cu__DOT__or_op));
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__my_cu__DOT__xor_op));
            tracep->chgBit(oldp+111,(vlSelf->top__DOT__my_cu__DOT__slt_op));
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__my_cu__DOT__sltu_op));
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__my_cu__DOT__sll_op));
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__my_cu__DOT__srl_op));
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__my_cu__DOT__sra_op));
            tracep->chgBit(oldp+116,((0x17U == (IData)(vlSelf->top__DOT__opcode_id_cu))));
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__my_cu__DOT__beq_op));
            tracep->chgBit(oldp+118,((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                      | (0x17U == (IData)(vlSelf->top__DOT__opcode_id_cu)))));
            tracep->chgBit(oldp+119,((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op))));
            tracep->chgBit(oldp+120,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result))));
            VL_EXTEND_WQ(65,64, __Vtemp31, vlSelf->top__DOT__rdata1_reg_mux);
            VL_EXTEND_WQ(65,64, __Vtemp32, vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__op2);
            VL_ADD_W(3, __Vtemp33, __Vtemp31, __Vtemp32);
            VL_EXTEND_WQ(65,64, __Vtemp34, vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__cin);
            VL_ADD_W(3, __Vtemp35, __Vtemp33, __Vtemp34);
            tracep->chgBit(oldp+121,((1U & (~ (1U & 
                                               __Vtemp35[2U])))));
            tracep->chgBit(oldp+122,((0ULL == vlSelf->top__DOT__my_exu__DOT__alu_result)));
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__my_exu__DOT__alu_result),64);
            tracep->chgBit(oldp+125,(((0xaU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                       ? 1U : 0U)));
            tracep->chgQData(oldp+126,((vlSelf->top__DOT__pc_id_exu 
                                        + (vlSelf->top__DOT__opnum2_opnumsel_ex 
                                           << 0xcU))),64);
            tracep->chgBit(oldp+128,((0U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+129,((1U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+130,((2U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+131,((9U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+132,((3U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+133,((4U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+134,((5U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+135,((6U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+136,((7U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+137,((8U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_result),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result),64);
            VL_EXTEND_WQ(65,64, __Vtemp38, vlSelf->top__DOT__rdata1_reg_mux);
            VL_EXTEND_WQ(65,64, __Vtemp39, vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__op2);
            VL_ADD_W(3, __Vtemp40, __Vtemp38, __Vtemp39);
            VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__cin);
            VL_ADD_W(3, __Vtemp42, __Vtemp40, __Vtemp41);
            tracep->chgQData(oldp+142,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp42[2U])))))),64);
            tracep->chgQData(oldp+144,(VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__rdata1_reg_mux, vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+146,(VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__rdata1_reg_mux, vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+148,(VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__rdata1_reg_mux, vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+150,((vlSelf->top__DOT__rdata1_reg_mux 
                                        & vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+152,((vlSelf->top__DOT__rdata1_reg_mux 
                                        | vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+154,((vlSelf->top__DOT__rdata1_reg_mux 
                                        ^ vlSelf->top__DOT__opnum2_opnumsel_ex)),64);
            VL_EXTEND_WQ(65,64, __Vtemp45, vlSelf->top__DOT__rdata1_reg_mux);
            VL_EXTEND_WQ(65,64, __Vtemp46, vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__op2);
            VL_ADD_W(3, __Vtemp47, __Vtemp45, __Vtemp46);
            VL_EXTEND_WQ(65,64, __Vtemp48, vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__cin);
            VL_ADD_W(3, __Vtemp49, __Vtemp47, __Vtemp48);
            tracep->chgBit(oldp+156,((1U & __Vtemp49[2U])));
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__op2),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__cin),64);
            tracep->chgBit(oldp+161,((1U == (1U & (- (IData)((IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)))))));
        }
        tracep->chgBit(oldp+162,(vlSelf->clk));
        tracep->chgBit(oldp+163,(vlSelf->rst));
        tracep->chgIData(oldp+164,(vlSelf->inst_i),32);
        tracep->chgQData(oldp+165,(vlSelf->instaddr_o),64);
        tracep->chgQData(oldp+167,(((1U & (((IData)(vlSelf->rst) 
                                            | (0U == (IData)(vlSelf->top__DOT__rs2addr_id_reg))) 
                                           | (~ (((
                                                   ((((((((IData)(vlSelf->top__DOT__my_cu__DOT__add_op) 
                                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)))))
                                     ? 0ULL : vlSelf->top__DOT__my_regfile__DOT__regs
                                    [vlSelf->top__DOT__rs2addr_id_reg])),64);
        tracep->chgSData(oldp+169,(((0xf00U & vlSelf->inst_i) 
                                    | ((0xfcU & (vlSelf->inst_i 
                                                 >> 0x17U)) 
                                       | ((2U & (vlSelf->inst_i 
                                                 >> 6U)) 
                                          | (vlSelf->inst_i 
                                             >> 0x1fU))))),12);
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
