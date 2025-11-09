module ysyx_25080199_PC(
    input clk,
    input [31:0] next_pc,
    input rst,
    output reg [31:0] pc
);
always @(posedge clk)begin
    if(rst)begin
        pc <= 32'h80000000;
    end
    else begin
        pc <= next_pc;
    end
end

endmodule


