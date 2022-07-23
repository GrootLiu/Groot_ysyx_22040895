`include "/home/groot/ysyx-workbench/npc/include/define.v"
`include "/home/groot/ysyx-workbench/npc/vsrc/pc.v"

module ifu (input wire clk,
            input wire rst,
            input wire[`InstBus] inst_i_ifu,
            input wire pcsel_i_ifu,
            input wire[`InstBus] dnpc_i_ifu,
            output wire[`InstBus] inst_o_ifu,
            output wire[`InstAddrBus] instaddr_o_ifu,
            output wire[`InstAddrBus] pc_o_ifu,
            output wire ce_o_ifu);
    
    
    pc my_pc(
    .clk(clk),
    .rst(rst),
    .pc_o_pc(instaddr_o_ifu),
    .ce_o_pc(ce_o_ifu),
    .pcsel_i_pc(pcsel_i_ifu),
    .dnpc_i_pc(dnpc_i_ifu)
    );
    
    assign inst_o_ifu = inst_i_ifu;
    assign pc_o_ifu   = instaddr_o_ifu;
    
endmodule //ifu
