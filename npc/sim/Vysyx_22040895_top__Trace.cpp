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
            tracep->chgBit(oldp+0,(vlSelf->ysyx_22040895_top__DOT__ce_ifu_instrom));
            tracep->chgQData(oldp+1,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[0]),64);
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[1]),64);
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[2]),64);
            tracep->chgQData(oldp+7,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[3]),64);
            tracep->chgQData(oldp+9,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[4]),64);
            tracep->chgQData(oldp+11,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[5]),64);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[6]),64);
            tracep->chgQData(oldp+15,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[7]),64);
            tracep->chgQData(oldp+17,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[8]),64);
            tracep->chgQData(oldp+19,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[9]),64);
            tracep->chgQData(oldp+21,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[10]),64);
            tracep->chgQData(oldp+23,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[11]),64);
            tracep->chgQData(oldp+25,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[12]),64);
            tracep->chgQData(oldp+27,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[13]),64);
            tracep->chgQData(oldp+29,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[14]),64);
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[15]),64);
            tracep->chgQData(oldp+33,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[16]),64);
            tracep->chgQData(oldp+35,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[17]),64);
            tracep->chgQData(oldp+37,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[18]),64);
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[19]),64);
            tracep->chgQData(oldp+41,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[20]),64);
            tracep->chgQData(oldp+43,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[21]),64);
            tracep->chgQData(oldp+45,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[22]),64);
            tracep->chgQData(oldp+47,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[23]),64);
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[24]),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[25]),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[26]),64);
            tracep->chgQData(oldp+55,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[27]),64);
            tracep->chgQData(oldp+57,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[28]),64);
            tracep->chgQData(oldp+59,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[29]),64);
            tracep->chgQData(oldp+61,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[30]),64);
            tracep->chgQData(oldp+63,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+65,((((((((((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
                                            & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))) 
                                           | ((~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result)) 
                                              & (2U 
                                                 == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                          | ((IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout) 
                                             & (3U 
                                                == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                         | ((IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result) 
                                            & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                        | ((~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)) 
                                           & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                       | ((0ULL != vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
                                          & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                      | (0x6fU == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op))));
            tracep->chgCData(oldp+66,(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu),7);
            tracep->chgCData(oldp+67,(vlSelf->ysyx_22040895_top__DOT__func3_id_cu),3);
            tracep->chgCData(oldp+68,(vlSelf->ysyx_22040895_top__DOT__func7_id_cu),7);
            tracep->chgSData(oldp+69,(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext),12);
            tracep->chgIData(oldp+70,(vlSelf->ysyx_22040895_top__DOT__imm2_id_sext),20);
            tracep->chgBit(oldp+71,((1U & (((((((((
                                                   ((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
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
            tracep->chgQData(oldp+72,(vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu),64);
            tracep->chgCData(oldp+74,(vlSelf->ysyx_22040895_top__DOT__rs1addr_id_reg),5);
            tracep->chgCData(oldp+75,(vlSelf->ysyx_22040895_top__DOT__rs2addr_id_reg),5);
            tracep->chgCData(oldp+76,(vlSelf->ysyx_22040895_top__DOT__rdaddr_id_reg),5);
            tracep->chgBit(oldp+77,((((((((((((((((
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
            tracep->chgBit(oldp+78,(((((((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op) 
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
            tracep->chgBit(oldp+79,((((((((((((((((
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
            tracep->chgBit(oldp+80,((1U & ((~ (((((
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
            tracep->chgCData(oldp+81,(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu),4);
            tracep->chgCData(oldp+82,(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu),3);
            tracep->chgBit(oldp+83,((((((((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
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
            tracep->chgQData(oldp+84,(((0U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))
                                        ? (0xfffffffffffffffeULL 
                                           & (vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                              + vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu))
                                        : (vlSelf->ysyx_22040895_top__DOT__pc_id_exu 
                                           + (vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu 
                                              << 1U)))),64);
            tracep->chgQData(oldp+86,(vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux),64);
            tracep->chgQData(oldp+88,(((((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)) 
                                         | (7U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))) 
                                        | (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))
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
                                                   | (0U 
                                                      == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))
                                                   ? 4ULL
                                                   : 0ULL)))
                                        : vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result)),64);
            tracep->chgQData(oldp+90,(vlSelf->ysyx_22040895_top__DOT__pc_id_exu),64);
            tracep->chgQData(oldp+92,(vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex),64);
            tracep->chgQData(oldp+94,(((1U & ((((((
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
            tracep->chgQData(oldp+96,((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext) 
                                                               >> 0xbU))))) 
                                        << 0xcU) | (QData)((IData)(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext)))),64);
            tracep->chgQData(oldp+98,((((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_22040895_top__DOT__imm2_id_sext 
                                                               >> 0x13U))))) 
                                        << 0x14U) | (QData)((IData)(vlSelf->ysyx_22040895_top__DOT__imm2_id_sext)))),64);
            tracep->chgBit(oldp+100,((((((((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                           & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))) 
                                          | ((0x63U 
                                              == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                             & (5U 
                                                == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                         | ((0x63U 
                                             == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                            & (7U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                        | ((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                           & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                       | ((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                          & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                      | ((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                         & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))))));
            tracep->chgBit(oldp+101,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                      & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+102,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                      & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+103,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                      & (7U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+104,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                      & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+105,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                      & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+106,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                      & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
            tracep->chgBit(oldp+107,((0x6fU == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))));
            tracep->chgBit(oldp+108,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op));
            tracep->chgBit(oldp+109,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op));
            tracep->chgBit(oldp+110,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op));
            tracep->chgBit(oldp+111,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op));
            tracep->chgBit(oldp+112,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op));
            tracep->chgBit(oldp+113,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op));
            tracep->chgBit(oldp+114,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op));
            tracep->chgBit(oldp+115,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op));
            tracep->chgBit(oldp+116,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op));
            tracep->chgBit(oldp+117,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op));
            tracep->chgBit(oldp+118,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op));
            tracep->chgBit(oldp+119,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op));
            tracep->chgBit(oldp+120,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op));
            tracep->chgBit(oldp+121,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op));
            tracep->chgBit(oldp+122,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op));
            tracep->chgBit(oldp+123,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op));
            tracep->chgBit(oldp+124,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__beq_op));
            tracep->chgBit(oldp+125,((0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))));
            tracep->chgBit(oldp+126,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op));
            tracep->chgBit(oldp+127,((0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))));
            tracep->chgBit(oldp+128,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op));
            tracep->chgBit(oldp+129,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__blt_op));
            tracep->chgBit(oldp+130,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bltu_op));
            tracep->chgBit(oldp+131,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bne_op));
            tracep->chgBit(oldp+132,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op));
            tracep->chgBit(oldp+133,((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
                                             | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op)) 
                                            | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op)) 
                                           | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op)) 
                                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op)) 
                                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op)) 
                                        | (0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op)) 
                                      | (0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)))));
            tracep->chgBit(oldp+134,(((((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
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
            tracep->chgBit(oldp+135,((((0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                       | (0x6fU == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                      | (0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)))));
            tracep->chgBit(oldp+136,((1U & (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result))));
            tracep->chgBit(oldp+137,((1U & (~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)))));
            tracep->chgBit(oldp+138,((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result)));
            tracep->chgQData(oldp+139,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result),64);
            tracep->chgQData(oldp+141,((vlSelf->ysyx_22040895_top__DOT__pc_id_exu 
                                        + (vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu 
                                           << 1U))),64);
            tracep->chgBit(oldp+143,((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+144,((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+145,((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+146,((0U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgQData(oldp+147,(((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                         ? 0ULL : vlSelf->ysyx_22040895_top__DOT__pc_id_exu)),64);
            tracep->chgQData(oldp+149,(((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                         ? (vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex 
                                            << 0xcU)
                                         : (((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)) 
                                             | (0U 
                                                == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))
                                             ? 4ULL
                                             : 0ULL))),64);
            tracep->chgQData(oldp+151,((((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                          ? 0ULL : vlSelf->ysyx_22040895_top__DOT__pc_id_exu) 
                                        + ((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                            ? (vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex 
                                               << 0xcU)
                                            : (((7U 
                                                 == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)) 
                                                | (0U 
                                                   == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))
                                                ? 4ULL
                                                : 0ULL)))),64);
            tracep->chgBit(oldp+153,((0U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+154,((1U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+155,((2U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+156,((9U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+157,((3U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+158,((4U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+159,((5U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+160,((6U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+161,((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgBit(oldp+162,((8U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
            tracep->chgQData(oldp+163,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_result),64);
            tracep->chgQData(oldp+165,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result),64);
            tracep->chgQData(oldp+167,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)))))),64);
            tracep->chgQData(oldp+169,(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+171,(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+173,(VL_SHIFTRS_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+175,((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                        & vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+177,((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                        | vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgQData(oldp+179,((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                        ^ vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
            tracep->chgBit(oldp+181,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout));
            tracep->chgQData(oldp+182,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__op2),64);
            tracep->chgQData(oldp+184,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__cin),64);
            tracep->chgBit(oldp+186,((1U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+187,((2U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+188,((3U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+189,((4U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+190,((5U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+191,((6U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
            tracep->chgBit(oldp+192,(((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
                                      & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+193,(((~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result)) 
                                      & (2U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+194,(((IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout) 
                                      & (3U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+195,(((IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result) 
                                      & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+196,(((~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)) 
                                      & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
            tracep->chgBit(oldp+197,(((0ULL != vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
                                      & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
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
