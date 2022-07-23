`include "/home/groot/ysyx-workbench/npc/include/define.v"

module alu (input wire[`aluopLength] aluop_i_alu,
            input wire[`RegBus] op1_i_alu,
            input wire[`RegBus] op2_i_alu,
            output wire[`RegBus] result_o_alu);

    wire op_add = (aluop_i_alu == 4'b0000);
    wire op_sub = (aluop_i_alu == 4'b0001);
    wire op_slt = (aluop_i_alu == 4'b0010);
    // wire op_sll = (aluop_i_alu == 4'b0011);
    // wire op_srl = (aluop_i_alu == 4'b0100);
    // wire op_sra = (aluop_i_alu == 4'b0101);
    wire op_and = (aluop_i_alu == 4'b0110);
    wire op_or  = (aluop_i_alu == 4'b0111);
    wire op_xor = (aluop_i_alu == 4'b1000);

    wire[`RegBus] add_result;
    wire[`RegBus] sub_result;
    wire[`RegBus] slt_result;
    // wire[`RegBus] sll_result;
    // wire[`RegBus] srl_result;
    // wire[`RegBus] sra_result;
    wire[`RegBus] and_result;
    wire[`RegBus] or_result;
    wire[`RegBus] xor_result;

    assign and_result = op1_i_alu & op2_i_alu;
    assign or_result  = op1_i_alu | op2_i_alu;
    assign xor_result = op1_i_alu ^ op2_i_alu;

    wire[`RegBus] adder_result;
    wire adder_cout;
    wire[`RegBus] add_sub_result;
    wire carryout;
    wire overflow;
    wire zero;

    wire op1 = op1_i_alu;
    wire op2 = (op_sub | op_slt) ? ~op2_i_alu : op2_i_alu;
    wire cin = (op_sub | op_slt) ? 1 : 0;
    assign {adder_cout, adder_result} = op1 + op2 + cin;
    assign add_sub_result = adder_result;
    assign slt_result[63:1] = {63{1'b0}};
    assign slt_result[0] = (op1_i_alu & ~op2_i_alu) | (~(op1_i_alu^op2_i_alu)&adder_result);
    // assign sll_result = ;
    // assign srl_result = ;
    // assign sra_result = ;

    assign result_o_alu = (op_add | op_sub) ? add_sub_result : 
                          (op_add)          ? and_result     :
                          (op_or)           ? or_result      :
                          (op_xor)          ? xor_result     : 64'b0;
                    
endmodule //alu
