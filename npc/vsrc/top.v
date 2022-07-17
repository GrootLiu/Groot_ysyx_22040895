`include "../include/include.v"

module top(input wire clk,
           input wire rst,
           input wire[`InstBus] inst_i,
           output reg[`InstAddrBus] instaddr_o);

    wire jmup_branch;
    wire[`InstBus] dnpc;
    assign jmup_branch = `NotBranch;
    assign dnpc      = 32'b0;
    
    // 用于连接if模块和inst_rom的线
    wire ce_ifu_instrom;
    
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

    // 用于连接id模块和regfile模块的线
    wire[`RegAddrBus] rs1addr_id_reg;
    wire[`RegAddrBus] rs2addr_id_reg;
    wire[`RegAddrBus] rdaddr_id_reg;

    // 用于连接id模块和ex模块的线
    wire[`InstBus] pc_id_ex;    
    
    ifu my_ifu(
    .clk(clk),
    .rst(rst),
    .inst_i_ifu(inst_i),
    .jb_i_ifu(jmup_branch),
    .dnpc_i_ifu(dnpc),
    .inst_o_ifu(inst_ifu_idu),
    .instaddr_o_ifu(instaddr_o),
    .pc_o_ifu(pc_ifu_idu),
    .ce_o_ifu(ce_ifu_instrom)
    );
    
    idu my_idu(
    //ports
    .rst           		(rst           		),
    .inst_i_idu    		(inst_ifu_idu  		),
    .pc_i_idu      		(pc_ifu_idu    		),
    .opcode_o_idu  		(opcode_id_cu  		),
    .func3_o_idu   		(func3_id_cu   		),
    .func7_o_idu   		(func7_id_cu   		),
    .imm1_o_idu    		(imm1_id_sext    	),
    .imm2_o_idu    		(imm2_id_sext    	),
    .rs1addr_o_idu 		(rs1addr_id_reg 	),
    .rs2addr_o_idu 		(rs2addr_id_reg 	),
    .rdaddr_o_idu  		(rdaddr_id_reg  	),
    .pc_o_idu      		(pc_id_ex      		)
    );
    
endmodule
