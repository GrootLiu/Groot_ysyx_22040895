`include "/home/groot/ysyx-workbench/npc/include/define.v"

module opnumsel (
    input  wire[1:0] opsrc_i_opnumsel,
    input  wire[`RegBus] simm_i_opnumsel,
    input  wire[`RegBus] rdata1_opnumsel,
    input  wire[`RegBus] rdata2_opnumsel ,
    output wire[`RegBus] opnum1_o_opnumsel,
    output wire[`RegBus] opnum2_o_opnumsel
);
//  sel     op1      op2
//   00     imm      rdata1
//   01     imm      rdata2
//   11     rdata1   rdata2

    assign opnum1_o_opnumsel = (opsrc_i_opnumsel[1] == 0) ? simm_i_opnumsel : rdata1_opnumsel;
    assign opnum2_o_opnumsel = (opsrc_i_opnumsel[0] == 1) ? simm_i_opnumsel : rdata1_opnumsel;

endmodule //opnumsel

