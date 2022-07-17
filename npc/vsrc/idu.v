`include "../include/include.v"

module idu (input wire rst,
            input wire[`InstBus] inst_i_idu,
            input wire[`InstBus] pc_i_idu,
            output reg[`OpCodeLength] opcode_o_idu,
            output reg[`func3Length] func3_o_idu,
            output reg[`func7Length] func7_o_idu,
            output reg[`imm1Length] imm1_o_idu,
            output reg[`imm2Length] imm2_o_idu,
            output reg[`RegAddrBus] rs1addr_o_idu,
            output reg[`RegAddrBus] rs2addr_o_idu,
            output reg[`RegAddrBus] rdaddr_o_idu,
            output reg[`InstBus] pc_o_idu);
    
    assign opcode_o_idu  = (rst == `RstDisable) ? 7'b0 : inst_i_idu[6:0];
    assign func3_o_idu   = (rst == `RstDisable) ? 3'b0 : inst_i_idu[14:12];
    assign func7_o_idu   = (rst == `RstDisable) ? 7'b0 : inst_i_idu[31:25];
    assign imm1_o_idu    = (rst == `RstDisable) ? 12'b0 : inst_i_idu[31:20];
    assign imm2_o_idu    = (rst == `RstDisable) ? 20'b0 : inst_i_idu[31:12];
    assign rs1addr_o_idu = (rst == `RstDisable) ? 5'b0 : inst_i_idu[19:15];
    assign rs2addr_o_idu = (rst == `RstDisable) ? 5'b0 : inst_i_idu[24:20];
    assign rdaddr_o_idu  = (rst == `RstDisable) ? 5'b0 : inst_i_idu[11:7];
    assign pc_o_idu      = (rst == `RstDisable) ? 32'b0 : pc_i_idu;
    
    
endmodule //idu
    
    
    
