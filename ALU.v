`timescale 1ns / 1ps

module ALU (in1, in2, op, out, carryout, overflow, rst, clk);
    input [7:0] in1;
    input [7:0] in2;
    input [3:0] op;
    input rst;
    input clk;
    output reg [7:0] out;
    output reg carryout;
    output reg overflow;

    always @(posedge clk or posedge rst)
    begin
        if(rst==1)
        begin 
            out=0;
            carryout=0;
            overflow=0;
        end
        
        else
        begin
            overflow=0;
            carryout=0;
            case(op)
                4'b0000: {carryout,out} = in1+in2;
                4'b0001: {carryout,out} = in1-in2; 
                4'b0010: begin
                            out = in1*in2;
                            overflow = (in1*in2>255);
                         end
                         
                4'b0011: begin
                            if(in2==0)
                                begin
                                    out = 8'b11111111;
                                    overflow =1;
                                end
                            else
                                out = in1/in2;
                         end

                4'b0100: out = in1&in2;
                4'b0101: out = in1|in2;
                4'b0110: out = in1^in2;
                4'b0111: out = ~in1;
                4'b1000: out = out<<1;
                4'b1001: out = out>>1;
                4'b1010: out = {in1[6:0], in1[7]};
                4'b1011: out = {in1[0], in1[7:1]};
                4'b1100: out = (in1 > in2) ? 1 : 0; 
                4'b1101: out = (in1 == in2) ? 1 : 0;
                default: out = out;
            endcase

            //overflow detection for addition and substraction only 
            if(op==4'b0000 || op==4'b0001)
            begin
                overflow = (in1[7]==in2[7]) && (out[7]!=in1[7]);
            end
        end
    end

endmodule