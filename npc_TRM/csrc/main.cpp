#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include <memory>
#include "verilated_vcd_c.h"

#define MEM_SIZE 	 64
#define RESET_TIME 	 3


class Memory{
private:
	uint32_t mem[MEM_SIZE];

public:
	Memory(){
		for(int i=0;i<MEM_SIZE;i++){
			mem[i] = 0;
		}
	}
	uint32_t read(uint32_t addr){
		if(addr>=MEM_SIZE){
			printf("Warning: Memory read out of bounds at address 0x%08x\n", addr);
			return 0;
		}
		return mem[addr];
	}
	void write(uint32_t addr,uint32_t data){
		if(addr>=MEM_SIZE){
			printf("Warning: Memory write out of bounds at address 0x%08x\n",addr);
			return;
		}
		mem[addr] = data;
	}
	void load(const uint32_t*instr,int count,uint32_t start_addr=0){
		for(int i=0;i<count;i++){
			if(start_addr+i<MEM_SIZE){
				mem[start_addr+i] = instr[i];
			}
		}
	}
};


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

    Memory mem;
	uint32_t instructions[] = {
		0x00500093,  // addi x1, x0, 5
        0x00308113,  // addi x2, x1, 3
        0xffe10193,  // addi x3, x2, -2
        0x00a18213	//	addi x4, x3, 10
	};
	mem.load(instructions,4);

    while(!contextp->gotFinish()&&contextp->time() <100){
        top->clk ^= 1;
		top->rst = (contextp->time() < RESET_TIME) ? 1:0;
		if(top->clk == 1){
			if(!top->rst){
				top->mem_rdata = mem.read((top->mem_addr-0x80000000)/4);
			}
			if(top->mem_we){
				mem.write((top->addr-0x80000000)/4, top->mem_data);
			}
		}
		else{
			top->mem_data = 0;
			top->w_data = 0;
			top->w_en = 0;
		}
		top->eval();
		tfp->dump(contextp->time());
		contextp->timeInc(1);
    }
    top->final();
    tfp->close();
    return 0;
}

