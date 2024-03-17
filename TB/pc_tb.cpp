#include <iostream>
#include <fstream>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VProgramCounter.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VProgramCounter* top = new VProgramCounter;
    top->start = 8;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("simulation_output.vcd");
    int time = 0;
for (int i = 0; i < 100; ++i) {
    top->clk = 0;
    top->eval();
    tfp->dump(time);
    time += 10;

    top->clk = 1;
    top->eval();
    tfp->dump(time);
    time += 10;
}
    tfp->close();
    delete top;
    delete tfp;
    return 0;
}
