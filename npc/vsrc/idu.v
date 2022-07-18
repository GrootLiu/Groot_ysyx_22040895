`include "../include/define.v"

module idu (input wire rst,
            input wire[`InstBus] inst_i_idu,
            input wire[`InstBus] pc_i_idu,
            output wire[`OpCodeLength] opcode_o_idu,
            output wire[`func3Length] func3_o_idu,
            output wire[`func7Length] func7_o_idu,
            output wire[`imm1Length] imm1_o_idu,
            output wire[`imm2Length] imm2_o_idu,
            output wire[`RegAddrBus] rs1addr_o_idu,
            output wire[`RegAddrBus] rs2addr_o_idu,
            output wire[`RegAddrBus] rdaddr_o_idu,
            output wire[`InstBus] pc_o_idu);
    
    assign pc_o_idu      = (rst == `RstEnable) ? 32'b0 : pc_i_idu;
    assign opcode_o_idu  = (rst == `RstEnable) ? 7'b0 : inst_i_idu[6:0];
    assign func3_o_idu   = (rst == `RstEnable) ? 3'b0 : inst_i_idu[14:12];
    assign func7_o_idu   = (rst == `RstEnable) ? 7'b0 : inst_i_idu[31:25];
    assign imm1_o_idu    = (rst == `RstEnable) ? 12'b0 : inst_i_idu[31:20];
    assign imm2_o_idu    = (rst == `RstEnable) ? 20'b0 : inst_i_idu[31:12];
    assign rs1addr_o_idu = (rst == `RstEnable) ? 5'b0 : inst_i_idu[19:15];
    assign rs2addr_o_idu = (rst == `RstEnable) ? 5'b0 : inst_i_idu[24:20];
    assign rdaddr_o_idu  = (rst == `RstEnable) ? 5'b0 : inst_i_idu[11:7];
    
endmodule //idu
    
    
    
