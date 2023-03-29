`ifndef _DEFINE_H
`define _DEFINE_H
`include "../include/define.v"
`endif


module ysyx_22040895_alu (input wire[`ysyx_22040895_aluopLength] aluop_i_alu,
            input wire[`ysyx_22040895_RegBus] op1_i_alu,
            input wire[`ysyx_22040895_RegBus] op2_i_alu,
			input wire wordop_i_alu,
			input wire shift_i_alu,
            output wire[`ysyx_22040895_RegBus] result_o_alu,
            output wire lt_o_alu,
            output wire ltu_o_alu, 
            output wire zero_o_alu);

    wire op_add   = (aluop_i_alu == 4'b0000);
    wire op_sub   = (aluop_i_alu == 4'b0001);
    wire op_slt   = (aluop_i_alu == 4'b0010);
    wire op_sltu  = (aluop_i_alu == 4'b1001);
    wire op_sll   = (aluop_i_alu == 4'b0011);
    wire op_srl   = (aluop_i_alu == 4'b0100);
    wire op_sra   = (aluop_i_alu == 4'b0101);
    wire op_and   = (aluop_i_alu == 4'b0110);
    wire op_or    = (aluop_i_alu == 4'b0111);
    wire op_xor   = (aluop_i_alu == 4'b1000);

    wire[`ysyx_22040895_RegBus] add_sub_result;
    wire[`ysyx_22040895_RegBus] sub_result;
    wire[`ysyx_22040895_RegBus] slt_result;
    wire[`ysyx_22040895_RegBus] sltu_result;
    wire[`ysyx_22040895_RegBus] sll_result;
    wire[`ysyx_22040895_RegBus] srl_result;
    wire[`ysyx_22040895_RegBus] sra_result;
    wire[`ysyx_22040895_RegBus] and_result;
    wire[`ysyx_22040895_RegBus] or_result;
    wire[`ysyx_22040895_RegBus] xor_result;

    assign and_result = op1_i_alu & op2_i_alu;
    assign or_result  = op1_i_alu | op2_i_alu;
    assign xor_result = op1_i_alu ^ op2_i_alu;

    wire[`ysyx_22040895_RegBus] adder_result;
    wire adder_cout;

    wire[`ysyx_22040895_RegBus] op1 = op1_i_alu;
    wire[`ysyx_22040895_RegBus] op2 = (op_sub | op_slt | op_sltu) ? ~op2_i_alu : op2_i_alu;
    wire[`ysyx_22040895_RegBus] cin = (op_sub | op_slt | op_sltu) ? 64'h1 : 64'h0;
    assign {adder_cout, adder_result} = op1 + op2 + cin;
    assign add_sub_result = adder_result;
    assign slt_result[63:1] = {63{1'b0}};
    assign slt_result[0] = (op1_i_alu[63] & ~op2_i_alu[63]) | (~(op1_i_alu[63]^op2_i_alu[63])&adder_result[63]);
    assign sltu_result[63:1] = {63{1'b0}};
    assign sltu_result[0] = ~adder_cout;
    assign sll_result = (shift_i_alu == 1'b0) ? (op1_i_alu << op2_i_alu) : (shift_i_alu & wordop_i_alu == 1'b1) ? ({32'b0, op1_i_alu[31:0]} << op2_i_alu[5:0]) : (wordop_i_alu == 1'b1) ? ({32'b0, op1_i_alu[31:0]} << op2_i_alu[4:0]) : (op1_i_alu << op2_i_alu[5:0]);
    assign srl_result = (shift_i_alu == 1'b0) ? (op1_i_alu >> op2_i_alu) : (shift_i_alu & wordop_i_alu == 1'b1) ? ({32'b0, op1_i_alu[31:0]} >> op2_i_alu[5:0]) : (wordop_i_alu == 1'b1) ? ({32'b0, op1_i_alu[31:0]} >> op2_i_alu[4:0]) : (op1_i_alu >> op2_i_alu[5:0]);
    assign sra_result = (shift_i_alu == 1'b0) ? (($signed(op1_i_alu)) >>> op2_i_alu[4:0]) : (($signed(op1_i_alu)) >>> op2_i_alu[5:0]);
    assign result_o_alu = (op_add | op_sub) ? add_sub_result : 
                          (op_and)          ? and_result     :
                          (op_or)           ? or_result      :
                          (op_xor)          ? xor_result     :
                          (op_slt)          ? slt_result     :
                          (op_sltu)         ? sltu_result    : 
                          (op_sll)          ? sll_result     :
                          (op_srl)          ? srl_result     :
                          (op_sra)          ? sra_result     :64'b0;
    assign lt_o_alu   = slt_result[0];
    assign ltu_o_alu  = sltu_result[0];
    assign zero_o_alu = (result_o_alu == 64'b0);
endmodule //alu
