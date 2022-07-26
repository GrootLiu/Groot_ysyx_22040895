`include "/home/groot/ysyx-workbench/npc/include/define.v"

module bcu (input wire lt_i_bcu,
            input wire ltu_i_bcu,
            input wire zero_i_bcu,
            input wire[`bcuopLength] bcuop_i_bcu,
            input wire[`RegBus] pc_i_bcu,
            input wire[`RegBus] offset_i_bcu,
            output wire jump_branch_o_bcu,
            output wire[`RegBus] dnpc_o_bcu);
    
    wire op_beq = (bcuop_i_bcu == 3'b001);

    wire beq = zero_i_bcu & op_beq;

    assign jump_branch_o_bcu = beq;
    assign dnpc_o_bcu = pc_i_bcu + offset_i_bcu;
    
endmodule //bcu