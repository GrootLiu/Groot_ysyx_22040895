`include "/home/groot/ysyx-workbench/npc/include/define.v"
`include "/home/groot/ysyx-workbench/npc/vsrc/alu.v"
`include "/home/groot/ysyx-workbench/npc/vsrc/bcu.v"

module exu (input wire rst,
            input wire[`aluopLength] aluop_i_exu,
            input wire[`bcuopLength] bcuop_i_exu,
            output wire jump_branch_o_exu,
            output wire[`InstAddrBus] dnpc_o_exu,
            input wire[`RegBus] op1_i_exu,
            input wire[`RegBus] op2_i_exu,
            output wire[`RegBus] result_o_exu,
            input wire[`InstAddrBus] pc_i_exu,
            input wire[`RegBus] offset_i_exu);
    
    wire lt_alu_bcu;
    wire ltu_alu_bcu;
    wire zero_alu_bcu;
    
    wire[`RegBus] alu_result;
    alu my_alu(
    //ports
    .aluop_i_alu  		(aluop_i_exu),
    .op1_i_alu    		(op1_i_exu),
    .op2_i_alu    		(op2_i_exu),
    .result_o_alu 		(alu_result),
    .lt_o_alu           (lt_alu_bcu),
    .ltu_o_alu          (ltu_alu_bcu),
    .zero_o_alu         (zero_alu_bcu)
    );
    
    bcu my_bcu(
    //ports
    .lt_i_bcu          		(lt_alu_bcu),
    .ltu_i_bcu         		(ltu_alu_bcu),
    .zero_i_bcu        		(zero_alu_bcu),
    .bcuop_i_bcu       		(bcuop_i_exu),
    .pc_i_bcu          		(pc_i_exu),
    .offset_i_bcu      		(offset_i_exu),
    .jump_branch_o_bcu 		(jump_branch_o_exu),
    .dnpc_o_bcu        		(dnpc_o_exu)
    );
    
    // 0 alu   |   1 auipc
    wire auipc_op              = (aluop_i_exu == 4'b1010) ? 1 : 0;
    wire[`RegBus] adder_result = pc_i_exu + (op2_i_exu<<12);
    assign result_o_exu        = (auipc_op == 0) ? alu_result : adder_result;
    
endmodule //ex
