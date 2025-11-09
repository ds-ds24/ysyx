#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include <memory>
#include "verilated_vcd_c.h"

int main(int argc,char **argv){
    Verilated::mkdir("logs");
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->debug(0);
    contextp->randReset(2);
    contextp->commandArgs(argc,argv);
    const std::unique_ptr<Vtop> top{new Vtop{contextp.get(),"TOP"}};
    const std::unique_ptr<VerilatedVcdC> tfp{new VerilatedVcdC};
    contextp->traceEverOn(true);
    top->trace(tfp.get(),99);
    tfp->open("wave.vcd");
    while(!contextp->gotFinish()&&contextp->time() <100){
        int a=rand()&1;
        int b=rand()&1;
        top->a = a;
        top->b = b;
        top->eval();
        printf("a = %d, b = %d, f = %d\n",a,b, top->f);
        tfp->dump(contextp->time());
        contextp->timeInc(1);
        assert(top->f == (a^b));
    }
    top->final();
    tfp->close();
    return 0;
}