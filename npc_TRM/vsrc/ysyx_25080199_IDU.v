module ysyx_25080199_IDU(
    input   [31:0]  instr,
    output  reg [2:0]   alu_op,
    output  reg [4:0]   rd_addr,
    output  reg [2:0]   spt_alu,
    output  reg [4:0]   rs1_addr,
    output  reg [4:0]   rs2_addr,
    output  reg [11:0]  imm_I,
    output  reg [6:0]   imm_R,
    output  reg         mem_we,
    output  reg         reg_we,
    output  reg         use_imm
);
reg [6:0]opcode   = instr[6:0];
reg [4:0]rd       = instr[11:7];
reg [2:0]funct    = instr[14:12];
reg [4:0]rs1      = instr[19:15];
reg [4:0]rs2      = instr[24:20];
reg [11:0]imm_I_  = instr[31:20];
reg [6:0]imm_R_   = instr[31:25];
//reg [31:0]imm_im = {{20{immdit[11]}},immdit};
always @(*)begin
    alu_op  = 0;
    rd_addr = 0;
    spt_alu = 0;
    rs1_addr= 0;
    rs2_addr= 0;
    imm_I   = 0;
    imm_R   = 0;
    reg_we  = 0;
    mem_we  = 0;
    use_imm = 0;
    case (opcode)
        7'b0010011: begin
            alu_op  = 3'b001;
            rd_addr = rd;
            spt_alu = funct;
            rs1_addr= rs1;
            imm_I   = imm_I_;
            reg_we  = 1'b0;
        end 
        7'b0110011: begin
            alu_op      = 3'b001;
            rd_addr     = rd;
            spt_alu     = funct;
            rs1_addr    = rs1;
            rs2_addr    = rs2;
            imm_R       = imm_R_;
        end
        default : begin
            alu_op = 3'b000;
        end

    endcase

end

endmodule
