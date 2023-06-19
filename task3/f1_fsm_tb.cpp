#include "Vf1_fsm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
    
    int main(int argc, char **argv, char **env){
        int i;
        int clk;
        int j=0;

        Verilated::commandArgs(argc,argv);
        // init top verilog instance
        Vf1_fsm* top = new Vf1_fsm;
        // init trace dump
        Verilated::traceEverOn(true);
        VerilatedVcdC* tfp = new VerilatedVcdC;
        top->trace(tfp,99);
        tfp->open("fs_fsm.vcd");


        // init vbuddy
        if(vbdOpen()!=1) return(-1);
        vbdHeader("Lab 3:f1_fsm");


        //initialize simulation inputs
        top->clk = 1;
        top->rst = 1;
        top->en = 1;
        //top->v = 4095;

        // run simulation for many clock cycles
        for(i=0;i<500;i++){
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
        top->rst = (i<2) ;
        top->en = vbdFlag();
        //top->v = vbdValue();
        vbdSetMode(1);
        printf("%d\r\n",top->en);

        if(Verilated::gotFinish())   exit(0);
        }

        vbdClose();
        tfp->close();
        exit(0);

    }