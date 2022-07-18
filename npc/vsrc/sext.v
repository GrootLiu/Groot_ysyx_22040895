`include "../include/define.v"

module sext (input wire rst,
                 input wire immsel_i_sext,
                 input wire[`imm1Length] imm1_i_sext,
                 input wire[`imm2Length] imm2_i_sext,
                 output wire[`RegBus] simm_o_sext);

    wire[`RegBus] sign_imm_ext;
    wire[`RegBus] sign_imm1_ext;
    wire[`RegBus] sign_imm2_ext;

    assign sign_imm1_ext = {{52{imm1_i_sext[11]}}, imm1_i_sext[11:0]};
    assign sign_imm2_ext = {{44{imm2_i_sext[19]}}, imm2_i_sext[19:0]};
    // sign_imm_ext = 1 表示对imm1进行符号扩展，sign_imm_ext = 0 表示对imm2进行符号扩展
    assign sign_imm_ext = (immsel_i_sext == 1'b1) ? sign_imm1_ext : sign_imm2_ext;
    assign simm_o_sext  = (rst == `RstEnable) ? 64'b0 : sign_imm_ext;


endmodule //sext

