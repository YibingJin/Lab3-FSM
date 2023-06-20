module f1full#(
  parameter WIDTH = 16
)
(
    input logic clk,
    input logic rst,
    input logic trigger,
    input  logic [WIDTH-1:0] N,
    output logic [7:0] data_out,
    output logic time_out
);

logic  		       tick;
logic              cmd_seq;
logic              cmd_delay;
//logic              time_out;
logic              en; 


clktick clock(
  // interface signals
  .clk(clk),      // clock 
  .rst(rst),      // reset
  .en(cmd_seq),       // enable signal
  .N(N),     	 // clock divided by N+1
  .tick(tick)      // tick output
);

assign en = cmd_seq ? tick : time_out;

delay delatedtime(
    .clk(clk),        // clock signal
    .rst(rst),        // reset signal
    .trigger(cmd_delay),    // trigger input signal
    .n(10'b0000000001),          // no of clock cycle delay
    .time_out(time_out)    // output pulse signal
);

f1_fsm f1_light(
    .clk(clk),
    .rst(rst),
    .en(en),
    .trigger(trigger),
    .data_out(data_out),
    .cmd_seq(cmd_seq),
    .cmd_delay(cmd_delay)
);

endmodule
