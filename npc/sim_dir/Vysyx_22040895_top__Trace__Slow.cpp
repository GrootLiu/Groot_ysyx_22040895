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
        tracep->declBit(c+134,"ysyx_22040895_top ce_ifu_instrom", false,-1);
        tracep->declBit(c+1,"ysyx_22040895_top jump_branch_cu_ifu", false,-1);
        tracep->declBus(c+201,"ysyx_22040895_top inst_ifu_idu", false,-1, 31,0);
        tracep->declQuad(c+202,"ysyx_22040895_top pc_ifu_idu", false,-1, 63,0);
        tracep->declBus(c+2,"ysyx_22040895_top opcode_id_cu", false,-1, 6,0);
        tracep->declBus(c+3,"ysyx_22040895_top func3_id_cu", false,-1, 2,0);
        tracep->declBus(c+4,"ysyx_22040895_top func7_id_cu", false,-1, 6,0);
        tracep->declBus(c+5,"ysyx_22040895_top imm1_id_sext", false,-1, 11,0);
        tracep->declBus(c+6,"ysyx_22040895_top imm2_id_sext", false,-1, 19,0);
        tracep->declBit(c+7,"ysyx_22040895_top immsel_cu_sext", false,-1);
        tracep->declQuad(c+8,"ysyx_22040895_top simm_sext_opnummux_exu", false,-1, 63,0);
        tracep->declBus(c+10,"ysyx_22040895_top rs1addr_id_reg", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22040895_top rs2addr_id_reg", false,-1, 4,0);
        tracep->declBus(c+12,"ysyx_22040895_top rdaddr_id_reg", false,-1, 4,0);
        tracep->declBit(c+13,"ysyx_22040895_top re1_cu_reg", false,-1);
        tracep->declBit(c+14,"ysyx_22040895_top re2_cu_reg", false,-1);
        tracep->declBit(c+15,"ysyx_22040895_top we_cu_reg", false,-1);
        tracep->declBit(c+16,"ysyx_22040895_top opsrc_cu_opnumsel", false,-1);
        tracep->declBus(c+17,"ysyx_22040895_top aluop_cu_exu", false,-1, 3,0);
        tracep->declBus(c+18,"ysyx_22040895_top bcuop_cu_exu", false,-1, 2,0);
        tracep->declBit(c+19,"ysyx_22040895_top jump_branch_exu_cu", false,-1);
        tracep->declQuad(c+20,"ysyx_22040895_top dnpc_exu_ifu", false,-1, 63,0);
        tracep->declQuad(c+22,"ysyx_22040895_top rdata1_reg_mux", false,-1, 63,0);
        tracep->declQuad(c+204,"ysyx_22040895_top rdata2_reg_mux", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22040895_top wdata_ex_reg", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22040895_top pc_id_exu", false,-1, 63,0);
        tracep->declQuad(c+22,"ysyx_22040895_top opnum1_opnumsel_ex", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22040895_top opnum2_opnumsel_ex", false,-1, 63,0);
        tracep->declBit(c+199,"ysyx_22040895_top my_ifu clk", false,-1);
        tracep->declBit(c+200,"ysyx_22040895_top my_ifu rst", false,-1);
        tracep->declBus(c+201,"ysyx_22040895_top my_ifu inst_i_ifu", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_22040895_top my_ifu pcsel_i_ifu", false,-1);
        tracep->declQuad(c+20,"ysyx_22040895_top my_ifu dnpc_i_ifu", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22040895_top my_ifu inst_o_ifu", false,-1, 31,0);
        tracep->declQuad(c+202,"ysyx_22040895_top my_ifu instaddr_o_ifu", false,-1, 63,0);
        tracep->declQuad(c+202,"ysyx_22040895_top my_ifu pc_o_ifu", false,-1, 63,0);
        tracep->declBit(c+134,"ysyx_22040895_top my_ifu ce_o_ifu", false,-1);
        tracep->declBit(c+199,"ysyx_22040895_top my_ifu my_pc clk", false,-1);
        tracep->declBit(c+200,"ysyx_22040895_top my_ifu my_pc rst", false,-1);
        tracep->declBit(c+1,"ysyx_22040895_top my_ifu my_pc pcsel_i_pc", false,-1);
        tracep->declQuad(c+20,"ysyx_22040895_top my_ifu my_pc dnpc_i_pc", false,-1, 63,0);
        tracep->declQuad(c+202,"ysyx_22040895_top my_ifu my_pc pc_o_pc", false,-1, 63,0);
        tracep->declBit(c+134,"ysyx_22040895_top my_ifu my_pc ce_o_pc", false,-1);
        tracep->declBit(c+208,"ysyx_22040895_top my_ifu my_pc pcsel", false,-1);
        tracep->declBit(c+200,"ysyx_22040895_top my_sext rst", false,-1);
        tracep->declBit(c+7,"ysyx_22040895_top my_sext immsel_i_sext", false,-1);
        tracep->declBus(c+5,"ysyx_22040895_top my_sext imm1_i_sext", false,-1, 11,0);
        tracep->declBus(c+6,"ysyx_22040895_top my_sext imm2_i_sext", false,-1, 19,0);
        tracep->declQuad(c+8,"ysyx_22040895_top my_sext simm_o_sext", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22040895_top my_sext sign_imm_ext", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22040895_top my_sext sign_imm1_ext", false,-1, 63,0);
        tracep->declQuad(c+34,"ysyx_22040895_top my_sext sign_imm2_ext", false,-1, 63,0);
        tracep->declBit(c+200,"ysyx_22040895_top my_idu rst", false,-1);
        tracep->declBus(c+201,"ysyx_22040895_top my_idu inst_i_idu", false,-1, 31,0);
        tracep->declQuad(c+202,"ysyx_22040895_top my_idu pc_i_idu", false,-1, 63,0);
        tracep->declBus(c+2,"ysyx_22040895_top my_idu opcode_o_idu", false,-1, 6,0);
        tracep->declBus(c+3,"ysyx_22040895_top my_idu func3_o_idu", false,-1, 2,0);
        tracep->declBus(c+4,"ysyx_22040895_top my_idu func7_o_idu", false,-1, 6,0);
        tracep->declBus(c+5,"ysyx_22040895_top my_idu imm1_o_idu", false,-1, 11,0);
        tracep->declBus(c+6,"ysyx_22040895_top my_idu imm2_o_idu", false,-1, 19,0);
        tracep->declBus(c+10,"ysyx_22040895_top my_idu rs1addr_o_idu", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22040895_top my_idu rs2addr_o_idu", false,-1, 4,0);
        tracep->declBus(c+12,"ysyx_22040895_top my_idu rdaddr_o_idu", false,-1, 4,0);
        tracep->declQuad(c+26,"ysyx_22040895_top my_idu pc_o_idu", false,-1, 63,0);
        tracep->declBit(c+36,"ysyx_22040895_top my_idu branch", false,-1);
        tracep->declBit(c+37,"ysyx_22040895_top my_idu beq", false,-1);
        tracep->declBit(c+38,"ysyx_22040895_top my_idu bge", false,-1);
        tracep->declBit(c+39,"ysyx_22040895_top my_idu bgeu", false,-1);
        tracep->declBit(c+40,"ysyx_22040895_top my_idu blt", false,-1);
        tracep->declBit(c+41,"ysyx_22040895_top my_idu bltu", false,-1);
        tracep->declBit(c+42,"ysyx_22040895_top my_idu bne", false,-1);
        tracep->declBit(c+43,"ysyx_22040895_top my_idu jal", false,-1);
        tracep->declBus(c+206,"ysyx_22040895_top my_idu branch_offset", false,-1, 11,0);
        tracep->declBus(c+207,"ysyx_22040895_top my_idu jal_offset", false,-1, 19,0);
        tracep->declBit(c+199,"ysyx_22040895_top my_regfile clk", false,-1);
        tracep->declBit(c+200,"ysyx_22040895_top my_regfile rst", false,-1);
        tracep->declBit(c+13,"ysyx_22040895_top my_regfile re1_i_reg", false,-1);
        tracep->declBit(c+14,"ysyx_22040895_top my_regfile re2_i_reg", false,-1);
        tracep->declBit(c+15,"ysyx_22040895_top my_regfile we_i_reg", false,-1);
        tracep->declBus(c+10,"ysyx_22040895_top my_regfile raddr1_i_reg", false,-1, 4,0);
        tracep->declBus(c+11,"ysyx_22040895_top my_regfile raddr2_i_reg", false,-1, 4,0);
        tracep->declBus(c+12,"ysyx_22040895_top my_regfile waddr_i_reg", false,-1, 4,0);
        tracep->declQuad(c+22,"ysyx_22040895_top my_regfile rdata1_o_reg", false,-1, 63,0);
        tracep->declQuad(c+204,"ysyx_22040895_top my_regfile rdata2_o_reg", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22040895_top my_regfile wdata_i_reg", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+135+i*2,"ysyx_22040895_top my_regfile regs", true,(i+0), 63,0);}}
        tracep->declBit(c+16,"ysyx_22040895_top my_opnumsel opsrc_i_opnumsel", false,-1);
        tracep->declQuad(c+8,"ysyx_22040895_top my_opnumsel simm_i_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+22,"ysyx_22040895_top my_opnumsel rdata1_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+204,"ysyx_22040895_top my_opnumsel rdata2_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+22,"ysyx_22040895_top my_opnumsel opnum1_o_opnumsel", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22040895_top my_opnumsel opnum2_o_opnumsel", false,-1, 63,0);
        tracep->declBit(c+200,"ysyx_22040895_top my_cu rst", false,-1);
        tracep->declBus(c+2,"ysyx_22040895_top my_cu opcode_i_cu", false,-1, 6,0);
        tracep->declBus(c+3,"ysyx_22040895_top my_cu func3_i_cu", false,-1, 2,0);
        tracep->declBus(c+4,"ysyx_22040895_top my_cu func7_i_cu", false,-1, 6,0);
        tracep->declBit(c+19,"ysyx_22040895_top my_cu jump_branch_i_cu", false,-1);
        tracep->declBus(c+17,"ysyx_22040895_top my_cu aluop_o_cu", false,-1, 3,0);
        tracep->declBus(c+18,"ysyx_22040895_top my_cu bcuop_o_cu", false,-1, 2,0);
        tracep->declBit(c+16,"ysyx_22040895_top my_cu opsel_o_cu", false,-1);
        tracep->declBit(c+7,"ysyx_22040895_top my_cu immsel_o_cu", false,-1);
        tracep->declBit(c+13,"ysyx_22040895_top my_cu re1_o_cu", false,-1);
        tracep->declBit(c+14,"ysyx_22040895_top my_cu re2_o_cu", false,-1);
        tracep->declBit(c+15,"ysyx_22040895_top my_cu we_o_cu", false,-1);
        tracep->declBit(c+1,"ysyx_22040895_top my_cu jump_branch_o_cu", false,-1);
        tracep->declBus(c+2,"ysyx_22040895_top my_cu op", false,-1, 6,0);
        tracep->declBus(c+3,"ysyx_22040895_top my_cu func3", false,-1, 2,0);
        tracep->declBus(c+4,"ysyx_22040895_top my_cu func7", false,-1, 6,0);
        tracep->declBit(c+44,"ysyx_22040895_top my_cu addi_op", false,-1);
        tracep->declBit(c+45,"ysyx_22040895_top my_cu add_op", false,-1);
        tracep->declBit(c+46,"ysyx_22040895_top my_cu sub_op", false,-1);
        tracep->declBit(c+47,"ysyx_22040895_top my_cu andi_op", false,-1);
        tracep->declBit(c+48,"ysyx_22040895_top my_cu and_op", false,-1);
        tracep->declBit(c+49,"ysyx_22040895_top my_cu sll_op", false,-1);
        tracep->declBit(c+50,"ysyx_22040895_top my_cu ori_op", false,-1);
        tracep->declBit(c+51,"ysyx_22040895_top my_cu or_op", false,-1);
        tracep->declBit(c+52,"ysyx_22040895_top my_cu srl_op", false,-1);
        tracep->declBit(c+53,"ysyx_22040895_top my_cu xori_op", false,-1);
        tracep->declBit(c+54,"ysyx_22040895_top my_cu xor_op", false,-1);
        tracep->declBit(c+55,"ysyx_22040895_top my_cu sra_op", false,-1);
        tracep->declBit(c+56,"ysyx_22040895_top my_cu slti_op", false,-1);
        tracep->declBit(c+57,"ysyx_22040895_top my_cu slt_op", false,-1);
        tracep->declBit(c+58,"ysyx_22040895_top my_cu sltiu_op", false,-1);
        tracep->declBit(c+59,"ysyx_22040895_top my_cu sltu_op", false,-1);
        tracep->declBit(c+60,"ysyx_22040895_top my_cu beq_op", false,-1);
        tracep->declBit(c+61,"ysyx_22040895_top my_cu auipc_op", false,-1);
        tracep->declBit(c+62,"ysyx_22040895_top my_cu bge_op", false,-1);
        tracep->declBit(c+63,"ysyx_22040895_top my_cu lui_op", false,-1);
        tracep->declBit(c+64,"ysyx_22040895_top my_cu bgeu_op", false,-1);
        tracep->declBit(c+65,"ysyx_22040895_top my_cu blt_op", false,-1);
        tracep->declBit(c+66,"ysyx_22040895_top my_cu bltu_op", false,-1);
        tracep->declBit(c+43,"ysyx_22040895_top my_cu jal_op", false,-1);
        tracep->declBit(c+67,"ysyx_22040895_top my_cu bne_op", false,-1);
        tracep->declBit(c+68,"ysyx_22040895_top my_cu jalr_op", false,-1);
        tracep->declBit(c+69,"ysyx_22040895_top my_cu op_rs1_imm", false,-1);
        tracep->declBit(c+14,"ysyx_22040895_top my_cu op_rs1_rs2", false,-1);
        tracep->declBit(c+70,"ysyx_22040895_top my_cu imm1", false,-1);
        tracep->declBit(c+71,"ysyx_22040895_top my_cu imm2", false,-1);
        tracep->declBit(c+13,"ysyx_22040895_top my_cu reg_r1", false,-1);
        tracep->declBit(c+14,"ysyx_22040895_top my_cu reg_r2", false,-1);
        tracep->declBit(c+15,"ysyx_22040895_top my_cu reg_w", false,-1);
        tracep->declBit(c+200,"ysyx_22040895_top my_exu rst", false,-1);
        tracep->declBus(c+17,"ysyx_22040895_top my_exu aluop_i_exu", false,-1, 3,0);
        tracep->declBus(c+18,"ysyx_22040895_top my_exu bcuop_i_exu", false,-1, 2,0);
        tracep->declBit(c+19,"ysyx_22040895_top my_exu jump_branch_o_exu", false,-1);
        tracep->declQuad(c+20,"ysyx_22040895_top my_exu dnpc_o_exu", false,-1, 63,0);
        tracep->declQuad(c+22,"ysyx_22040895_top my_exu op1_i_exu", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22040895_top my_exu op2_i_exu", false,-1, 63,0);
        tracep->declQuad(c+24,"ysyx_22040895_top my_exu result_o_exu", false,-1, 63,0);
        tracep->declQuad(c+26,"ysyx_22040895_top my_exu pc_i_exu", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22040895_top my_exu offset_i_exu", false,-1, 63,0);
        tracep->declBit(c+72,"ysyx_22040895_top my_exu lt_alu_bcu", false,-1);
        tracep->declBit(c+73,"ysyx_22040895_top my_exu ltu_alu_bcu", false,-1);
        tracep->declBit(c+74,"ysyx_22040895_top my_exu zero_alu_bcu", false,-1);
        tracep->declQuad(c+75,"ysyx_22040895_top my_exu alu_result", false,-1, 63,0);
        tracep->declQuad(c+77,"ysyx_22040895_top my_exu dnpc_o_bcu", false,-1, 63,0);
        tracep->declBit(c+79,"ysyx_22040895_top my_exu auipc_op", false,-1);
        tracep->declBit(c+80,"ysyx_22040895_top my_exu lui_op", false,-1);
        tracep->declBit(c+81,"ysyx_22040895_top my_exu jal_op", false,-1);
        tracep->declBit(c+82,"ysyx_22040895_top my_exu jalr_op", false,-1);
        tracep->declQuad(c+83,"ysyx_22040895_top my_exu adder_op1", false,-1, 63,0);
        tracep->declQuad(c+85,"ysyx_22040895_top my_exu adder_op2", false,-1, 63,0);
        tracep->declQuad(c+87,"ysyx_22040895_top my_exu adder_result", false,-1, 63,0);
        tracep->declBus(c+17,"ysyx_22040895_top my_exu my_alu aluop_i_alu", false,-1, 3,0);
        tracep->declQuad(c+22,"ysyx_22040895_top my_exu my_alu op1_i_alu", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22040895_top my_exu my_alu op2_i_alu", false,-1, 63,0);
        tracep->declQuad(c+75,"ysyx_22040895_top my_exu my_alu result_o_alu", false,-1, 63,0);
        tracep->declBit(c+72,"ysyx_22040895_top my_exu my_alu lt_o_alu", false,-1);
        tracep->declBit(c+73,"ysyx_22040895_top my_exu my_alu ltu_o_alu", false,-1);
        tracep->declBit(c+74,"ysyx_22040895_top my_exu my_alu zero_o_alu", false,-1);
        tracep->declBit(c+89,"ysyx_22040895_top my_exu my_alu op_add", false,-1);
        tracep->declBit(c+90,"ysyx_22040895_top my_exu my_alu op_sub", false,-1);
        tracep->declBit(c+91,"ysyx_22040895_top my_exu my_alu op_slt", false,-1);
        tracep->declBit(c+92,"ysyx_22040895_top my_exu my_alu op_sltu", false,-1);
        tracep->declBit(c+93,"ysyx_22040895_top my_exu my_alu op_sll", false,-1);
        tracep->declBit(c+94,"ysyx_22040895_top my_exu my_alu op_srl", false,-1);
        tracep->declBit(c+95,"ysyx_22040895_top my_exu my_alu op_sra", false,-1);
        tracep->declBit(c+96,"ysyx_22040895_top my_exu my_alu op_and", false,-1);
        tracep->declBit(c+97,"ysyx_22040895_top my_exu my_alu op_or", false,-1);
        tracep->declBit(c+98,"ysyx_22040895_top my_exu my_alu op_xor", false,-1);
        tracep->declQuad(c+99,"ysyx_22040895_top my_exu my_alu add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+209,"ysyx_22040895_top my_exu my_alu sub_result", false,-1, 63,0);
        tracep->declQuad(c+101,"ysyx_22040895_top my_exu my_alu slt_result", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_22040895_top my_exu my_alu sltu_result", false,-1, 63,0);
        tracep->declQuad(c+105,"ysyx_22040895_top my_exu my_alu sll_result", false,-1, 63,0);
        tracep->declQuad(c+107,"ysyx_22040895_top my_exu my_alu srl_result", false,-1, 63,0);
        tracep->declQuad(c+109,"ysyx_22040895_top my_exu my_alu sra_result", false,-1, 63,0);
        tracep->declQuad(c+111,"ysyx_22040895_top my_exu my_alu and_result", false,-1, 63,0);
        tracep->declQuad(c+113,"ysyx_22040895_top my_exu my_alu or_result", false,-1, 63,0);
        tracep->declQuad(c+115,"ysyx_22040895_top my_exu my_alu xor_result", false,-1, 63,0);
        tracep->declQuad(c+99,"ysyx_22040895_top my_exu my_alu adder_result", false,-1, 63,0);
        tracep->declBit(c+117,"ysyx_22040895_top my_exu my_alu adder_cout", false,-1);
        tracep->declQuad(c+22,"ysyx_22040895_top my_exu my_alu op1", false,-1, 63,0);
        tracep->declQuad(c+118,"ysyx_22040895_top my_exu my_alu op2", false,-1, 63,0);
        tracep->declQuad(c+120,"ysyx_22040895_top my_exu my_alu cin", false,-1, 63,0);
        tracep->declBit(c+72,"ysyx_22040895_top my_exu my_bcu lt_i_bcu", false,-1);
        tracep->declBit(c+73,"ysyx_22040895_top my_exu my_bcu ltu_i_bcu", false,-1);
        tracep->declBit(c+74,"ysyx_22040895_top my_exu my_bcu zero_i_bcu", false,-1);
        tracep->declBus(c+18,"ysyx_22040895_top my_exu my_bcu bcuop_i_bcu", false,-1, 2,0);
        tracep->declQuad(c+26,"ysyx_22040895_top my_exu my_bcu pc_i_bcu", false,-1, 63,0);
        tracep->declQuad(c+8,"ysyx_22040895_top my_exu my_bcu offset_i_bcu", false,-1, 63,0);
        tracep->declBit(c+19,"ysyx_22040895_top my_exu my_bcu jump_branch_o_bcu", false,-1);
        tracep->declQuad(c+77,"ysyx_22040895_top my_exu my_bcu dnpc_o_bcu", false,-1, 63,0);
        tracep->declBit(c+122,"ysyx_22040895_top my_exu my_bcu op_beq", false,-1);
        tracep->declBit(c+123,"ysyx_22040895_top my_exu my_bcu op_bge", false,-1);
        tracep->declBit(c+124,"ysyx_22040895_top my_exu my_bcu op_bgeu", false,-1);
        tracep->declBit(c+125,"ysyx_22040895_top my_exu my_bcu op_blt", false,-1);
        tracep->declBit(c+126,"ysyx_22040895_top my_exu my_bcu op_bltu", false,-1);
        tracep->declBit(c+127,"ysyx_22040895_top my_exu my_bcu op_bne", false,-1);
        tracep->declBit(c+128,"ysyx_22040895_top my_exu my_bcu beq", false,-1);
        tracep->declBit(c+129,"ysyx_22040895_top my_exu my_bcu bge", false,-1);
        tracep->declBit(c+130,"ysyx_22040895_top my_exu my_bcu bgeu", false,-1);
        tracep->declBit(c+131,"ysyx_22040895_top my_exu my_bcu blt", false,-1);
        tracep->declBit(c+132,"ysyx_22040895_top my_exu my_bcu bltu", false,-1);
        tracep->declBit(c+133,"ysyx_22040895_top my_exu my_bcu bne", false,-1);
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
        tracep->fullBit(oldp+1,((((((((((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
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
        tracep->fullCData(oldp+2,(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu),7);
        tracep->fullCData(oldp+3,(vlSelf->ysyx_22040895_top__DOT__func3_id_cu),3);
        tracep->fullCData(oldp+4,(vlSelf->ysyx_22040895_top__DOT__func7_id_cu),7);
        tracep->fullSData(oldp+5,(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext),12);
        tracep->fullIData(oldp+6,(vlSelf->ysyx_22040895_top__DOT__imm2_id_sext),20);
        tracep->fullBit(oldp+7,((1U & (((((((((((((
                                                   ((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
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
        tracep->fullQData(oldp+8,(vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu),64);
        tracep->fullCData(oldp+10,(vlSelf->ysyx_22040895_top__DOT__rs1addr_id_reg),5);
        tracep->fullCData(oldp+11,(vlSelf->ysyx_22040895_top__DOT__rs2addr_id_reg),5);
        tracep->fullCData(oldp+12,(vlSelf->ysyx_22040895_top__DOT__rdaddr_id_reg),5);
        tracep->fullBit(oldp+13,(((((((((((((((((((
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
        tracep->fullBit(oldp+14,(((((((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op) 
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
        tracep->fullBit(oldp+15,(((((((((((((((((((
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
        tracep->fullBit(oldp+16,((1U & ((~ (((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
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
        tracep->fullCData(oldp+17,(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu),4);
        tracep->fullCData(oldp+18,(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu),3);
        tracep->fullBit(oldp+19,((((((((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
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
        tracep->fullQData(oldp+20,(((0xcU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                     ? (0xfffffffffffffffeULL 
                                        & (vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                           + vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu))
                                     : (vlSelf->ysyx_22040895_top__DOT__pc_id_exu 
                                        + (vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu 
                                           << 1U)))),64);
        tracep->fullQData(oldp+22,(vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux),64);
        tracep->fullQData(oldp+24,(((((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)) 
                                      | (7U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))) 
                                     | (0xcU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)))
                                     ? (((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                          ? 0ULL : vlSelf->ysyx_22040895_top__DOT__pc_id_exu) 
                                        + ((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                            ? (vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex 
                                               << 0xcU)
                                            : (((7U 
                                                 == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)) 
                                                | (0xcU 
                                                   == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)))
                                                ? 4ULL
                                                : 0ULL)))
                                     : vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result)),64);
        tracep->fullQData(oldp+26,(vlSelf->ysyx_22040895_top__DOT__pc_id_exu),64);
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex),64);
        tracep->fullQData(oldp+30,(((1U & (((((((((
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
        tracep->fullQData(oldp+32,((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext) 
                                                            >> 0xbU))))) 
                                     << 0xcU) | (QData)((IData)(vlSelf->ysyx_22040895_top__DOT__imm1_id_sext)))),64);
        tracep->fullQData(oldp+34,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->ysyx_22040895_top__DOT__imm2_id_sext 
                                                            >> 0x13U))))) 
                                     << 0x14U) | (QData)((IData)(vlSelf->ysyx_22040895_top__DOT__imm2_id_sext)))),64);
        tracep->fullBit(oldp+36,((((((((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
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
        tracep->fullBit(oldp+37,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                  & (0U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+38,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                  & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+39,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                  & (7U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+40,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                  & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+41,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                  & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+42,(((0x63U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                  & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__func3_id_cu)))));
        tracep->fullBit(oldp+43,((0x6fU == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))));
        tracep->fullBit(oldp+44,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op));
        tracep->fullBit(oldp+45,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__add_op));
        tracep->fullBit(oldp+46,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sub_op));
        tracep->fullBit(oldp+47,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op));
        tracep->fullBit(oldp+48,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__and_op));
        tracep->fullBit(oldp+49,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sll_op));
        tracep->fullBit(oldp+50,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op));
        tracep->fullBit(oldp+51,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__or_op));
        tracep->fullBit(oldp+52,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__srl_op));
        tracep->fullBit(oldp+53,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op));
        tracep->fullBit(oldp+54,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xor_op));
        tracep->fullBit(oldp+55,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sra_op));
        tracep->fullBit(oldp+56,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op));
        tracep->fullBit(oldp+57,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slt_op));
        tracep->fullBit(oldp+58,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op));
        tracep->fullBit(oldp+59,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltu_op));
        tracep->fullBit(oldp+60,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__beq_op));
        tracep->fullBit(oldp+61,((0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))));
        tracep->fullBit(oldp+62,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bge_op));
        tracep->fullBit(oldp+63,((0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))));
        tracep->fullBit(oldp+64,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bgeu_op));
        tracep->fullBit(oldp+65,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__blt_op));
        tracep->fullBit(oldp+66,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bltu_op));
        tracep->fullBit(oldp+67,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__bne_op));
        tracep->fullBit(oldp+68,(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op));
        tracep->fullBit(oldp+69,((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
                                         | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__andi_op)) 
                                        | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__ori_op)) 
                                       | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__xori_op)) 
                                      | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__slti_op)) 
                                     | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__sltiu_op)) 
                                    | (0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                   | (IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__jalr_op)) 
                                  | (0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)))));
        tracep->fullBit(oldp+70,(((((((((((((((IData)(vlSelf->ysyx_22040895_top__DOT__my_cu__DOT__addi_op) 
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
        tracep->fullBit(oldp+71,((((0x17U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)) 
                                   | (0x6fU == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu))) 
                                  | (0x37U == (IData)(vlSelf->ysyx_22040895_top__DOT__opcode_id_cu)))));
        tracep->fullBit(oldp+72,((1U & (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result))));
        tracep->fullBit(oldp+73,((1U & (~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)))));
        tracep->fullBit(oldp+74,((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result)));
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result),64);
        tracep->fullQData(oldp+77,((vlSelf->ysyx_22040895_top__DOT__pc_id_exu 
                                    + (vlSelf->ysyx_22040895_top__DOT__simm_sext_opnummux_exu 
                                       << 1U))),64);
        tracep->fullBit(oldp+79,((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+80,((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+81,((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+82,((0xcU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullQData(oldp+83,(((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                     ? 0ULL : vlSelf->ysyx_22040895_top__DOT__pc_id_exu)),64);
        tracep->fullQData(oldp+85,(((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                     ? (vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex 
                                        << 0xcU) : 
                                    (((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)) 
                                      | (0xcU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)))
                                      ? 4ULL : 0ULL))),64);
        tracep->fullQData(oldp+87,((((0xbU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                      ? 0ULL : vlSelf->ysyx_22040895_top__DOT__pc_id_exu) 
                                    + ((0xaU == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))
                                        ? (vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex 
                                           << 0xcU)
                                        : (((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)) 
                                            | (0xcU 
                                               == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu)))
                                            ? 4ULL : 0ULL)))),64);
        tracep->fullBit(oldp+89,((0U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+90,((1U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+91,((2U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+92,((9U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+93,((3U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+94,((4U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+95,((5U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+96,((6U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+97,((7U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullBit(oldp+98,((8U == (IData)(vlSelf->ysyx_22040895_top__DOT__aluop_cu_exu))));
        tracep->fullQData(oldp+99,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_result),64);
        tracep->fullQData(oldp+101,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result),64);
        tracep->fullQData(oldp+103,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)))))),64);
        tracep->fullQData(oldp+105,(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+107,(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+109,(VL_SHIFTRS_QQQ(64,64,64, vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux, vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+111,((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                     & vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+113,((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                     | vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullQData(oldp+115,((vlSelf->ysyx_22040895_top__DOT__rdata1_reg_mux 
                                     ^ vlSelf->ysyx_22040895_top__DOT__opnum2_opnumsel_ex)),64);
        tracep->fullBit(oldp+117,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout));
        tracep->fullQData(oldp+118,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__op2),64);
        tracep->fullQData(oldp+120,(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__cin),64);
        tracep->fullBit(oldp+122,((1U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+123,((2U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+124,((3U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+125,((4U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+126,((5U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+127,((6U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu))));
        tracep->fullBit(oldp+128,(((0ULL == vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
                                   & (1U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+129,(((~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result)) 
                                   & (2U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+130,(((IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout) 
                                   & (3U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+131,(((IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__slt_result) 
                                   & (4U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+132,(((~ (IData)(vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__my_alu__DOT__adder_cout)) 
                                   & (5U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+133,(((0ULL != vlSelf->ysyx_22040895_top__DOT__my_exu__DOT__alu_result) 
                                   & (6U == (IData)(vlSelf->ysyx_22040895_top__DOT__bcuop_cu_exu)))));
        tracep->fullBit(oldp+134,(vlSelf->ysyx_22040895_top__DOT__ce_ifu_instrom));
        tracep->fullQData(oldp+135,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+137,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+139,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+141,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+147,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+149,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+151,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+153,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+155,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+157,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+159,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+161,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+163,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+165,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+167,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+169,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+171,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+173,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+175,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+177,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+179,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+181,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+183,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+187,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+189,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+191,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+193,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+195,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+197,(vlSelf->ysyx_22040895_top__DOT__my_regfile__DOT__regs[31]),64);
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
