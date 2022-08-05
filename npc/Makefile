include $(AM_HOME)/scripts/riscv64-npc.mk
.PHONY: all sim verilator
all:
	@echo "Write this Makefile by your self."

verilator: ./csrc/main.cpp ./vsrc/ysyx_22040895_top.v
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "- compile the main.cpp..."
	verilator --Mdir sim -y ./vsrc  --Wno-fatal --trace --cc --exe --build ./csrc/main.cpp ./vsrc/ysyx_22040895_top.v

sim: verilator
	@echo "- generating the vcd..."
	./sim/Vtop $(BIN) CPPFLAGS=-DVL_DEBUG

wave: sim
	@echo "- open the vcd with GTKWave..."
	gtkwave ./wave/wave.vcd
