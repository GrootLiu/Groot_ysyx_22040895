`include "../include/define.v"

module ysyx_22040895_bcu (input wire lt_i_bcu,
            input wire ltu_i_bcu,
            input wire zero_i_bcu,
            input wire[`ysyx_22040895_bcuopLength] bcuop_i_bcu,
            input wire[`ysyx_22040895_RegBus] pc_i_bcu,
            input wire[`ysyx_22040895_RegBus] offset_i_bcu,
            output wire jump_branch_o_bcu,
            output wire[`ysyx_22040895_RegBus] dnpc_o_bcu);
    
    wire op_beq  = (bcuop_i_bcu == 3'b001);
    wire op_bge  = (bcuop_i_bcu == 3'b010);
    wire op_bgeu = (bcuop_i_bcu == 3'b011);
    wire op_blt  = (bcuop_i_bcu == 3'b100);
    wire op_bltu = (bcuop_i_bcu == 3'b101);
    wire op_bne  = (bcuop_i_bcu == 3'b110);

    
    wire beq  = zero_i_bcu  & op_beq;
    wire bge  = ~lt_i_bcu   & op_bge;
    wire bgeu = ~ltu_i_bcu  & op_bgeu;
    wire blt  = lt_i_bcu    & op_blt;
    wire bltu = ltu_i_bcu   & op_bltu;
    wire bne  = ~zero_i_bcu & op_bne;
    
    assign jump_branch_o_bcu = beq | bge | bgeu | blt | bltu | bne;
    assign dnpc_o_bcu        = pc_i_bcu + (offset_i_bcu << 1);
    
endmodule //bcu
