`include "/home/groot/ysyx-workbench/npc/include/define.v"

module opnumsel (
    input  wire opsrc_i_opnumsel,
    input  wire[`RegBus] simm_i_opnumsel,
    input  wire[`RegBus] rdata1_opnumsel,
    input  wire[`RegBus] rdata2_opnumsel ,
    output wire[`RegBus] opnum1_o_opnumsel,
    output wire[`RegBus] opnum2_o_opnumsel
);


    assign opnum1_o_opnumsel = rdata1_opnumsel;
    assign opnum2_o_opnumsel = (opsrc_i_opnumsel == 1) ? rdata2_opnumsel : simm_i_opnumsel;

endmodule //opnumsel

