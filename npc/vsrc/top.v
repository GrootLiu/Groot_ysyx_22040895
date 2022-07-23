`include "/home/groot/ysyx-workbench/npc/include/define.v"
`include "/home/groot/ysyx-workbench/npc/vsrc/idu.v"
`include "/home/groot/ysyx-workbench/npc/vsrc/ifu.v"
`include "/home/groot/ysyx-workbench/npc/vsrc/sext.v"
`include "/home/groot/ysyx-workbench/npc/vsrc/regfile.v"
`include "/home/groot/ysyx-workbench/npc/vsrc/opnumsel.v"
`include "/home/groot/ysyx-workbench/npc/vsrc/cu.v"

module top(input wire clk,
           input wire rst,
           input wire[`InstBus] inst_i,
           output wire[`InstAddrBus] instaddr_o);


    // 用于连接if模块和inst_rom的线
    wire ce_ifu_instrom;

    // 用于连接cu和if中pc的线
    wire pcsel_cu_if;

    // 用于连接if模块与id模块的线
    wire[`InstBus] inst_ifu_idu;
    wire[`InstAddrBus] pc_ifu_idu;

    // 用于连接id模块和cu模块的线
    wire[`OpCodeLength] opcode_id_cu;
    wire[`func3Length] func3_id_cu;
    wire[`func7Length] func7_id_cu;

    // 用于连接id模块和sext模块的线
    wire[`imm1Length] imm1_id_sext;
    wire[`imm2Length] imm2_id_sext;

    // 用于连接cu模块和sext模块的线
    wire immsel_cu_sext;
    // 下句以后删掉

    // 用于连接sext模块和opnum_mux模块的线
    wire[`RegBus] simm_sext_opnummux;

    // 用于连接id模块和regfile模块的线
    wire[`RegAddrBus] rs1addr_id_reg;
    wire[`RegAddrBus] rs2addr_id_reg;
    wire[`RegAddrBus] rdaddr_id_reg;

    // 用于连接cu模块和regfile模块的线
    wire re1_cu_reg;
    wire re2_cu_reg;
    wire we_cu_reg;

    // 用于连接cu模块和opnumsel模块得线
    wire[1:0] opsrc_cu_opnumsel;

    // 用于连接regfile和opnumsel模块的线
    wire[`RegBus] rdata1_reg_mux;
    wire[`RegBus] rdata2_reg_mux;

    // 用于连接ex模块和regfile模块的线
    wire[`RegBus] wdata_ex_reg;
    // assign wdata_ex_reg = 64'hffffffff;
    // 用于连接id模块和ex模块的线
    wire[`InstBus] pc_id_ex;

    // 用于连接opnumsel模块和ex模块的线
    wire[`RegBus] opnum1_opnumsel_ex;
    wire[`RegBus] opnum2_opnumsel_ex;

    ifu my_ifu(
    .clk                (clk),
    .rst                (rst),
    .inst_i_ifu         (inst_i),
    .pcsel_i_ifu        (pcsel_cu_if),
    .dnpc_i_ifu         (32'b0),
    .inst_o_ifu         (inst_ifu_idu),
    .instaddr_o_ifu     (instaddr_o),
    .pc_o_ifu           (pc_ifu_idu),
    .ce_o_ifu           (ce_ifu_instrom)
    );

    sext my_sext(
    .rst           		(rst),
    .immsel_i_sext 		(immsel_cu_sext),
    .imm1_i_sext   		(imm1_id_sext),
    .imm2_i_sext   		(imm2_id_sext),
    .simm_o_sext   		(simm_sext_opnummux)
    );

    idu my_idu(
    .rst           		(rst),
    .inst_i_idu    		(inst_ifu_idu),
    .pc_i_idu      		(pc_ifu_idu),
    .opcode_o_idu  		(opcode_id_cu),
    .func3_o_idu   		(func3_id_cu),
    .func7_o_idu   		(func7_id_cu),
    .imm1_o_idu    		(imm1_id_sext),
    .imm2_o_idu    		(imm2_id_sext),
    .rs1addr_o_idu 		(rs1addr_id_reg),
    .rs2addr_o_idu 		(rs2addr_id_reg),
    .rdaddr_o_idu  		(rdaddr_id_reg),
    .pc_o_idu      		(pc_id_ex)
    );

    regfile my_regfile(
    .clk          		(clk),
    .rst          		(rst),
    .re1_i_reg    		(re1_cu_reg),
    .re2_i_reg    		(re2_cu_reg),
    .we_i_reg     		(we_cu_reg),
    .raddr1_i_reg 		(rs1addr_id_reg),
    .raddr2_i_reg 		(rs2addr_id_reg),
    .waddr_i_reg  		(rdaddr_id_reg),
    .rdata1_o_reg 		(rdata1_reg_mux),
    .rdata2_o_reg 		(rdata2_reg_mux),
    .wdata_i_reg  		(wdata_ex_reg)
    );

    opnumsel my_opnumsel(
    .opsrc_i_opnumsel  		(opsrc_cu_opnumsel),
    .simm_i_opnumsel   		(simm_sext_opnummux),
    .rdata1_opnumsel   		(rdata1_reg_mux),
    .rdata2_opnumsel   		(rdata2_reg_mux),
    .opnum1_o_opnumsel 		(opnum1_opnumsel_ex),
    .opnum2_o_opnumsel 		(opnum2_opnumsel_ex)
    );

    cu my_cu(
    .rst         		(rst),
    .opcode_i_cu 		(opcode_id_cu),
    .func3_i_cu  		(func3_id_cu),
    .func7_i_cu  		(func7_id_cu),
    .jb_i_cu     		(`NotBranch),
    .aluop_o_cu  		(		),
    .opsel_o_cu  		(		),
    .immsel_o_cu 		(immsel_cu_sext),
    .re1_o_cu    		(re1_cu_reg),
    .re2_o_cu    		(re2_cu_reg),
    .we_o_cu     		(we_cu_reg),
    .pcsel_o_cu  		(pcsel_cu_if)
    );

endmodule