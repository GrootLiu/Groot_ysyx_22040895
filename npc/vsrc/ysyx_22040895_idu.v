`include "/home/groot/ysyx-workbench/npc/include/define.v"

module ysyx_22040895_idu (input wire rst,
                          input wire[`ysyx_22040895_InstBus] inst_i_idu,
                          input wire[`ysyx_22040895_InstAddrBus] pc_i_idu,
                          output wire[`ysyx_22040895_OpCodeLength] opcode_o_idu,
                          output wire[`ysyx_22040895_func3Length] func3_o_idu,
                          output wire[`ysyx_22040895_func7Length] func7_o_idu,
                          output wire[`ysyx_22040895_imm1Length] imm1_o_idu,
                          output wire[`ysyx_22040895_imm2Length] imm2_o_idu,
                          output wire[`ysyx_22040895_RegAddrBus] rs1addr_o_idu,
                          output wire[`ysyx_22040895_RegAddrBus] rs2addr_o_idu,
                          output wire[`ysyx_22040895_RegAddrBus] rdaddr_o_idu,
                          output wire[`ysyx_22040895_InstAddrBus] pc_o_idu);
    
    wire branch;
    
    wire beq;
    wire bge;
    wire bgeu;
    wire blt;
    wire bltu;
    wire bne;
    wire jal;
    
    wire store;
    
    assign beq  = (opcode_o_idu == 7'b1100011) & (func3_o_idu == 3'b000);
    assign bge  = (opcode_o_idu == 7'b1100011) & (func3_o_idu == 3'b101);
    assign bgeu = (opcode_o_idu == 7'b1100011) & (func3_o_idu == 3'b111);
    assign blt  = (opcode_o_idu == 7'b1100011) & (func3_o_idu == 3'b100);
    assign bltu = (opcode_o_idu == 7'b1100011) & (func3_o_idu == 3'b110);
    assign bne  = (opcode_o_idu == 7'b1100011) & (func3_o_idu == 3'b001);
    assign jal  = (opcode_o_idu == 7'b1101111);
    
    assign store = (opcode_o_idu == 7'b0100011);
    
    assign branch = beq | bge | bgeu | blt | bltu | bne;
    
    wire[11:0] branch_offset = {inst_i_idu[11:8], inst_i_idu[30:25], inst_i_idu[7], inst_i_idu[31]};
    wire[19:0] jal_offset    = {inst_i_idu[31], inst_i_idu[19:12], inst_i_idu[20], inst_i_idu[30:21]};
    wire[11:0] store_offset  = {inst_i_idu[31:25], inst_i_idu[11:7]};
    
    assign pc_o_idu     = (rst == `ysyx_22040895_RstEnable) ? 64'b0 : pc_i_idu;
    assign opcode_o_idu = (rst == `ysyx_22040895_RstEnable) ? 7'b0 : inst_i_idu[6:0];
    assign func3_o_idu  = (rst == `ysyx_22040895_RstEnable) ? 3'b0 : inst_i_idu[14:12];
    assign func7_o_idu  = (rst == `ysyx_22040895_RstEnable) ? 7'b0 : inst_i_idu[31:25];
    assign imm1_o_idu = (rst == `ysyx_22040895_RstEnable) ? 12'b0 :
    					(branch == 1'b1) ? branch_offset :
    					(store == 1'b1)  ? store_offset : inst_i_idu[31:20];
    assign imm2_o_idu = (rst == `ysyx_22040895_RstEnable) ? 20'b0 :
    					(jal == 1'b1)    ? jal_offset : inst_i_idu[31:12];
    assign rs1addr_o_idu = (rst == `ysyx_22040895_RstEnable) ? 5'b0 : inst_i_idu[19:15];
    assign rs2addr_o_idu = (rst == `ysyx_22040895_RstEnable) ? 5'b0 : inst_i_idu[24:20];
    assign rdaddr_o_idu  = (rst == `ysyx_22040895_RstEnable) ? 5'b0 : inst_i_idu[11:7];
    
endmodule //idu
    
    
    
