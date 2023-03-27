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
                          output wire[`ysyx_22040895_InstAddrBus] pc_o_idu,
						  output wire[1:0] csrraddr_o_idu,
						  output wire[1:0] csrwaddr_o_idu
						  );
    
	wire ecall;
	wire mret;

    wire branch;
    
    wire beq;
    wire bge;
    wire bgeu;
    wire blt;
    wire bltu;
    wire bne;
    wire jal;
    
    wire store;
    
	// 解析ecall和mret指令
	assign ecall = (inst_i_idu == 32'b000000000000_00000_000_00000_1110011);
	assign mret  = (inst_i_idu == 32'b0011000_00010_00000_000_00000_1110011);

    assign beq  = (opcode_o_idu == 7'b1100011) & (func3_o_idu == 3'b000);
    assign bge  = (opcode_o_idu == 7'b1100011) & (func3_o_idu == 3'b101);
    assign bgeu = (opcode_o_idu == 7'b1100011) & (func3_o_idu == 3'b111);
    assign blt  = (opcode_o_idu == 7'b1100011) & (func3_o_idu == 3'b100);
    assign bltu = (opcode_o_idu == 7'b1100011) & (func3_o_idu == 3'b110);
    assign bne  = (opcode_o_idu == 7'b1100011) & (func3_o_idu == 3'b001);
    assign jal  = (opcode_o_idu == 7'b1101111);
    
    assign store = (opcode_o_idu == 7'b0100011);
    
    assign branch = beq | bge | bgeu | blt | bltu | bne;
    
    wire[11:0] branch_offset = {inst_i_idu[31], inst_i_idu[7], inst_i_idu[30:25], inst_i_idu[11:8]};
    wire[19:0] jal_offset    = {inst_i_idu[31], inst_i_idu[19:12], inst_i_idu[20], inst_i_idu[30:21]};
    wire[11:0] store_offset  = {inst_i_idu[31:25], inst_i_idu[11:7]};
    
    assign pc_o_idu     = (rst == `ysyx_22040895_RstEnable) ? 64'b0 : pc_i_idu;
	// 7'b1111111 和 7'b1111110 是自己定义的，用来标记这两条指令
    assign opcode_o_idu = (rst == `ysyx_22040895_RstEnable) ? 7'b0 : (ecall == 1'b1) ? 7'b1111111 : (mret == 1'b1) ? 7'b1111110 : inst_i_idu[6:0];
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

	// 下面的代码有的问题
	// csr寄存器地址
	// reg[1:0] csraddr;
	// // 通过inst_i_idu的最后12位判断进来的指令的csr寄存器的地址
	// always @(*) begin
	// 	case (inst_i_idu[31:20])
	// 		'h341 : csraddr = 2'd0;
	// 		'h342 : csraddr = 2'd1;
	// 		'h305 : csraddr = 2'd2;
	// 		default: begin				
	// 		end
	// 	endcase
	// end
	// // 如果该指令位
	// assign csrraddr_o_idu = (rst == `ysyx_22040895_RstEnable) ? 2'b0 : csraddr;
	// assign csrwaddr_o_idu = (rst == `ysyx_22040895_RstEnable) ? 2'b0 : csraddr;
    
endmodule //idu
    
    
    
