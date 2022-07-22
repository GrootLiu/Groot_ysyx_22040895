`include "/home/groot/ysyx-workbench/npc/include/define.v"

module pc (input wire clk, 
           input wire rst,
           input wire jb_i_pc,
           input wire[`InstBus] dnpc_i_pc,
           output reg[`InstAddrBus] pc_o_pc,
           output reg ce_o_pc);

    initial begin
        pc_o_pc = 32'h80000000;
    end
    always @(posedge clk) begin
        if (rst == `RstEnable) begin
            ce_o_pc <= `ChipDisable;
        end
        else begin
            ce_o_pc <= `ChipEnable;
            if (jb_i_pc == `Branch) begin
                pc_o_pc <= dnpc_i_pc;
            end
            else begin
                pc_o_pc <= pc_o_pc + 32'h00000004;
            end
        end
    end
    
endmodule //pc