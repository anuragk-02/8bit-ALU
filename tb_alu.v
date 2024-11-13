`timescale 1ns / 1ps

module tb;

    reg [7:0] in1;
    reg [7:0] in2;
    reg [3:0] op;
    reg rst;
    reg clk;
    wire [7:0] out;
    wire carryout;
    wire overflow;
    
 

    ALU dut (.in1(in1),.in2(in2),.op(op),.out(out),.carryout(carryout),.overflow(overflow),.rst(rst),.clk(clk));
    
    initial begin
        rst = 1;   
        in1 = 0;
        in2 = 0;
        op = 0;
        $dumpfile("waveform.vcd");
        $dumpvars(0, tb);   

        #5 rst = 0; 
        in1 = 25; in2 = 18; 
        #10 op = 4'b0000; 
        #10 op = 4'b0001;  
        #10 op = 4'b0010;  
        #10 op = 4'b0011;  
        #10 op = 4'b0100;  
        #10 op = 4'b0101;  
        #10 op = 4'b0110;  
        #10 op = 4'b0111;  
        #10 op = 4'b1000;  
        #10 op = 4'b1001;  
        #10 op = 4'b1010;  
        #10 op = 4'b1011;  
        #10 op = 4'b1100;  
        #10 op = 4'b1101;  
        
        // End simulation
        #10 $finish;
    end
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

endmodule
