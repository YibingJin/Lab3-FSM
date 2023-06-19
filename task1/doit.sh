#!/bin/sh

#clean up
rm -rf obj_dir
rm -f  lfsr.vcd

#run Verilator to translate verilog into c++, including c++ testbench
verilator -Wall --cc --trace lfsr.sv --exe lfsr_tb.cpp
# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vlfsr.mk Vlfsr
# run executable simulation file
obj_dir/Vlfsr
