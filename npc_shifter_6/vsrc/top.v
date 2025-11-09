/*module shifter_ba(
    input [7:0] din,
    input [2:0] shamt,
    input LR,
    input AL,
    output [7:0] dout
);
always @(*)begin
    if(LR)begin
        dout = shamt[2]?{din[3:0],4'b0}:din;
        dout = shamt[1]?{dout[5:0],2'b0}:dout;
        dout = shamt[0]?{dout[6:0],1'b0}:dout;
    end
    else begin
        reg al_seg;
        al_seg = AL?din[7]:1'b0;
        if(Al)begin
            dout = shamt[2]?{{4{al_seg}},in[7:4]}:din;
            dout = shamt[1]?{{2{al_seg}},in[7:2]}:dout;
            dout = shamt[0]?{{al_seg},in[7:1]}:dout;
        end
    end

end
endmodule */

module top(
    input clk,
    input reset,
    input en,
    output reg[7:0]dout,
    output reg[7:0] seg1,
    output reg[7:0] seg2
);
wire new_bit;
assign new_bit = dout[4]^dout[3]^dout[2]^dout[0];
always @(posedge clk)begin
    if(reset) begin
        dout <= 8'b00000001;
    end
    else begin
        if(en)begin
            dout <= {new_bit,dout[7:1]};
        end
        if(dout==8'b00000000)begin
            dout<=8'b00000001;
        end
    end
end
always @(*)begin
         case (dout[3:0])
            4'b0000 : seg1 = 8'b00000011;
            4'b0001 : seg1 = 8'b10011111;
            4'b0010 : seg1 = 8'b00100101;
            4'b0011 : seg1 = 8'b00001101;
            4'b0100 : seg1 = 8'b10011001;
            4'b0101 : seg1 = 8'b01001001;
            4'b0110 : seg1 = 8'b01000001;
            4'b0111 : seg1 = 8'b00011111;
            4'b1000 : seg1 = 8'b00000001;
            4'b1001 : seg1 = 8'b00001001;
            4'b1010 : seg1 = 8'b00010001;
            4'b1011 : seg1 = 8'b11000001;
            4'b1100 : seg1 = 8'b01100011;
            4'b1101 : seg1 = 8'b10000101;
            4'b1110 : seg1 = 8'b01100001;
            4'b1111 : seg1 = 8'b01110001;
            default : seg1 = 8'b11111111;
        endcase
        case (dout[7:4])
            4'b0000 : seg2 = 8'b00000011;
            4'b0001 : seg2 = 8'b10011111;
            4'b0010 : seg2 = 8'b00100101;
            4'b0011 : seg2 = 8'b00001101;
            4'b0100 : seg2 = 8'b10011001;
            4'b0101 : seg2 = 8'b01001001;
            4'b0110 : seg2 = 8'b01000001;
            4'b0111 : seg2 = 8'b00011111;
            4'b1000 : seg2 = 8'b00000001;
            4'b1001 : seg2 = 8'b00001001;
            4'b1010 : seg2 = 8'b00010001;
            4'b1011 : seg2 = 8'b11000001;
            4'b1100 : seg2 = 8'b01100011;
            4'b1101 : seg2 = 8'b10000101;
            4'b1110 : seg2 = 8'b01100001;
            4'b1111 : seg2 = 8'b01110001;
            default : seg2 = 8'b11111111;
        endcase
end

endmodule


