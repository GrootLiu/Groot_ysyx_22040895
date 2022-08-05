`include "/home/groot/ysyx-workbench/npc/include/define.v"
`include "/home/groot/ysyx-workbench/npc/vsrc/ysyx_22040895_pc.v"

module ysyx_22040895_ifu (input wire clk,
            input wire rst,
            input wire[`ysyx_22040895_InstBus] inst_i_ifu,
            input wire pcsel_i_ifu,
            input wire[`ysyx_22040895_InstAddrBus] dnpc_i_ifu,
            output wire[`ysyx_22040895_InstBus] inst_o_ifu,
            output wire[`ysyx_22040895_InstAddrBus] instaddr_o_ifu,
            output wire[`ysyx_22040895_InstAddrBus] pc_o_ifu,
            output wire ce_o_ifu);
    
    
    ysyx_22040895_pc my_pc(
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
