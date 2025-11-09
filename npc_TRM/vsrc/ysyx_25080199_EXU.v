module ysyx_25080199_EXU(
    input           clk,
    input [4:0]     op1,
    input [31:0]    pc,
    input [11:0]     imm,
    input [2:0]     alu_op,
    //input [4:0]     rd_addr,
    output reg [31:0]    next_pc,
    output reg [31:0]   mem_wdata
);
reg [31:0]imm_im = {{20{imm[11]}},imm};
reg [31:0]op1_op = {{27{op1[4]}},op1};

always @(posedge clk)begin
    next_pc <= pc + 32'h4;
end

always @(*)begin
    case (alu_op) 
        3'b001: begin
            mem_wdata = op1_op + imm_im;
        end
    default:begin
        mem_wdata = 0;
    end
    endcase
end
endmodule
