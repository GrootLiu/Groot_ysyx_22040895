`include "/home/groot/ysyx-workbench/npc/include/define.v"
`include "/home/groot/ysyx-workbench/npc/vsrc/ysyx_22040895_alu.v"
`include "/home/groot/ysyx-workbench/npc/vsrc/ysyx_22040895_bcu.v"

module ysyx_22040895_exu (input wire rst,
            input wire[`ysyx_22040895_aluopLength] aluop_i_exu,
            input wire[`ysyx_22040895_bcuopLength] bcuop_i_exu,
            output wire jump_branch_o_exu,
            output wire[`ysyx_22040895_InstAddrBus] dnpc_o_exu,
            input wire[`ysyx_22040895_RegBus] op1_i_exu,
            input wire[`ysyx_22040895_RegBus] op2_i_exu,
            output wire[`ysyx_22040895_RegBus] result_o_exu,
            input wire[`ysyx_22040895_InstAddrBus] pc_i_exu,
            input wire[`ysyx_22040895_RegBus] offset_i_exu);
    
    wire lt_alu_bcu;
    wire ltu_alu_bcu;
    wire zero_alu_bcu;
    
    wire[`ysyx_22040895_RegBus] alu_result;
    ysyx_22040895_alu my_alu(
    //ports
    .aluop_i_alu  		(aluop_i_exu),
    .op1_i_alu    		(op1_i_exu),
    .op2_i_alu    		(op2_i_exu),
    .result_o_alu 		(alu_result),
    .lt_o_alu           (lt_alu_bcu),
    .ltu_o_alu          (ltu_alu_bcu),
    .zero_o_alu         (zero_alu_bcu)
    );
    wire[`ysyx_22040895_RegBus] dnpc_o_bcu;
    ysyx_22040895_bcu my_bcu(
    //ports
    .lt_i_bcu          		(lt_alu_bcu),
    .ltu_i_bcu         		(ltu_alu_bcu),
    .zero_i_bcu        		(zero_alu_bcu),
    .bcuop_i_bcu       		(bcuop_i_exu),
    .pc_i_bcu          		(pc_i_exu),
    .offset_i_bcu      		(offset_i_exu),
    .jump_branch_o_bcu 		(jump_branch_o_exu),
    .dnpc_o_bcu        		(dnpc_o_bcu)
    );
    
    assign dnpc_o_exu = (jalr_op == 1) ? ((op1_i_exu + offset_i_exu) & ~1) : dnpc_o_bcu;
    // 0 alu   |   1 adder_op2
    wire auipc_op              = (aluop_i_exu == 4'b1010);
	wire lui_op				   = (aluop_i_exu == 4'b1011);
    wire jal_op                = (bcuop_i_exu == 3'b111);
    wire jalr_op               = (bcuop_i_exu == 3'b000);
	wire[`ysyx_22040895_RegBus] adder_op1    = (lui_op == 1'b1) ? (64'b0) : pc_i_exu;
    wire[`ysyx_22040895_RegBus] adder_op2    = (auipc_op == 1'b1) ? (op2_i_exu<<12) :
                                 (jal_op == 1'b1 | jalr_op == 1'b1) ? (64'h4) : 64'h0;
    wire[`ysyx_22040895_RegBus] adder_result = adder_op1 + adder_op2;
    assign result_o_exu        = (auipc_op | jal_op | jalr_op) ? adder_result : alu_result;
    
endmodule //ex
