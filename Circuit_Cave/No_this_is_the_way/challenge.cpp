#include <stdio.h>
#include <stdlib.h>
#include "Vchallenge.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

void tick(int tickcount, Vchallenge *tb, VerilatedVcdC* tfp) {

	tb->eval();
	if (tfp) {
		tfp->dump(tickcount * 10 - 2);
	}

	tb->i_clk = 1;
	tb->eval();

	if (tfp) {
		tfp->dump(tickcount * 10);
	}

	tb->i_clk = 0;
	tb->eval();

	if (tfp) {
		tfp->dump(tickcount * 10 + 5);
		tfp->flush();
	}
}

int main(int argc, char **argv) {
	unsigned tickcount = 0;

	Verilated::commandArgs(argc, argv);

	Vchallenge *tb = new Vchallenge;

	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC;

	tb->trace(tfp, 00);
	tfp->open("challengetrace.vcd");

	for(int k=0; k<(1<<20); k++) {
		tick(++tickcount, tb, tfp);
	}
}
