`include "../include/include.v"

module ifu (input wire clk,
            input wire rst,
            input wire[`InstBus] inst_i_ifu,
            input wire jb_i_ifu,
            input wire[`InstBus] dnpc_i_ifu,
            output reg[`InstBus] inst_o_ifu,
            output reg[`InstAddrBus] instaddr_o_ifu,
            output reg[`InstAddrBus] pc_o_ifu,
            output reg ce_o_ifu);
    
    
    pc my_pc(
    .clk(clk),
    .rst(rst),
    .pc_o_pc(instaddr_o_ifu),
    .ce_o_pc(ce_o_ifu),
    .jb_i_pc(jb_i_ifu),
    .dnpc_i_pc(dnpc_i_ifu)
    );
    
    assign inst_o_ifu = inst_i_ifu;
    assign pc_o_ifu   = instaddr_o_ifu;
    
endmodule //ifu
