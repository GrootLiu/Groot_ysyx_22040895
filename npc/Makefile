.PHONY: all sim verilator
all:
	@echo "Write this Makefile by your self."

verilator: ./csrc/main.cpp ./vsrc/top.v
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "- compile the main.cpp..."
	verilator --Mdir sim -y ./vsrc  --Wno-fatal --trace --cc --exe --build ./csrc/main.cpp ./vsrc/top.v

sim: verilator
	@echo "- generating the vcd..."
	./sim/Vtop

wave: sim
	@echo "- open the vcd with GTKWave..."
	gtkwave wave.vcd
include ../Makefile
