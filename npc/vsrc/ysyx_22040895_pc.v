`include "/home/groot/ysyx-workbench/npc/include/define.v"

module ysyx_22040895_pc (input wire clk, 
           input wire rst,
           input wire pcsel_i_pc,
           input wire[`ysyx_22040895_InstAddrBus] dnpc_i_pc,
           output reg[`ysyx_22040895_InstAddrBus] pc_o_pc,
           output reg ce_o_pc);

    // initial begin
    //     pc_o_pc = 32'h80000000;
    // end
    reg pcsel;
    always @(posedge clk) begin
        if (rst == `ysyx_22040895_RstEnable) begin
            ce_o_pc <= `ysyx_22040895_ChipDisable;
            pc_o_pc <= 64'h000000007ffffffc;
            // pc_o_pc <= 64'h0;
        end
        else begin
            ce_o_pc <= `ysyx_22040895_ChipEnable;
            if (pcsel_i_pc == `ysyx_22040895_Branch) begin
                pc_o_pc <= dnpc_i_pc;
            end
            else begin
                pc_o_pc <= pc_o_pc + 64'h4;
            end
        end
    end
    
endmodule //pc