#include <iostream>
#include <fstream>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VRegister.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    VRegister* top = new VRegister;
    top->inst = std::stoul("00108133", nullptr, 16);
    top->reg_Write = 1;
    top->write_date = 90;
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
