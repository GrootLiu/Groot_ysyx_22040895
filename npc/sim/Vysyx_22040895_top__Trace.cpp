// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040895_top__Syms.h"


void Vysyx_22040895_top___024root__traceChgSub0(Vysyx_22040895_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22040895_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040895_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040895_top___024root*>(voidSelf);
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22040895_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040895_top___024root__traceChgSub0(Vysyx_22040895_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((((((((((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
                                           & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))) 
                                          | ((~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result)) 
                                             & (2U 
                                                == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                         | ((IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout) 
                                            & (3U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                        | ((IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result) 
                                           & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                       | ((~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)) 
                                          & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                      | ((0ULL != vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
                                         & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                     | (0x6fU == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                    | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op))));
            tracep->chgCData(oldp+1,(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu),7);
            tracep->chgCData(oldp+2,(vlSelf->ysyx_22040895_top__DOT__func3_id_cu),3);
            tracep->chgCData(oldp+3,(vlSelf->ysyx_22040895_top__DOT__func7_id_cu),7);
            tracep->chgSData(oldp+4,(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext),12);
            tracep->chgIData(oldp+5,(vlSelf->ysyx_22040895_top__DOT__imm2_id_sext),20);
            tracep->chgBit(oldp+6,((1U & ((((((((((
                                                   (((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
                                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op)) 
                                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op)) 
                                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op)) 
                                                    | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op)) 
                                                   | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op)) 
                                                  | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__beq_op)) 
                                                 | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                                                | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                                               | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op)) 
                                              | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__blt_op)) 
                                             | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bltu_op)) 
                                            | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bne_op)) 
                                           | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op)) 
                                          | (~ (((0x17U 
                                                  == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                 | (0x6fU 
                                                    == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                                | (0x37U 
                                                   == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))))))));
            tracep->chgQData(oldp+7,(vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu),64);
            tracep->chgCData(oldp+9,(vlSelf->ysyx_22040895_top__DOT__rs1addr_id_reg),5);
            tracep->chgCData(oldp+10,(vlSelf->ysyx_22040895_top__DOT__rs2addr_id_reg),5);
            tracep->chgCData(oldp+11,(vlSelf->ysyx_22040895_top__DOT__rdaddr_id_reg),5);
            tracep->chgBit(oldp+12,((((((((((((((((
                                                   ((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
                                                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op)) 
                                                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op)) 
                                                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op)) 
                                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op)) 
                                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op)) 
                                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op)) 
                                                    | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op)) 
                                                   | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op)) 
                                                  | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op)) 
                                                 | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op)) 
                                                | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op)) 
                                               | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op)) 
                                              | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op)) 
                                             | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op)) 
                                            | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op)) 
                                           | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__beq_op)) 
                                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op)) 
                                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__blt_op)) 
                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bltu_op)) 
                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bne_op)) 
                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op))));
            tracep->chgBit(oldp+13,(((((((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op) 
                                                   | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op)) 
                                                  | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op)) 
                                                 | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op)) 
                                                | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op)) 
                                               | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op)) 
                                              | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op)) 
                                             | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op)) 
                                            | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op)) 
                                           | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op)) 
                                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__beq_op)) 
                                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op)) 
                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__blt_op)) 
                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bltu_op)) 
                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bne_op))));
            tracep->chgBit(oldp+14,((((((((((((((((
                                                   (((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
                                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op)) 
                                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op)) 
                                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op)) 
                                                    | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op)) 
                                                   | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op)) 
                                                  | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op)) 
                                                 | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op)) 
                                                | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op)) 
                                               | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op)) 
                                              | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op)) 
                                             | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op)) 
                                            | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op)) 
                                           | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op)) 
                                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op)) 
                                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op)) 
                                        | (0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                       | (0x6fU == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op)) 
                                     | (0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)))));
            tracep->chgBit(oldp+15,((1U & ((~ (((((
                                                   ((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
                                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op)) 
                                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op)) 
                                                    | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op)) 
                                                   | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op)) 
                                                  | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op)) 
                                                 | (0x17U 
                                                    == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                                | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op)) 
                                               | (0x37U 
                                                  == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)))) 
                                           | ((((((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op) 
                                                            | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op)) 
                                                           | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op)) 
                                                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op)) 
                                                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op)) 
                                                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op)) 
                                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op)) 
                                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op)) 
                                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op)) 
                                                    | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op)) 
                                                   | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__beq_op)) 
                                                  | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                                                 | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op)) 
                                                | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__blt_op)) 
                                               | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bltu_op)) 
                                              | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bne_op))))));
            tracep->chgCData(oldp+16,(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu),4);
            tracep->chgCData(oldp+17,(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu),3);
            tracep->chgBit(oldp+18,((((((((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
                                          & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))) 
                                         | ((~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result)) 
                                            & (2U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                        | ((IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout) 
                                           & (3U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                       | ((IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result) 
                                          & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                      | ((~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)) 
                                         & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                     | ((0ULL != vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
                                        & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))))));
            tracep->chgQData(oldp+19,(((0xcU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                        ? (0xfffffffffffffffeULL 
                                           & (vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                              + vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu))
                                        : (vlSelf->ysyx_22040895_top__DOT__pc_id_exu 
                                           + (vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu 
                                              << 1U)))),64);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux),64);
            tracep->chgQData(oldp+23,(((((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)) 
                                         | (7U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))) 
                                        | (0xcU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)))
                                        ? (((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                             ? 0ULL
                                             : vlSelf->ysyx_22040895_top__DOT__pc_id_exu) 
                                           + ((0xaU 
                                               == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                               ? (vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex 
                                                  << 0xcU)
                                               : ((
                                                   (7U 
                                                    == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)) 
                                                   | (0xcU 
                                                      == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)))
                                                   ? 4ULL
                                                   : 0ULL)))
                                        : vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result)),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22040895_top__DOT__pc_id_exu),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex),64);
            tracep->chgQData(oldp+29,(((1U & ((((((
                                                   (((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
                                                           | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op)) 
                                                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op)) 
                                                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op)) 
                                                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op)) 
                                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op)) 
                                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__beq_op)) 
                                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                                                    | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                                                   | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op)) 
                                                  | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__blt_op)) 
                                                 | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bltu_op)) 
                                                | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bne_op)) 
                                               | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op)) 
                                              | (~ 
                                                 (((0x17U 
                                                    == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                                   | (0x6fU 
                                                      == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                                  | (0x37U 
                                                     == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))))))
                                        ? (((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext) 
                                                                   >> 0xbU))))) 
                                            << 0xcU) 
                                           | (QData)((IData)(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext)))
                                        : (((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_22040895_top__DOT__imm2_id_sext 
                                                                   >> 0x13U))))) 
                                            << 0x14U) 
                                           | (QData)((IData)(vlSelf->ysyx_22040895_top__DOT__imm2_id_sext))))),64);
            tracep->chgQData(oldp+31,((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext) 
                                                               >> 0xbU))))) 
                                        << 0xcU) | (QData)((IData)(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext)))),64);
            tracep->chgQData(oldp+33,((((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_22040895_top__DOT__imm2_id_sext 
                                                               >> 0x13U))))) 
                                        << 0x14U) | (QData)((IData)(vlSelf->ysyx_22040895_top__DOT__imm2_id_sext)))),64);
            tracep->chgBit(oldp+35,((((((((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                          & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))) 
                                         | ((0x63U 
                                             == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                            & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                        | ((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                           & (7U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                       | ((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                          & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                      | ((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                         & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                     | ((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                        & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))))));
            tracep->chgBit(oldp+36,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                     & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+37,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                     & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+38,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                     & (7U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+39,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                     & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+40,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                     & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+41,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                     & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+42,((0x6fU == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))));
            tracep->chgBit(oldp+43,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op));
            tracep->chgBit(oldp+44,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op));
            tracep->chgBit(oldp+45,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op));
            tracep->chgBit(oldp+46,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op));
            tracep->chgBit(oldp+47,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op));
            tracep->chgBit(oldp+48,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op));
            tracep->chgBit(oldp+49,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op));
            tracep->chgBit(oldp+50,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op));
            tracep->chgBit(oldp+51,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op));
            tracep->chgBit(oldp+52,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op));
            tracep->chgBit(oldp+53,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op));
            tracep->chgBit(oldp+54,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op));
            tracep->chgBit(oldp+55,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op));
            tracep->chgBit(oldp+56,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op));
            tracep->chgBit(oldp+57,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op));
            tracep->chgBit(oldp+58,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op));
            tracep->chgBit(oldp+59,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__beq_op));
            tracep->chgBit(oldp+60,((0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))));
            tracep->chgBit(oldp+61,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op));
            tracep->chgBit(oldp+62,((0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))));
            tracep->chgBit(oldp+63,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op));
            tracep->chgBit(oldp+64,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__blt_op));
            tracep->chgBit(oldp+65,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bltu_op));
            tracep->chgBit(oldp+66,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bne_op));
            tracep->chgBit(oldp+67,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op));
            tracep->chgBit(oldp+68,((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
                                            | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op)) 
                                           | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op)) 
                                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op)) 
                                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op)) 
                                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op)) 
                                       | (0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op)) 
                                     | (0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)))));
            tracep->chgBit(oldp+69,(((((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
                                                 | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op)) 
                                                | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op)) 
                                               | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op)) 
                                              | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op)) 
                                             | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op)) 
                                            | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__beq_op)) 
                                           | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op)) 
                                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__blt_op)) 
                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bltu_op)) 
                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bne_op)) 
                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op))));
            tracep->chgBit(oldp+70,((((0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                      | (0x6fU == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                     | (0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)))));
            tracep->chgBit(oldp+71,((1U & (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result))));
            tracep->chgBit(oldp+72,((1U & (~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)))));
            tracep->chgBit(oldp+73,((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result)));
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result),64);
            tracep->chgQData(oldp+76,((vlSelf->ysyx_22040895_top__DOT__pc_id_exu 
                                       + (vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu 
                                          << 1U))),64);
            tracep->chgBit(oldp+78,((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+79,((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+80,((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+81,((0xcU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgQData(oldp+82,(((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                        ? 0ULL : vlSelf->ysyx_22040895_top__DOT__pc_id_exu)),64);
            tracep->chgQData(oldp+84,(((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                        ? (vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex 
                                           << 0xcU)
                                        : (((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)) 
                                            | (0xcU 
                                               == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)))
                                            ? 4ULL : 0ULL))),64);
            tracep->chgQData(oldp+86,((((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                         ? 0ULL : vlSelf->ysyx_22040895_top__DOT__pc_id_exu) 
                                       + ((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                           ? (vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex 
                                              << 0xcU)
                                           : (((7U 
                                                == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)) 
                                               | (0xcU 
                                                  == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)))
                                               ? 4ULL
                                               : 0ULL)))),64);
            tracep->chgBit(oldp+88,((0U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+89,((1U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+90,((2U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+91,((9U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+92,((3U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+93,((4U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+94,((5U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+95,((6U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+96,((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+97,((8U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgQData(oldp+98,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_result),64);
            tracep->chgQData(oldp+100,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result),64);
            tracep->chgQData(oldp+102,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)))))),64);
            tracep->chgQData(oldp+104,(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+106,(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+108,(VL_SHIFTRS_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+110,((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                        & vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+112,((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                        | vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+114,((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                        ^ vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgBit(oldp+116,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout));
            tracep->chgQData(oldp+117,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__op2),64);
            tracep->chgQData(oldp+119,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__cin),64);
            tracep->chgBit(oldp+121,((1U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+122,((2U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+123,((3U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+124,((4U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+125,((5U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+126,((6U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+127,(((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
                                      & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+128,(((~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result)) 
                                      & (2U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+129,(((IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout) 
                                      & (3U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+130,(((IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result) 
                                      & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+131,(((~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)) 
                                      & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+132,(((0ULL != vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
                                      & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+133,(vlSelf->ysyx_22040895_top__DOT__ce_ifu_instrom));
            tracep->chgQData(oldp+134,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[0]),64);
            tracep->chgQData(oldp+136,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[1]),64);
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[2]),64);
            tracep->chgQData(oldp+140,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[3]),64);
            tracep->chgQData(oldp+142,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[4]),64);
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[5]),64);
            tracep->chgQData(oldp+146,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[6]),64);
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[7]),64);
            tracep->chgQData(oldp+150,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[8]),64);
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[9]),64);
            tracep->chgQData(oldp+154,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[10]),64);
            tracep->chgQData(oldp+156,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[11]),64);
            tracep->chgQData(oldp+158,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[12]),64);
            tracep->chgQData(oldp+160,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[13]),64);
            tracep->chgQData(oldp+162,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[14]),64);
            tracep->chgQData(oldp+164,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[15]),64);
            tracep->chgQData(oldp+166,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[16]),64);
            tracep->chgQData(oldp+168,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[17]),64);
            tracep->chgQData(oldp+170,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[18]),64);
            tracep->chgQData(oldp+172,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[19]),64);
            tracep->chgQData(oldp+174,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[20]),64);
            tracep->chgQData(oldp+176,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[21]),64);
            tracep->chgQData(oldp+178,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[22]),64);
            tracep->chgQData(oldp+180,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[23]),64);
            tracep->chgQData(oldp+182,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[24]),64);
            tracep->chgQData(oldp+184,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[25]),64);
            tracep->chgQData(oldp+186,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[26]),64);
            tracep->chgQData(oldp+188,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[27]),64);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[28]),64);
            tracep->chgQData(oldp+192,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[29]),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[30]),64);
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[31]),64);
        }
        tracep->chgBit(oldp+198,(vlSelf->clk));
        tracep->chgBit(oldp+199,(vlSelf->rst));
        tracep->chgIData(oldp+200,(vlSelf->inst_i),32);
        tracep->chgQData(oldp+201,(vlSelf->instaddr_o),64);
        tracep->chgQData(oldp+203,(((1U & (((IData)(vlSelf->rst) 
                                            | (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__rs2addr_id_reg))) 
                                           | (~ (((
                                                   (((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op) 
                                                               | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op)) 
                                                              | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op)) 
                                                             | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op)) 
                                                            | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op)) 
                                                           | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op)) 
                                                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op)) 
                                                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op)) 
                                                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op)) 
                                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op)) 
                                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__beq_op)) 
                                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                                                    | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op)) 
                                                   | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__blt_op)) 
                                                  | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bltu_op)) 
                                                 | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bne_op)))))
                                     ? 0ULL : vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs
                                    [vlSelf->ysyx_22040895_top__DOT__rs2addr_id_reg])),64);
        tracep->chgSData(oldp+205,(((0xf00U & vlSelf->inst_i) 
                                    | ((0xfcU & (vlSelf->inst_i 
                                                 >> 0x17U)) 
                                       | ((2U & (vlSelf->inst_i 
                                                 >> 6U)) 
                                          | (vlSelf->inst_i 
                                             >> 0x1fU))))),12);
        tracep->chgIData(oldp+206,(((0x80000U & (vlSelf->inst_i 
                                                 >> 0xcU)) 
                                    | ((0x7f800U & 
                                        (vlSelf->inst_i 
                                         >> 1U)) | 
                                       ((0x400U & (vlSelf->inst_i 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->inst_i 
                                            >> 0x15U)))))),20);
    }
}

void Vysyx_22040895_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22040895_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040895_top___024root*>(voidSelf);
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
