#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vtop* top;

void sim_init(){
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	top = new Vtop;
	contextp->traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("wave.vcd");
}

void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}

int main() {
  sim_init();
  while(contextp->time()<100){
        int a=rand()&1;
        int b=rand()&1;
        top->a=a;
        top->b=b;
        step_and_dump_wave();
        assert(top->f == (a ^ b));
  }
  tfp->close();

  return 0;
}
