module ps2_keyboard(clk,clrn,ps2_clk,ps2_data,data,
                    ready,nextdata_n,overflow);
    input clk,clrn,ps2_clk,ps2_data;
    input nextdata_n;
    output [7:0] data;
    output reg ready;
    output reg overflow;   
    
    reg [9:0] buffer;        
    reg [7:0] fifo[7:0];     
    reg [2:0] w_ptr,r_ptr;   
    reg [3:0] count;  
    
    reg [2:0] ps2_clk_sync;

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (clrn == 0) begin 
            count <= 0; w_ptr <= 0; r_ptr <= 0; overflow <= 0; ready<= 0;
        end
        else begin
            if ( ready ) begin 
                if(nextdata_n == 1'b0) 
                begin
                    //$display("[rptr] %h", r_ptr);
                    r_ptr <= r_ptr + 3'b1;
                    if(w_ptr==(r_ptr+1'b1)) //empty
                        ready <= 1'b0;
                end
            end
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  
                    (ps2_data)       &&  
                    (^buffer[9:1])) begin      
                    fifo[w_ptr] <= buffer[8:1];  
                    w_ptr <= w_ptr+3'b1;
                    ready <= 1'b1;
                    overflow <= overflow | (r_ptr == (w_ptr + 3'b1));
                end
                count <= 0;     
              end else begin
                buffer[count] <= ps2_data;  
                count <= count + 3'b1;
              end
            end
        end
    end
    assign data = fifo[r_ptr]; 

endmodule

module top(
    input clk,
    input ps2_clk,
    input ps2_data,
    output reg [7:0] seg0,
    output reg [7:0] seg1,
    output reg [7:0] seg2,
    output reg [7:0] seg3,
    output reg [7:0] seg4,
    output reg [7:0] seg5
);
    reg [7:0] ascii_table [255:0];

    initial begin
        ascii_table[8'h1C] = 8'h41; // A
        ascii_table[8'h32] = 8'h42; // B
        ascii_table[8'h21] = 8'h43; // C
        ascii_table[8'h23] = 8'h44; // D
        ascii_table[8'h24] = 8'h45; // E
        ascii_table[8'h2B] = 8'h46; // F
        ascii_table[8'h34] = 8'h47; // G
        ascii_table[8'h33] = 8'h48; // H
        ascii_table[8'h43] = 8'h49; // I
        ascii_table[8'h3B] = 8'h4A; // J
        ascii_table[8'h42] = 8'h4B; // K
        ascii_table[8'h4B] = 8'h4C; // L
        ascii_table[8'h3A] = 8'h4D; // M
        ascii_table[8'h31] = 8'h4E; // N
        ascii_table[8'h44] = 8'h4F; // O
        ascii_table[8'h4D] = 8'h50; // P
        ascii_table[8'h15] = 8'h51; // Q
        ascii_table[8'h2D] = 8'h52; // R
        ascii_table[8'h1B] = 8'h53; // S
        ascii_table[8'h2C] = 8'h54; // T
        ascii_table[8'h3C] = 8'h55; // U
        ascii_table[8'h2A] = 8'h56; // V
        ascii_table[8'h1D] = 8'h57; // W
        ascii_table[8'h22] = 8'h58; // X
        ascii_table[8'h35] = 8'h59; // Y
        ascii_table[8'h1A] = 8'h5A; // Z
        ascii_table[8'h16] = 8'h31; // 1
        ascii_table[8'h1E] = 8'h32; // 2
        ascii_table[8'h26] = 8'h33; // 3
        ascii_table[8'h25] = 8'h34; // 4
        ascii_table[8'h2E] = 8'h35; // 5
        ascii_table[8'h36] = 8'h36; // 6
        ascii_table[8'h3D] = 8'h37; // 7
        ascii_table[8'h3E] = 8'h38; // 8
        ascii_table[8'h46] = 8'h39; // 9
    end

    wire ready;
    wire [7:0] kdata;

    reg [7:0] count;
    reg nextdata;
    reg [7:0] segdata;

    always @(posedge clk) begin 
        if (ready & nextdata) begin
            nextdata <= 1'b0;
            if (kdata != 8'hF0) segdata <= kdata; // 1cf01c
            else count <= count + 1;
            //$display("%h", kdata);
        end
         
        if (~nextdata) nextdata <= 1'b1;
    end

    
    ps2_keyboard u_ps2_keyboard(
        .clk        	(clk         ),
        .clrn       	(1'b1        ),
        .ps2_clk    	(ps2_clk     ),
        .ps2_data   	(ps2_data    ),
        .nextdata_n 	(nextdata    ),
        .data       	(kdata       ),
        .ready      	(ready       ),
        .overflow   	()
    );
    

    function [7:0] seg(input [3:0] hehe);
        case (hehe)
            4'h0: seg = 8'b00000011;  
            4'h1: seg = 8'b10011111;  
            4'h2: seg = 8'b00100101;  
            4'h3: seg = 8'b00001101;  
            4'h4: seg = 8'b10011001;  
            4'h5: seg = 8'b01001001; 
            4'h6: seg = 8'b01000001; 
            4'h7: seg = 8'b00011111;  
            4'h8: seg = 8'b00000001;  
            4'h9: seg = 8'b00001001;  
            4'hA: seg = 8'b00010001;  
            4'hB: seg = 8'b11000001;  
            4'hC: seg = 8'b01100011;  
            4'hD: seg = 8'b10000101; 
            4'hE: seg = 8'b01100001;  
            4'hF: seg = 8'b01110001;  
            default: seg = 8'b11111111;  
        endcase
    endfunction

    always @(posedge clk)begin
        if(ready)begin
            seg0 <= seg(segdata[3:0]);
            seg1 <= seg(segdata[7:4]);
            seg2 <= seg(ascii_table[segdata][3:0]);
            seg3 <= seg(ascii_table[segdata][7:4]);
        end

        seg4<=seg(count[3:0]);
        seg5<=seg(count[7:4]);
    end

endmodule
