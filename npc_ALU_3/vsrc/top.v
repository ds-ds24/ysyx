module top (
    input [3:0] a,
    input [3:0] b,
    input [2:0] choose,
    output reg [3:0] result,
    output reg overflow,
    output reg carry,
    output reg zero,
    output reg comp,
    output reg eq
);
always @(*) begin
    result=4'b0000;
    overflow=1'b0;
    carry=1'b0;
    zero=1'b0;
    comp=1'b0;
    eq=1'b0;
    case(choose)
        3'b000 :begin 
            {carry,result} = a+b;
            zero = ~(|result);
            overflow = (a[3]==b[3])&&(result[3] != a[3]);
        end
        3'b001 :begin 
            {carry,result} = a + (-b);
            zero = ~(|result);
            overflow = (a[3]==(~b[3]))&&(result[3] != a[3]);
        end
        3'b010 : begin 
            result = ~a;
            zero = ~(|result);
            overflow = (a[3]==b[3])&&(result[3] !=a[3]); 
            end
        3'b011 : begin 
            result = a&b; 
            zero = ~(|result);
            overflow = (a[3]==b[3])&&(result[3] !=a[3]); 
            end
        3'b100 : begin 
            result = a|b;
            zero = ~(|result);
            overflow = (a[3]==b[3])&&(result[3] !=a[3]); 
            end
        3'b101 : begin 
            result = a^b;
            zero = ~(|result);
            overflow = (a[3]==b[3])&&(result[3] !=a[3]);  
            end
        3'b110 : begin 
            comp = ($signed(a)<$signed(b))?1'b1:1'b0;
            zero = ~(|result);
            overflow = (a[3]==b[3])&&(result[3] !=a[3]); 
            end
        3'b111 : begin 
            eq = (a==b)? 1'b1:1'b0;
            zero = ~(|result);
            overflow = (a[3]==b[3])&&(result[3] !=a[3]); 
            end

    endcase 
end
endmodule