#include "Vtop.h"
#include "verilated.h"
#include <nvboard.h>

int main(int argc,char **argv){
  static TOP_NAME dut;
  void nvboard_bind_all_pins(TOP_NAME *top);
  nvboard_bind_all_pins(&dut);
  nvboard_init();
  while(1){
    nvboard_update();
    dut.eval();
  }
  nvboard_quit();
  return 0;
}
