module ysyx_25080199_reg(
    input           clk,
    input           rst,
    input           reg_we,
    input reg [4:0] reg_addr,
    input reg [31:0] reg_data,
    input reg [4:0] rs1_addr,
    input reg [4:0] rs2_addr,
    output [31:0] rs1_data,
    output [31:0] rs2_data
);

reg [31:0]regs[31:0];

assign rs1_data = (rs1_addr == 5'd0) ? 32'd0 :regs[rs1_addr];
assign rs2_data = (rs2_addr == 5'd0) ? 32'd0 :regs[rs2_addr];

always @(posedge clk)begin
    if(rst)begin
        integer i;
        for(i=0;i<32;i=i+1)begin
            regs[i] <= 32'd0;
        end
    end
    else if(reg_we && reg_addr!=5'd0) begin
        regs[reg_addr] <= reg_data;
    end
end

endmodule
