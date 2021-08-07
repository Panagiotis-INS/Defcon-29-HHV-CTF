.PHONY: all
all: challenge

VERILATOR=verilator
VERILATOR_ROOT ?= $(shell bash -c 'verilator -V|grep VERILATOR_ROOT | head -1 | sed -e "s/^.*=\s*//"')
VINC := $(VERILATOR_ROOT)/include

obj_dir/Vchallenge.cpp: challenge.v decoder.v
	$(VERILATOR) --trace -Wall -cc challenge.v decoder.v

obj_dir/Vchallenge__ALL.a: obj_dir/Vchallenge.cpp
	make --no-print-directory -C obj_dir -f Vchallenge.mk

challenge: challenge.cpp obj_dir/Vchallenge__ALL.a
	g++ -I$(VINC) -I obj_dir            \
		$(VINC)/verilated.cpp       \
		$(VINC)/verilated_vcd_c.cpp \
		challenge.cpp obj_dir/Vchallenge__ALL.a                \
		-o challenge --std=c++11
	./challenge
	gtkwave challengetrace.vcd

.PHONY: clean
clean:
	rm -rf obj_dir/ challenge challengetrace.vcd
