module top(
    input clk,
    input rst,
    input  reg [31:0]  pc,
    input      [31:0]  instr,

    output reg [31:0]  mem_addr,
    output reg [31:0]  mem_rdata,
    output reg [31:0]  next_pc,
    output reg [31:0]  mem_wdata,
    output reg         mem_we,
    output reg [2:0]   alu_op,
    output reg [4:0]   rd_addr,
    output reg [2:0]   spt_alu,
    output reg [4:0]   op1,
    output reg [4:0]   op2,
    output reg [11:0]  imm
);


// always @(posedge clk or rst) begin
//     if(rst)begin
//         mem_addr <= 32'h80000000;
//     end
// end

ysyx_25080199_PC PC_module(
    .clk        (clk),
    .pc         (mem_addr),
    .rst        (rst),
    .next_pc    (next_pc)
);

ysyx_25080199_IDU IDU_module(
    .instr      (mem_rdata),
    .alu_op     (alu_op),
    .rd_addr    (rd_addr),
    .spt_alu    (spt_alu),
    .op1        (op1),
    .op2        (op2),
    .imm        (imm),
    .mem_we     (mem_we)
);

ysyx_25080199_EXU EXU_module(
    .clk        (clk),
    .pc         (mem_addr),
    .op1        (op1),
    .imm        (imm),
    .alu_op     (alu_op),
    .next_pc    (next_pc),
    .mem_wdata   (mem_wdata)
);



endmodule

