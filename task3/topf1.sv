module topf1 #(
  parameter WIDTH = 16
)
(
    input logic clk,
    input logic rst,
    input logic en,
    input  logic [WIDTH-1:0] N,
    output logic [7:0] data_out
);

logic  		       tick;

clktick clock(
  // interface signals
  .clk(clk),      // clock 
  .rst(rst),      // reset
  .en(en),       // enable signal
  .N(N),     	 // clock divided by N+1
  .tick(tick)      // tick output
);

f1_fsm f1_light(
    .clk(clk),
    .rst(rst),
    .en(tick),
    .data_out(data_out)
);

endmodule
