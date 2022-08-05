// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040895_top__Syms.h"


void Vysyx_22040895_top___024root__traceInitSub0(Vysyx_22040895_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040895_top___024root__traceInitTop(Vysyx_22040895_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040895_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22040895_top___024root__traceInitSub0(Vysyx_22040895_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+199,"clk", false,-1);
        tracep->declBit(c+200,"rst", false,-1);
        tracep->declBus(c+201,"inst_i", false,-1, 31,0);
        tracep->declQuad(c+202,"instaddr_o", false,-1, 63,0);
        tracep->declBit(c+199,"ysyx_22040895_top clk", false,-1);
        tracep->declBit(c+200,"ysyx_22040895_top rst", false,-1);
        tracep->declBus(c+201,"ysyx_22040895_top inst_i", false,-1, 31,0);
        tracep->declQuad(c+202,"ysyx_22040895_top instaddr_o", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040895_top ce_ifu_instrom", false,-1);
        tracep->declBit(c+66,"ysyx_22040895_top jump_branch_cu_ifu", false,-1);
        tracep->declBus(c+201,"ysyx_22040895_top inst_ifu_idu", false,-1, 31,0);
        tracep->declQuad(c+202,"ysyx_22040895_top pc_ifu_idu", false,-1, 63,0);
        tracep->declBus(c+67,"ysyx_22040895_top opcode_id_cu", false,-1, 6,0);
        tracep->declBus(c+68,"ysyx_22040895_top func3_id_cu", false,-1, 2,0);
        tracep->declBus(c+69,"ysyx_22040895_top func7_id_cu", false,-1, 6,0);
        tracep->declBus(c+70,"ysyx_22040895_top imm1_id_sext", false,-1, 11,0);
        tracep->declBus(c+71,"ysyx_22040895_top imm2_id_sext", false,-1, 19,0);
        tracep->declBit(c+72,"ysyx_22040895_top immsel_cu_sext", false,-1);
        tracep->declQuad(c+73,"ysyx_22040895_top simm_sext_opnummux_exu", false,-1, 63,0);
        tracep->declBus(c+75,"ysyx_22040895_top rs1addr_id_reg", false,-1, 4,0);
        tracep->declBus(c+76,"ysyx_22040895_top rs2addr_id_reg", false,-1, 4,0);
        tracep->declBus(c+77,"ysyx_22040895_top rdaddr_id_reg", false,-1, 4,0);
        tracep->declBit(c+78,"ysyx_22040895_top re1_cu_reg", false,-1);
        tracep->declBit(c+79,"ysyx_22040895_top re2_cu_reg", false,-1);
        tracep->declBit(c+80,"ysyx_22040895_top we_cu_reg", false,-1);
        tracep->declBit(c+81,"ysyx_22040895_top opsrc_cu_opnumsel", false,-1);
        tracep->declBus(c+82,"ysyx_22040895_top aluop_cu_exu", false,-1, 3,0);
        tracep->declBus(c+83,"ysyx_22040895_top bcuop_cu_exu", false,-1, 2,0);
        tracep->declBit(c+84,"ysyx_22040895_top jump_branch_exu_cu", false,-1);
        tracep->declQuad(c+85,"ysyx_22040895_top dnpc_exu_ifu", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22040895_top rdata1_reg_mux", false,-1, 63,0);
        tracep->declQuad(c+204,"ysyx_22040895_top rdata2_reg_mux", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_22040895_top wdata_ex_reg", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_22040895_top pc_id_exu", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22040895_top opnum1_opnumsel_ex", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22040895_top opnum2_opnumsel_ex", false,-1, 63,0);
        tracep->declBit(c+199,"ysyx_22040895_top my_ifu clk", false,-1);
        tracep->declBit(c+200,"ysyx_22040895_top my_ifu rst", false,-1);
        tracep->declBus(c+201,"ysyx_22040895_top my_ifu inst_i_ifu", false,-1, 31,0);
        tracep->declBit(c+66,"ysyx_22040895_top my_ifu pcsel_i_ifu", false,-1);
        tracep->declQuad(c+85,"ysyx_22040895_top my_ifu dnpc_i_ifu", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22040895_top my_ifu inst_o_ifu", false,-1, 31,0);
        tracep->declQuad(c+202,"ysyx_22040895_top my_ifu instaddr_o_ifu", false,-1, 63,0);
        tracep->declQuad(c+202,"ysyx_22040895_top my_ifu pc_o_ifu", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040895_top my_ifu ce_o_ifu", false,-1);
        tracep->declBit(c+199,"ysyx_22040895_top my_ifu my_pc clk", false,-1);
        tracep->declBit(c+200,"ysyx_22040895_top my_ifu my_pc rst", false,-1);
        tracep->declBit(c+66,"ysyx_22040895_top my_ifu my_pc pcsel_i_pc", false,-1);
        tracep->declQuad(c+85,"ysyx_22040895_top my_ifu my_pc dnpc_i_pc", false,-1, 63,0);
        tracep->declQuad(c+202,"ysyx_22040895_top my_ifu my_pc pc_o_pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040895_top my_ifu my_pc ce_o_pc", false,-1);
        tracep->declBit(c+208,"ysyx_22040895_top my_ifu my_pc pcsel", false,-1);
        tracep->declBit(c+200,"ysyx_22040895_top my_sext rst", false,-1);
        tracep->declBit(c+72,"ysyx_22040895_top my_sext immsel_i_sext", false,-1);
        tracep->declBus(c+70,"ysyx_22040895_top my_sext imm1_i_sext", false,-1, 11,0);
        tracep->declBus(c+71,"ysyx_22040895_top my_sext imm2_i_sext", false,-1, 19,0);
        tracep->declQuad(c+73,"ysyx_22040895_top my_sext simm_o_sext", false,-1, 63,0);
        tracep->declQuad(c+95,"ysyx_22040895_top my_sext sign_imm_ext", false,-1, 63,0);
        tracep->declQuad(c+97,"ysyx_22040895_top my_sext sign_imm1_ext", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_22040895_top my_sext sign_imm2_ext", false,-1, 63,0);
        tracep->declBit(c+200,"ysyx_22040895_top my_idu rst", false,-1);
        tracep->declBus(c+201,"ysyx_22040895_top my_idu inst_i_idu", false,-1, 31,0);
        tracep->declQuad(c+202,"ysyx_22040895_top my_idu pc_i_idu", false,-1, 63,0);
        tracep->declBus(c+67,"ysyx_22040895_top my_idu opcode_o_idu", false,-1, 6,0);
        tracep->declBus(c+68,"ysyx_22040895_top my_idu func3_o_idu", false,-1, 2,0);
        tracep->declBus(c+69,"ysyx_22040895_top my_idu func7_o_idu", false,-1, 6,0);
        tracep->declBus(c+70,"ysyx_22040895_top my_idu imm1_o_idu", false,-1, 11,0);
        tracep->declBus(c+71,"ysyx_22040895_top my_idu imm2_o_idu", false,-1, 19,0);
        tracep->declBus(c+75,"ysyx_22040895_top my_idu rs1addr_o_idu", false,-1, 4,0);
        tracep->declBus(c+76,"ysyx_22040895_top my_idu rs2addr_o_idu", false,-1, 4,0);
        tracep->declBus(c+77,"ysyx_22040895_top my_idu rdaddr_o_idu", false,-1, 4,0);
        tracep->declQuad(c+91,"ysyx_22040895_top my_idu pc_o_idu", false,-1, 63,0);
        tracep->declBit(c+101,"ysyx_22040895_top my_idu branch", false,-1);
        tracep->declBit(c+102,"ysyx_22040895_top my_idu beq", false,-1);
        tracep->declBit(c+103,"ysyx_22040895_top my_idu bge", false,-1);
        tracep->declBit(c+104,"ysyx_22040895_top my_idu bgeu", false,-1);
        tracep->declBit(c+105,"ysyx_22040895_top my_idu blt", false,-1);
        tracep->declBit(c+106,"ysyx_22040895_top my_idu bltu", false,-1);
        tracep->declBit(c+107,"ysyx_22040895_top my_idu bne", false,-1);
        tracep->declBit(c+108,"ysyx_22040895_top my_idu jal", false,-1);
        tracep->declBus(c+206,"ysyx_22040895_top my_idu branch_offset", false,-1, 11,0);
        tracep->declBus(c+207,"ysyx_22040895_top my_idu jal_offset", false,-1, 19,0);
        tracep->declBit(c+199,"ysyx_22040895_top my_regfile clk", false,-1);
        tracep->declBit(c+200,"ysyx_22040895_top my_regfile rst", false,-1);
        tracep->declBit(c+78,"ysyx_22040895_top my_regfile re1_i_reg", false,-1);
        tracep->declBit(c+79,"ysyx_22040895_top my_regfile re2_i_reg", false,-1);
        tracep->declBit(c+80,"ysyx_22040895_top my_regfile we_i_reg", false,-1);
        tracep->declBus(c+75,"ysyx_22040895_top my_regfile raddr1_i_reg", false,-1, 4,0);
        tracep->declBus(c+76,"ysyx_22040895_top my_regfile raddr2_i_reg", false,-1, 4,0);
        tracep->declBus(c+77,"ysyx_22040895_top my_regfile waddr_i_reg", false,-1, 4,0);
        tracep->declQuad(c+87,"ysyx_22040895_top my_regfile rdata1_o_reg", false,-1, 63,0);
        tracep->declQuad(c+204,"ysyx_22040895_top my_regfile rdata2_o_reg", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_22040895_top my_regfile wdata_i_reg", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+2+i*2,"ysyx_22040895_top my_regfile regs", true,(i+0), 63,0);}}
        tracep->declBit(c+81,"ysyx_22040895_top my_opnumsel opsrc_i_opnumsel", false,-1);
        tracep->declQuad(c+73,"ysyx_22040895_top my_opnumsel simm_i_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22040895_top my_opnumsel rdata1_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+204,"ysyx_22040895_top my_opnumsel rdata2_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22040895_top my_opnumsel opnum1_o_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22040895_top my_opnumsel opnum2_o_opnumsel", false,-1, 63,0);
        tracep->declBit(c+200,"ysyx_22040895_top my_cu rst", false,-1);
        tracep->declBus(c+67,"ysyx_22040895_top my_cu opcode_i_cu", false,-1, 6,0);
        tracep->declBus(c+68,"ysyx_22040895_top my_cu func3_i_cu", false,-1, 2,0);
        tracep->declBus(c+69,"ysyx_22040895_top my_cu func7_i_cu", false,-1, 6,0);
        tracep->declBit(c+84,"ysyx_22040895_top my_cu jump_branch_i_cu", false,-1);
        tracep->declBus(c+82,"ysyx_22040895_top my_cu aluop_o_cu", false,-1, 3,0);
        tracep->declBus(c+83,"ysyx_22040895_top my_cu bcuop_o_cu", false,-1, 2,0);
        tracep->declBit(c+81,"ysyx_22040895_top my_cu opsel_o_cu", false,-1);
        tracep->declBit(c+72,"ysyx_22040895_top my_cu immsel_o_cu", false,-1);
        tracep->declBit(c+78,"ysyx_22040895_top my_cu re1_o_cu", false,-1);
        tracep->declBit(c+79,"ysyx_22040895_top my_cu re2_o_cu", false,-1);
        tracep->declBit(c+80,"ysyx_22040895_top my_cu we_o_cu", false,-1);
        tracep->declBit(c+66,"ysyx_22040895_top my_cu jump_branch_o_cu", false,-1);
        tracep->declBus(c+67,"ysyx_22040895_top my_cu op", false,-1, 6,0);
        tracep->declBus(c+68,"ysyx_22040895_top my_cu func3", false,-1, 2,0);
        tracep->declBus(c+69,"ysyx_22040895_top my_cu func7", false,-1, 6,0);
        tracep->declBit(c+109,"ysyx_22040895_top my_cu addi_op", false,-1);
        tracep->declBit(c+110,"ysyx_22040895_top my_cu add_op", false,-1);
        tracep->declBit(c+111,"ysyx_22040895_top my_cu sub_op", false,-1);
        tracep->declBit(c+112,"ysyx_22040895_top my_cu andi_op", false,-1);
        tracep->declBit(c+113,"ysyx_22040895_top my_cu and_op", false,-1);
        tracep->declBit(c+114,"ysyx_22040895_top my_cu sll_op", false,-1);
        tracep->declBit(c+115,"ysyx_22040895_top my_cu ori_op", false,-1);
        tracep->declBit(c+116,"ysyx_22040895_top my_cu or_op", false,-1);
        tracep->declBit(c+117,"ysyx_22040895_top my_cu srl_op", false,-1);
        tracep->declBit(c+118,"ysyx_22040895_top my_cu xori_op", false,-1);
        tracep->declBit(c+119,"ysyx_22040895_top my_cu xor_op", false,-1);
        tracep->declBit(c+120,"ysyx_22040895_top my_cu sra_op", false,-1);
        tracep->declBit(c+121,"ysyx_22040895_top my_cu slti_op", false,-1);
        tracep->declBit(c+122,"ysyx_22040895_top my_cu slt_op", false,-1);
        tracep->declBit(c+123,"ysyx_22040895_top my_cu sltiu_op", false,-1);
        tracep->declBit(c+124,"ysyx_22040895_top my_cu sltu_op", false,-1);
        tracep->declBit(c+125,"ysyx_22040895_top my_cu beq_op", false,-1);
        tracep->declBit(c+126,"ysyx_22040895_top my_cu auipc_op", false,-1);
        tracep->declBit(c+127,"ysyx_22040895_top my_cu bge_op", false,-1);
        tracep->declBit(c+128,"ysyx_22040895_top my_cu lui_op", false,-1);
        tracep->declBit(c+129,"ysyx_22040895_top my_cu bgeu_op", false,-1);
        tracep->declBit(c+130,"ysyx_22040895_top my_cu blt_op", false,-1);
        tracep->declBit(c+131,"ysyx_22040895_top my_cu bltu_op", false,-1);
        tracep->declBit(c+108,"ysyx_22040895_top my_cu jal_op", false,-1);
        tracep->declBit(c+132,"ysyx_22040895_top my_cu bne_op", false,-1);
        tracep->declBit(c+133,"ysyx_22040895_top my_cu jalr_op", false,-1);
        tracep->declBit(c+134,"ysyx_22040895_top my_cu op_rs1_imm", false,-1);
        tracep->declBit(c+79,"ysyx_22040895_top my_cu op_rs1_rs2", false,-1);
        tracep->declBit(c+135,"ysyx_22040895_top my_cu imm1", false,-1);
        tracep->declBit(c+136,"ysyx_22040895_top my_cu imm2", false,-1);
        tracep->declBit(c+78,"ysyx_22040895_top my_cu reg_r1", false,-1);
        tracep->declBit(c+79,"ysyx_22040895_top my_cu reg_r2", false,-1);
        tracep->declBit(c+80,"ysyx_22040895_top my_cu reg_w", false,-1);
        tracep->declBit(c+200,"ysyx_22040895_top my_exu rst", false,-1);
        tracep->declBus(c+82,"ysyx_22040895_top my_exu aluop_i_exu", false,-1, 3,0);
        tracep->declBus(c+83,"ysyx_22040895_top my_exu bcuop_i_exu", false,-1, 2,0);
        tracep->declBit(c+84,"ysyx_22040895_top my_exu jump_branch_o_exu", false,-1);
        tracep->declQuad(c+85,"ysyx_22040895_top my_exu dnpc_o_exu", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22040895_top my_exu op1_i_exu", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22040895_top my_exu op2_i_exu", false,-1, 63,0);
        tracep->declQuad(c+89,"ysyx_22040895_top my_exu result_o_exu", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_22040895_top my_exu pc_i_exu", false,-1, 63,0);
        tracep->declQuad(c+73,"ysyx_22040895_top my_exu offset_i_exu", false,-1, 63,0);
        tracep->declBit(c+137,"ysyx_22040895_top my_exu lt_alu_bcu", false,-1);
        tracep->declBit(c+138,"ysyx_22040895_top my_exu ltu_alu_bcu", false,-1);
        tracep->declBit(c+139,"ysyx_22040895_top my_exu zero_alu_bcu", false,-1);
        tracep->declQuad(c+140,"ysyx_22040895_top my_exu alu_result", false,-1, 63,0);
        tracep->declQuad(c+142,"ysyx_22040895_top my_exu dnpc_o_bcu", false,-1, 63,0);
        tracep->declBit(c+144,"ysyx_22040895_top my_exu auipc_op", false,-1);
        tracep->declBit(c+145,"ysyx_22040895_top my_exu lui_op", false,-1);
        tracep->declBit(c+146,"ysyx_22040895_top my_exu jal_op", false,-1);
        tracep->declBit(c+147,"ysyx_22040895_top my_exu jalr_op", false,-1);
        tracep->declQuad(c+148,"ysyx_22040895_top my_exu adder_op1", false,-1, 63,0);
        tracep->declQuad(c+150,"ysyx_22040895_top my_exu adder_op2", false,-1, 63,0);
        tracep->declQuad(c+152,"ysyx_22040895_top my_exu adder_result", false,-1, 63,0);
        tracep->declBus(c+82,"ysyx_22040895_top my_exu my_alu aluop_i_alu", false,-1, 3,0);
        tracep->declQuad(c+87,"ysyx_22040895_top my_exu my_alu op1_i_alu", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22040895_top my_exu my_alu op2_i_alu", false,-1, 63,0);
        tracep->declQuad(c+140,"ysyx_22040895_top my_exu my_alu result_o_alu", false,-1, 63,0);
        tracep->declBit(c+137,"ysyx_22040895_top my_exu my_alu lt_o_alu", false,-1);
        tracep->declBit(c+138,"ysyx_22040895_top my_exu my_alu ltu_o_alu", false,-1);
        tracep->declBit(c+139,"ysyx_22040895_top my_exu my_alu zero_o_alu", false,-1);
        tracep->declBit(c+154,"ysyx_22040895_top my_exu my_alu op_add", false,-1);
        tracep->declBit(c+155,"ysyx_22040895_top my_exu my_alu op_sub", false,-1);
        tracep->declBit(c+156,"ysyx_22040895_top my_exu my_alu op_slt", false,-1);
        tracep->declBit(c+157,"ysyx_22040895_top my_exu my_alu op_sltu", false,-1);
        tracep->declBit(c+158,"ysyx_22040895_top my_exu my_alu op_sll", false,-1);
        tracep->declBit(c+159,"ysyx_22040895_top my_exu my_alu op_srl", false,-1);
        tracep->declBit(c+160,"ysyx_22040895_top my_exu my_alu op_sra", false,-1);
        tracep->declBit(c+161,"ysyx_22040895_top my_exu my_alu op_and", false,-1);
        tracep->declBit(c+162,"ysyx_22040895_top my_exu my_alu op_or", false,-1);
        tracep->declBit(c+163,"ysyx_22040895_top my_exu my_alu op_xor", false,-1);
        tracep->declQuad(c+164,"ysyx_22040895_top my_exu my_alu add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+209,"ysyx_22040895_top my_exu my_alu sub_result", false,-1, 63,0);
        tracep->declQuad(c+166,"ysyx_22040895_top my_exu my_alu slt_result", false,-1, 63,0);
        tracep->declQuad(c+168,"ysyx_22040895_top my_exu my_alu sltu_result", false,-1, 63,0);
        tracep->declQuad(c+170,"ysyx_22040895_top my_exu my_alu sll_result", false,-1, 63,0);
        tracep->declQuad(c+172,"ysyx_22040895_top my_exu my_alu srl_result", false,-1, 63,0);
        tracep->declQuad(c+174,"ysyx_22040895_top my_exu my_alu sra_result", false,-1, 63,0);
        tracep->declQuad(c+176,"ysyx_22040895_top my_exu my_alu and_result", false,-1, 63,0);
        tracep->declQuad(c+178,"ysyx_22040895_top my_exu my_alu or_result", false,-1, 63,0);
        tracep->declQuad(c+180,"ysyx_22040895_top my_exu my_alu xor_result", false,-1, 63,0);
        tracep->declQuad(c+164,"ysyx_22040895_top my_exu my_alu adder_result", false,-1, 63,0);
        tracep->declBit(c+182,"ysyx_22040895_top my_exu my_alu adder_cout", false,-1);
        tracep->declQuad(c+87,"ysyx_22040895_top my_exu my_alu op1", false,-1, 63,0);
        tracep->declQuad(c+183,"ysyx_22040895_top my_exu my_alu op2", false,-1, 63,0);
        tracep->declQuad(c+185,"ysyx_22040895_top my_exu my_alu cin", false,-1, 63,0);
        tracep->declBit(c+137,"ysyx_22040895_top my_exu my_bcu lt_i_bcu", false,-1);
        tracep->declBit(c+138,"ysyx_22040895_top my_exu my_bcu ltu_i_bcu", false,-1);
        tracep->declBit(c+139,"ysyx_22040895_top my_exu my_bcu zero_i_bcu", false,-1);
        tracep->declBus(c+83,"ysyx_22040895_top my_exu my_bcu bcuop_i_bcu", false,-1, 2,0);
        tracep->declQuad(c+91,"ysyx_22040895_top my_exu my_bcu pc_i_bcu", false,-1, 63,0);
        tracep->declQuad(c+73,"ysyx_22040895_top my_exu my_bcu offset_i_bcu", false,-1, 63,0);
        tracep->declBit(c+84,"ysyx_22040895_top my_exu my_bcu jump_branch_o_bcu", false,-1);
        tracep->declQuad(c+142,"ysyx_22040895_top my_exu my_bcu dnpc_o_bcu", false,-1, 63,0);
        tracep->declBit(c+187,"ysyx_22040895_top my_exu my_bcu op_beq", false,-1);
        tracep->declBit(c+188,"ysyx_22040895_top my_exu my_bcu op_bge", false,-1);
        tracep->declBit(c+189,"ysyx_22040895_top my_exu my_bcu op_bgeu", false,-1);
        tracep->declBit(c+190,"ysyx_22040895_top my_exu my_bcu op_blt", false,-1);
        tracep->declBit(c+191,"ysyx_22040895_top my_exu my_bcu op_bltu", false,-1);
        tracep->declBit(c+192,"ysyx_22040895_top my_exu my_bcu op_bne", false,-1);
        tracep->declBit(c+193,"ysyx_22040895_top my_exu my_bcu beq", false,-1);
        tracep->declBit(c+194,"ysyx_22040895_top my_exu my_bcu bge", false,-1);
        tracep->declBit(c+195,"ysyx_22040895_top my_exu my_bcu bgeu", false,-1);
        tracep->declBit(c+196,"ysyx_22040895_top my_exu my_bcu blt", false,-1);
        tracep->declBit(c+197,"ysyx_22040895_top my_exu my_bcu bltu", false,-1);
        tracep->declBit(c+198,"ysyx_22040895_top my_exu my_bcu bne", false,-1);
    }
}

void Vysyx_22040895_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22040895_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040895_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22040895_top___024root__traceRegister(Vysyx_22040895_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22040895_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22040895_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22040895_top___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22040895_top___024root__traceFullSub0(Vysyx_22040895_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040895_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040895_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040895_top___024root*>(voidSelf);
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040895_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040895_top___024root__traceFullSub0(Vysyx_22040895_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040895_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->ysyx_22040895_top__DOT__ce_ifu_instrom));
        tracep->fullQData(oldp+2,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+6,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+10,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+12,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+16,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+18,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+20,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+24,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+34,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+42,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+44,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+46,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+56,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+58,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+60,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+62,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+64,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[31]),64);
        tracep->fullBit(oldp+66,((((((((((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
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
                                       & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))) 
                                   | (0x6fU == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                  | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op))));
        tracep->fullCData(oldp+67,(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu),7);
        tracep->fullCData(oldp+68,(vlSelf->ysyx_22040895_top__DOT__func3_id_cu),3);
        tracep->fullCData(oldp+69,(vlSelf->ysyx_22040895_top__DOT__func7_id_cu),7);
        tracep->fullSData(oldp+70,(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext),12);
        tracep->fullIData(oldp+71,(vlSelf->ysyx_22040895_top__DOT__imm2_id_sext),20);
        tracep->fullBit(oldp+72,((1U & ((((((((((((
                                                   (((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
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
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu),64);
        tracep->fullCData(oldp+75,(vlSelf->ysyx_22040895_top__DOT__rs1addr_id_reg),5);
        tracep->fullCData(oldp+76,(vlSelf->ysyx_22040895_top__DOT__rs2addr_id_reg),5);
        tracep->fullCData(oldp+77,(vlSelf->ysyx_22040895_top__DOT__rdaddr_id_reg),5);
        tracep->fullBit(oldp+78,(((((((((((((((((((
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
                                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__beq_op)) 
                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op)) 
                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op)) 
                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__blt_op)) 
                                    | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bltu_op)) 
                                   | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bne_op)) 
                                  | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op))));
        tracep->fullBit(oldp+79,(((((((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op) 
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
        tracep->fullBit(oldp+80,(((((((((((((((((((
                                                   ((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
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
        tracep->fullBit(oldp+81,((1U & ((~ (((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
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
        tracep->fullCData(oldp+82,(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu),4);
        tracep->fullCData(oldp+83,(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu),3);
        tracep->fullBit(oldp+84,((((((((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
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
        tracep->fullQData(oldp+85,(((0U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))
                                     ? (0xfffffffffffffffeULL 
                                        & (vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                           + vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu))
                                     : (vlSelf->ysyx_22040895_top__DOT__pc_id_exu 
                                        + (vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu 
                                           << 1U)))),64);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux),64);
        tracep->fullQData(oldp+89,(((((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)) 
                                      | (7U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))) 
                                     | (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))
                                     ? (((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                          ? 0ULL : vlSelf->ysyx_22040895_top__DOT__pc_id_exu) 
                                        + ((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                            ? (vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex 
                                               << 0xcU)
                                            : (((7U 
                                                 == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)) 
                                                | (0U 
                                                   == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))
                                                ? 4ULL
                                                : 0ULL)))
                                     : vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result)),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22040895_top__DOT__pc_id_exu),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex),64);
        tracep->fullQData(oldp+95,(((1U & (((((((((
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
                                                    == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))))))
                                     ? (((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext) 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext)))
                                     : (((- (QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_22040895_top__DOT__imm2_id_sext 
                                                                >> 0x13U))))) 
                                         << 0x14U) 
                                        | (QData)((IData)(vlSelf->ysyx_22040895_top__DOT__imm2_id_sext))))),64);
        tracep->fullQData(oldp+97,((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext) 
                                                            >> 0xbU))))) 
                                     << 0xcU) | (QData)((IData)(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext)))),64);
        tracep->fullQData(oldp+99,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->ysyx_22040895_top__DOT__imm2_id_sext 
                                                            >> 0x13U))))) 
                                     << 0x14U) | (QData)((IData)(vlSelf->ysyx_22040895_top__DOT__imm2_id_sext)))),64);
        tracep->fullBit(oldp+101,((((((((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                        & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))) 
                                       | ((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                          & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                      | ((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                         & (7U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                     | ((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                        & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                    | ((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))) 
                                   | ((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                      & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu))))));
        tracep->fullBit(oldp+102,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                   & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+103,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                   & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+104,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                   & (7U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+105,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                   & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+106,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                   & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+107,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                   & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+108,((0x6fU == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))));
        tracep->fullBit(oldp+109,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op));
        tracep->fullBit(oldp+110,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op));
        tracep->fullBit(oldp+111,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op));
        tracep->fullBit(oldp+112,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op));
        tracep->fullBit(oldp+113,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op));
        tracep->fullBit(oldp+114,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op));
        tracep->fullBit(oldp+115,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op));
        tracep->fullBit(oldp+116,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op));
        tracep->fullBit(oldp+117,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op));
        tracep->fullBit(oldp+118,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op));
        tracep->fullBit(oldp+119,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op));
        tracep->fullBit(oldp+120,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op));
        tracep->fullBit(oldp+121,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op));
        tracep->fullBit(oldp+122,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op));
        tracep->fullBit(oldp+123,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op));
        tracep->fullBit(oldp+124,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op));
        tracep->fullBit(oldp+125,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__beq_op));
        tracep->fullBit(oldp+126,((0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))));
        tracep->fullBit(oldp+127,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op));
        tracep->fullBit(oldp+128,((0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))));
        tracep->fullBit(oldp+129,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op));
        tracep->fullBit(oldp+130,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__blt_op));
        tracep->fullBit(oldp+131,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bltu_op));
        tracep->fullBit(oldp+132,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bne_op));
        tracep->fullBit(oldp+133,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op));
        tracep->fullBit(oldp+134,((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
                                          | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op)) 
                                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op)) 
                                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op)) 
                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op)) 
                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op)) 
                                     | (0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                    | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op)) 
                                   | (0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)))));
        tracep->fullBit(oldp+135,(((((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
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
        tracep->fullBit(oldp+136,((((0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                    | (0x6fU == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                   | (0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)))));
        tracep->fullBit(oldp+137,((1U & (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result))));
        tracep->fullBit(oldp+138,((1U & (~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)))));
        tracep->fullBit(oldp+139,((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result)));
        tracep->fullQData(oldp+140,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result),64);
        tracep->fullQData(oldp+142,((vlSelf->ysyx_22040895_top__DOT__pc_id_exu 
                                     + (vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu 
                                        << 1U))),64);
        tracep->fullBit(oldp+144,((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+145,((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+146,((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+147,((0U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullQData(oldp+148,(((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                      ? 0ULL : vlSelf->ysyx_22040895_top__DOT__pc_id_exu)),64);
        tracep->fullQData(oldp+150,(((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                      ? (vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex 
                                         << 0xcU) : 
                                     (((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)) 
                                       | (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))
                                       ? 4ULL : 0ULL))),64);
        tracep->fullQData(oldp+152,((((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                       ? 0ULL : vlSelf->ysyx_22040895_top__DOT__pc_id_exu) 
                                     + ((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                         ? (vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex 
                                            << 0xcU)
                                         : (((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)) 
                                             | (0U 
                                                == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))
                                             ? 4ULL
                                             : 0ULL)))),64);
        tracep->fullBit(oldp+154,((0U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+155,((1U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+156,((2U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+157,((9U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+158,((3U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+159,((4U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+160,((5U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+161,((6U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+162,((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+163,((8U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullQData(oldp+164,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_result),64);
        tracep->fullQData(oldp+166,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result),64);
        tracep->fullQData(oldp+168,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)))))),64);
        tracep->fullQData(oldp+170,(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+172,(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+174,(VL_SHIFTRS_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+176,((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                     & vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+178,((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                     | vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+180,((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                     ^ vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullBit(oldp+182,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout));
        tracep->fullQData(oldp+183,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__op2),64);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__cin),64);
        tracep->fullBit(oldp+187,((1U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+188,((2U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+189,((3U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+190,((4U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+191,((5U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+192,((6U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+193,(((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
                                   & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+194,(((~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result)) 
                                   & (2U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+195,(((IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout) 
                                   & (3U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+196,(((IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result) 
                                   & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+197,(((~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)) 
                                   & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+198,(((0ULL != vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
                                   & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+199,(vlSelf->clk));
        tracep->fullBit(oldp+200,(vlSelf->rst));
        tracep->fullIData(oldp+201,(vlSelf->inst_i),32);
        tracep->fullQData(oldp+202,(vlSelf->instaddr_o),64);
        tracep->fullQData(oldp+204,(((1U & (((IData)(vlSelf->rst) 
                                             | (0U 
                                                == (IData)(vlSelf->ysyx_22040895_top__DOT__rs2addr_id_reg))) 
                                            | (~ ((
                                                   ((((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op) 
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
        tracep->fullSData(oldp+206,(((0xf00U & vlSelf->inst_i) 
                                     | ((0xfcU & (vlSelf->inst_i 
                                                  >> 0x17U)) 
                                        | ((2U & (vlSelf->inst_i 
                                                  >> 6U)) 
                                           | (vlSelf->inst_i 
                                              >> 0x1fU))))),12);
        tracep->fullIData(oldp+207,(((0x80000U & (vlSelf->inst_i 
                                                  >> 0xcU)) 
                                     | ((0x7f800U & 
                                         (vlSelf->inst_i 
                                          >> 1U)) | 
                                        ((0x400U & 
                                          (vlSelf->inst_i 
                                           >> 0xaU)) 
                                         | (0x3ffU 
                                            & (vlSelf->inst_i 
                                               >> 0x15U)))))),20);
        tracep->fullBit(oldp+208,(vlSelf->ysyx_22040895_top__DOT__my_ifu__DOT__my_pc__DOT__pcsel));
        tracep->fullQData(oldp+209,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__sub_result),64);
    }
}
