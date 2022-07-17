//*************************     全局的宏定义     **************************
`define RstEnable       1'b1                    //复位信号有效
`define RstDisable      1'b0                    //复位信号无效
`define ZeroWord        64'h0000000000000000    //32位数值0
`define WriteEnable     1'b1                    //使能写
`define WriteDisable    1'b0                    //禁止写
`define ReadEnable      1'b1                    //使能读
`define ReadDisable     1'b0                    //禁止读
// `define AluOpBus        7:0                     //译码阶段的输出aluop_o的宽度
// `define AluSelBus       2:0                     //译码阶段的输出alusel_o的宽度
`define InstValid       1'b0                    //指令有效
`define InstInvalid     1'b1                    //指令无效
`define True_v          1'b1                    //逻辑真
`define False_v         1'b0                    //逻辑假
`define ChipEnable      1'b1                    //芯片使能
`define ChipDisable     1'b0                    //芯片禁止
`define NegNum          1'b1
`define PosNum          1'b0
`define OverFlow        1'b1
`define Stop            1'b1                    //流水线暂停
`define NoStop          1'b0                    //流水线不暂停
`define Branch          1'b1                    //转移
`define NotBranch       1'b0                    //不转移

// decode
`define OpCodeLength    6:0             // opcode长度=7
`define func3Length      2:0             // fun3长度=3
`define func7Length      6:0             // fun7长度=7
`define imm1Length            11:0
`define imm2Length            19:0

//*************************     与指令存储器ROM有关的宏定义     **************************
`define InstAddrBus     31:0            //ROM的地址总线宽度
`define InstBus         31:0            //ROM的数据总线宽度
`define InstMemNum      131071          //ROM的实际大小为128KB
`define InstMemNumLog2  17              //ROM实际使用的地址线宽度

//*************************     与通用寄存器Reg file有关的宏定义     **************************
`define RegAddrBus       4:0            //Regfile模块的地址线宽度
`define RegBus          53:0            //Regfile模块的数据线宽度
`define RegWidth        64              //通用寄存器的宽度
`define DoubleRegWidth  128             //两倍的通用寄存器的数据线宽度
`define DoubleRegBus    127:0           //两倍的通用寄存器的数据线宽度
`define RegNum          32              //通用寄存器的数量
`define RegNumLog2      5               //寻址通用寄存器使用的地址位数