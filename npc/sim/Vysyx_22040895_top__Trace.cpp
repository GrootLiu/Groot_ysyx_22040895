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
            tracep->chgBit(oldp+0,((((((((((0ULL == vlSelf->top__DOT__my_exu__DOT__alu_result) 
                                           & (1U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))) 
                                          | ((~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result)) 
                                             & (2U 
                                                == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                         | ((IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout) 
                                            & (3U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                        | ((IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result) 
                                           & (4U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                       | ((~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)) 
                                          & (5U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                      | ((0ULL != vlSelf->top__DOT__my_exu__DOT__alu_result) 
                                         & (6U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                     | (0x6fU == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op))));
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__opcode_id_cu),7);
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__func3_id_cu),3);
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__func7_id_cu),7);
            tracep->chgSData(oldp+4,(vlSelf->top__DOT__imm1_id_sext),12);
            tracep->chgIData(oldp+5,(vlSelf->top__DOT__imm2_id_sext),20);
            tracep->chgBit(oldp+6,((1U & ((((((((((
                                                   ((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__bgeu_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__blt_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__bltu_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__bne_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__store_op)) 
                                          | (~ (((0x17U 
                                                  == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                                 | (0x6fU 
                                                    == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                                | (0x37U 
                                                   == (IData)(vlSelf->top__DOT__opcode_id_cu))))))));
            tracep->chgQData(oldp+7,(vlSelf->top__DOT__simm_sext_opnummux_exu),64);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__rs1addr_id_reg),5);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__rs2addr_id_reg),5);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__rdaddr_id_reg),5);
            tracep->chgBit(oldp+12,((((((((((((((((
                                                   (((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
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
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__bgeu_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__blt_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__bltu_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__bne_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op)) 
                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__store_op))));
            tracep->chgBit(oldp+13,((((((((((((((((
                                                   ((IData)(vlSelf->top__DOT__my_cu__DOT__add_op) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__bgeu_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__blt_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__bltu_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__bne_op)) 
                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__store_op))));
            tracep->chgBit(oldp+14,((((((((((((((((
                                                   (((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
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
                                        | (0x17U == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                       | (0x6fU == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op)) 
                                     | (0x37U == (IData)(vlSelf->top__DOT__opcode_id_cu)))));
            tracep->chgBit(oldp+15,((1U & ((~ (((((
                                                   ((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                                 | (0x17U 
                                                    == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op)) 
                                               | (0x37U 
                                                  == (IData)(vlSelf->top__DOT__opcode_id_cu)))) 
                                           | (((((((((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__add_op) 
                                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__bgeu_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__blt_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__bltu_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__bne_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__store_op))))));
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__aluop_cu_exu),4);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__bcuop_cu_exu),3);
            tracep->chgBit(oldp+18,((((((((0ULL == vlSelf->top__DOT__my_exu__DOT__alu_result) 
                                          & (1U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))) 
                                         | ((~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result)) 
                                            & (2U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                        | ((IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout) 
                                           & (3U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                       | ((IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result) 
                                          & (4U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                      | ((~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)) 
                                         & (5U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))) 
                                     | ((0ULL != vlSelf->top__DOT__my_exu__DOT__alu_result) 
                                        & (6U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))))));
            tracep->chgQData(oldp+19,(((0xcU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                        ? (0xfffffffffffffffeULL 
                                           & (vlSelf->top__DOT__rdata1_reg_mux 
                                              + vlSelf->top__DOT__simm_sext_opnummux_exu))
                                        : (vlSelf->top__DOT__pc_id_exu 
                                           + (vlSelf->top__DOT__simm_sext_opnummux_exu 
                                              << 1U)))),64);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__rdata1_reg_mux),64);
            tracep->chgQData(oldp+23,(((IData)(vlSelf->top__DOT__my_cu__DOT__store_op)
                                        ? vlSelf->top__DOT__my_mmu__DOT__rmdata_i_mmu
                                        : ((((0xaU 
                                              == (IData)(vlSelf->top__DOT__aluop_cu_exu)) 
                                             | (7U 
                                                == (IData)(vlSelf->top__DOT__bcuop_cu_exu))) 
                                            | (0xcU 
                                               == (IData)(vlSelf->top__DOT__aluop_cu_exu)))
                                            ? (((0xbU 
                                                 == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                                 ? 0ULL
                                                 : vlSelf->top__DOT__pc_id_exu) 
                                               + ((0xaU 
                                                   == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                                   ? 
                                                  (vlSelf->top__DOT__opnum2_opnumsel_ex 
                                                   << 0xcU)
                                                   : 
                                                  (((7U 
                                                     == (IData)(vlSelf->top__DOT__bcuop_cu_exu)) 
                                                    | (0xcU 
                                                       == (IData)(vlSelf->top__DOT__aluop_cu_exu)))
                                                    ? 4ULL
                                                    : 0ULL)))
                                            : vlSelf->top__DOT__my_exu__DOT__alu_result))),64);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__pc_id_exu),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__opnum2_opnumsel_ex),64);
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__my_cu__DOT__store_op));
            tracep->chgCData(oldp+30,(((1U & (- (IData)(
                                                        ((0x23U 
                                                          == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                                         & (1U 
                                                            == (IData)(vlSelf->top__DOT__func3_id_cu)))))) 
                                       | (2U & (- (IData)(
                                                          ((0x23U 
                                                            == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                                           & (2U 
                                                              == (IData)(vlSelf->top__DOT__func3_id_cu)))))))),2);
            tracep->chgQData(oldp+31,(((((0xaU == (IData)(vlSelf->top__DOT__aluop_cu_exu)) 
                                         | (7U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))) 
                                        | (0xcU == (IData)(vlSelf->top__DOT__aluop_cu_exu)))
                                        ? (((0xbU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                             ? 0ULL
                                             : vlSelf->top__DOT__pc_id_exu) 
                                           + ((0xaU 
                                               == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                               ? (vlSelf->top__DOT__opnum2_opnumsel_ex 
                                                  << 0xcU)
                                               : ((
                                                   (7U 
                                                    == (IData)(vlSelf->top__DOT__bcuop_cu_exu)) 
                                                   | (0xcU 
                                                      == (IData)(vlSelf->top__DOT__aluop_cu_exu)))
                                                   ? 4ULL
                                                   : 0ULL)))
                                        : vlSelf->top__DOT__my_exu__DOT__alu_result)),64);
            tracep->chgQData(oldp+33,(((1U & ((((((
                                                   ((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__bgeu_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__blt_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__bltu_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__bne_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__store_op)) 
                                              | (~ 
                                                 (((0x17U 
                                                    == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                                   | (0x6fU 
                                                      == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                                  | (0x37U 
                                                     == (IData)(vlSelf->top__DOT__opcode_id_cu))))))
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
            tracep->chgQData(oldp+35,((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__imm1_id_sext) 
                                                               >> 0xbU))))) 
                                        << 0xcU) | (QData)((IData)(vlSelf->top__DOT__imm1_id_sext)))),64);
            tracep->chgQData(oldp+37,((((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->top__DOT__imm2_id_sext 
                                                               >> 0x13U))))) 
                                        << 0x14U) | (QData)((IData)(vlSelf->top__DOT__imm2_id_sext)))),64);
            tracep->chgBit(oldp+39,((((((((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                          & (0U == (IData)(vlSelf->top__DOT__func3_id_cu))) 
                                         | ((0x63U 
                                             == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                            & (5U == (IData)(vlSelf->top__DOT__func3_id_cu)))) 
                                        | ((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                           & (7U == (IData)(vlSelf->top__DOT__func3_id_cu)))) 
                                       | ((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                          & (4U == (IData)(vlSelf->top__DOT__func3_id_cu)))) 
                                      | ((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                         & (6U == (IData)(vlSelf->top__DOT__func3_id_cu)))) 
                                     | ((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                        & (1U == (IData)(vlSelf->top__DOT__func3_id_cu))))));
            tracep->chgBit(oldp+40,(((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                     & (0U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+41,(((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                     & (5U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+42,(((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                     & (7U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+43,(((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                     & (4U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+44,(((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                     & (6U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+45,(((0x63U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                     & (1U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+46,((0x6fU == (IData)(vlSelf->top__DOT__opcode_id_cu))));
            tracep->chgBit(oldp+47,((0x23U == (IData)(vlSelf->top__DOT__opcode_id_cu))));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__my_cu__DOT__addi_op));
            tracep->chgBit(oldp+49,(vlSelf->top__DOT__my_cu__DOT__add_op));
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__my_cu__DOT__sub_op));
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__my_cu__DOT__andi_op));
            tracep->chgBit(oldp+52,(vlSelf->top__DOT__my_cu__DOT__and_op));
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__my_cu__DOT__sll_op));
            tracep->chgBit(oldp+54,(vlSelf->top__DOT__my_cu__DOT__ori_op));
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__my_cu__DOT__or_op));
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__my_cu__DOT__srl_op));
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__my_cu__DOT__xori_op));
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__my_cu__DOT__xor_op));
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__my_cu__DOT__sra_op));
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__my_cu__DOT__slti_op));
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__my_cu__DOT__slt_op));
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__my_cu__DOT__sltiu_op));
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__my_cu__DOT__sltu_op));
            tracep->chgBit(oldp+64,(vlSelf->top__DOT__my_cu__DOT__beq_op));
            tracep->chgBit(oldp+65,((0x17U == (IData)(vlSelf->top__DOT__opcode_id_cu))));
            tracep->chgBit(oldp+66,(((0x23U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                     & (0U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+67,(vlSelf->top__DOT__my_cu__DOT__bge_op));
            tracep->chgBit(oldp+68,((0x37U == (IData)(vlSelf->top__DOT__opcode_id_cu))));
            tracep->chgBit(oldp+69,(((0x23U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                     & (1U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+70,(vlSelf->top__DOT__my_cu__DOT__bgeu_op));
            tracep->chgBit(oldp+71,(((0x23U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                     & (2U == (IData)(vlSelf->top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__my_cu__DOT__blt_op));
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__my_cu__DOT__bltu_op));
            tracep->chgBit(oldp+74,(vlSelf->top__DOT__my_cu__DOT__bne_op));
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__my_cu__DOT__jalr_op));
            tracep->chgBit(oldp+76,((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                       | (0x17U == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op)) 
                                     | (0x37U == (IData)(vlSelf->top__DOT__opcode_id_cu)))));
            tracep->chgBit(oldp+77,((((((((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__addi_op) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__andi_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__ori_op)) 
                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__xori_op)) 
                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__slti_op)) 
                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__sltiu_op)) 
                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__bgeu_op)) 
                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__blt_op)) 
                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__bltu_op)) 
                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__bne_op)) 
                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__jalr_op)) 
                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__store_op))));
            tracep->chgBit(oldp+78,((((0x17U == (IData)(vlSelf->top__DOT__opcode_id_cu)) 
                                      | (0x6fU == (IData)(vlSelf->top__DOT__opcode_id_cu))) 
                                     | (0x37U == (IData)(vlSelf->top__DOT__opcode_id_cu)))));
            tracep->chgBit(oldp+79,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result))));
            tracep->chgBit(oldp+80,((1U & (~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)))));
            tracep->chgBit(oldp+81,((0ULL == vlSelf->top__DOT__my_exu__DOT__alu_result)));
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__my_exu__DOT__op2_i_alu),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__my_exu__DOT__alu_result),64);
            tracep->chgQData(oldp+86,((vlSelf->top__DOT__pc_id_exu 
                                       + (vlSelf->top__DOT__simm_sext_opnummux_exu 
                                          << 1U))),64);
            tracep->chgBit(oldp+88,((0xaU == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+89,((0xbU == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+90,((7U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+91,((0xcU == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgQData(oldp+92,(((0xbU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                        ? 0ULL : vlSelf->top__DOT__pc_id_exu)),64);
            tracep->chgQData(oldp+94,(((0xaU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                        ? (vlSelf->top__DOT__opnum2_opnumsel_ex 
                                           << 0xcU)
                                        : (((7U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)) 
                                            | (0xcU 
                                               == (IData)(vlSelf->top__DOT__aluop_cu_exu)))
                                            ? 4ULL : 0ULL))),64);
            tracep->chgQData(oldp+96,((((0xbU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                         ? 0ULL : vlSelf->top__DOT__pc_id_exu) 
                                       + ((0xaU == (IData)(vlSelf->top__DOT__aluop_cu_exu))
                                           ? (vlSelf->top__DOT__opnum2_opnumsel_ex 
                                              << 0xcU)
                                           : (((7U 
                                                == (IData)(vlSelf->top__DOT__bcuop_cu_exu)) 
                                               | (0xcU 
                                                  == (IData)(vlSelf->top__DOT__aluop_cu_exu)))
                                               ? 4ULL
                                               : 0ULL)))),64);
            tracep->chgBit(oldp+98,((0U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+99,((1U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+100,((2U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+101,((9U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+102,((3U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+103,((4U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+104,((5U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+105,((6U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+106,((7U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+107,((8U == (IData)(vlSelf->top__DOT__aluop_cu_exu))));
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_result),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result),64);
            tracep->chgQData(oldp+112,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)))))),64);
            tracep->chgQData(oldp+114,(VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__rdata1_reg_mux, vlSelf->top__DOT__my_exu__DOT__op2_i_alu)),64);
            tracep->chgQData(oldp+116,(VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__rdata1_reg_mux, vlSelf->top__DOT__my_exu__DOT__op2_i_alu)),64);
            tracep->chgQData(oldp+118,(VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__rdata1_reg_mux, vlSelf->top__DOT__my_exu__DOT__op2_i_alu)),64);
            tracep->chgQData(oldp+120,((vlSelf->top__DOT__rdata1_reg_mux 
                                        & vlSelf->top__DOT__my_exu__DOT__op2_i_alu)),64);
            tracep->chgQData(oldp+122,((vlSelf->top__DOT__rdata1_reg_mux 
                                        | vlSelf->top__DOT__my_exu__DOT__op2_i_alu)),64);
            tracep->chgQData(oldp+124,((vlSelf->top__DOT__rdata1_reg_mux 
                                        ^ vlSelf->top__DOT__my_exu__DOT__op2_i_alu)),64);
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout));
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__op2),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__cin),64);
            tracep->chgBit(oldp+131,((1U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+132,((2U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+133,((3U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+134,((4U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+135,((5U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+136,((6U == (IData)(vlSelf->top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+137,(((0ULL == vlSelf->top__DOT__my_exu__DOT__alu_result) 
                                      & (1U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+138,(((~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result)) 
                                      & (2U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+139,(((IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout) 
                                      & (3U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+140,(((IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__slt_result) 
                                      & (4U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+141,(((~ (IData)(vlSelf->top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)) 
                                      & (5U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+142,(((0ULL != vlSelf->top__DOT__my_exu__DOT__alu_result) 
                                      & (6U == (IData)(vlSelf->top__DOT__bcuop_cu_exu)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+143,(vlSelf->top__DOT__ce_ifu_instrom));
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__my_regfile__DOT__regs[0]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__my_regfile__DOT__regs[1]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__my_regfile__DOT__regs[2]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__my_regfile__DOT__regs[3]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__my_regfile__DOT__regs[4]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__my_regfile__DOT__regs[5]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__my_regfile__DOT__regs[6]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__my_regfile__DOT__regs[7]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__my_regfile__DOT__regs[8]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__my_regfile__DOT__regs[9]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__my_regfile__DOT__regs[10]),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__my_regfile__DOT__regs[11]),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__my_regfile__DOT__regs[12]),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__my_regfile__DOT__regs[13]),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__my_regfile__DOT__regs[14]),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__my_regfile__DOT__regs[15]),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__my_regfile__DOT__regs[16]),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__my_regfile__DOT__regs[17]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__my_regfile__DOT__regs[18]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__my_regfile__DOT__regs[19]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__my_regfile__DOT__regs[20]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__my_regfile__DOT__regs[21]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__my_regfile__DOT__regs[22]),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__my_regfile__DOT__regs[23]),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__my_regfile__DOT__regs[24]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__my_regfile__DOT__regs[25]),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__my_regfile__DOT__regs[26]),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__my_regfile__DOT__regs[27]),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__my_regfile__DOT__regs[28]),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__my_regfile__DOT__regs[29]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__my_regfile__DOT__regs[30]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__my_regfile__DOT__regs[31]),64);
        }
        tracep->chgBit(oldp+208,(vlSelf->clk));
        tracep->chgBit(oldp+209,(vlSelf->rst));
        tracep->chgIData(oldp+210,(vlSelf->inst_i),32);
        tracep->chgQData(oldp+211,(vlSelf->instaddr_o),64);
        tracep->chgQData(oldp+213,(((1U & (((IData)(vlSelf->rst) 
                                            | (0U == (IData)(vlSelf->top__DOT__rs2addr_id_reg))) 
                                           | (~ (((
                                                   ((((((((((((((IData)(vlSelf->top__DOT__my_cu__DOT__add_op) 
                                                                | (IData)(vlSelf->top__DOT__my_cu__DOT__sub_op)) 
                                                               | (IData)(vlSelf->top__DOT__my_cu__DOT__and_op)) 
                                                              | (IData)(vlSelf->top__DOT__my_cu__DOT__or_op)) 
                                                             | (IData)(vlSelf->top__DOT__my_cu__DOT__xor_op)) 
                                                            | (IData)(vlSelf->top__DOT__my_cu__DOT__slt_op)) 
                                                           | (IData)(vlSelf->top__DOT__my_cu__DOT__sltu_op)) 
                                                          | (IData)(vlSelf->top__DOT__my_cu__DOT__sll_op)) 
                                                         | (IData)(vlSelf->top__DOT__my_cu__DOT__srl_op)) 
                                                        | (IData)(vlSelf->top__DOT__my_cu__DOT__sra_op)) 
                                                       | (IData)(vlSelf->top__DOT__my_cu__DOT__beq_op)) 
                                                      | (IData)(vlSelf->top__DOT__my_cu__DOT__bge_op)) 
                                                     | (IData)(vlSelf->top__DOT__my_cu__DOT__bgeu_op)) 
                                                    | (IData)(vlSelf->top__DOT__my_cu__DOT__blt_op)) 
                                                   | (IData)(vlSelf->top__DOT__my_cu__DOT__bltu_op)) 
                                                  | (IData)(vlSelf->top__DOT__my_cu__DOT__bne_op)) 
                                                 | (IData)(vlSelf->top__DOT__my_cu__DOT__store_op)))))
                                     ? 0ULL : vlSelf->top__DOT__my_regfile__DOT__regs
                                    [vlSelf->top__DOT__rs2addr_id_reg])),64);
        tracep->chgSData(oldp+215,(((0xf00U & vlSelf->inst_i) 
                                    | ((0xfcU & (vlSelf->inst_i 
                                                 >> 0x17U)) 
                                       | ((2U & (vlSelf->inst_i 
                                                 >> 6U)) 
                                          | (vlSelf->inst_i 
                                             >> 0x1fU))))),12);
        tracep->chgIData(oldp+216,(((0x80000U & (vlSelf->inst_i 
                                                 >> 0xcU)) 
                                    | ((0x7f800U & 
                                        (vlSelf->inst_i 
                                         >> 1U)) | 
                                       ((0x400U & (vlSelf->inst_i 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->inst_i 
                                            >> 0x15U)))))),20);
        tracep->chgSData(oldp+217,(((0xfe0U & (vlSelf->inst_i 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->inst_i 
                                                >> 7U)))),12);
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
