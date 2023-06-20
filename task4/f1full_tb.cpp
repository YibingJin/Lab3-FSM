#include "Vf1full.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
    
    int main(int argc, char **argv, char **env){
        int i;
        int clk;
        int j=0;

        Verilated::commandArgs(argc,argv);
        // init top verilog instance
        Vf1full* top = new Vf1full;
        // init trace dump
        Verilated::traceEverOn(true);
        VerilatedVcdC* tfp = new VerilatedVcdC;
        top->trace(tfp,99);
        tfp->open("fs_fsm.vcd");


        // init vbuddy
        if(vbdOpen()!=1) return(-1);
        
        vbdHeader("L3T4:Delay");
        vbdSetMode(1);        // Flag mode set to one-shot

        // initialize simulation inputs
        top->clk = 1;
        top->rst = 0;
        top->trigger = 0;
        top->N = vbdValue();

        // run simulation for many clock cycles
        for(i=0;i<600;i++){
            //dump variables into VCD file and toggle clock
            for (clk=0;clk<2;clk++){
            tfp->dump(2*i+clk); //unit is in ps
            top->clk = !top->clk;
            top->eval();
            }
        
        
        // ------send count value to buddy
        vbdHex(4,(int(top->data_out)>>12)&0xF);
        vbdHex(3,(int(top->data_out)>>8)&0xF);
        vbdHex(2,(int(top->data_out)>>4)&0xF);
        vbdHex(1,(int(top->data_out))&0xF);
        vbdBar(top->data_out & 0xFF);
        vbdCycle(i+1);
        // -----------end of Vbuddy output section

       // printf("%d\r\n",top->data_out);

        //change input stimuli
        top->rst = (i<50) ;
        top->trigger = vbdFlag();
        //top->v = vbdValue();
        
        //printf("%d, %d \r\n",top->rst,top->trigger);
        printf("delay:%d \r\n",top->time_out);

        vbdInitWatch();
        vbdElapsed();

        if(Verilated::gotFinish())   exit(0);
        }

        vbdClose();
        tfp->close();
        exit(0);

    }