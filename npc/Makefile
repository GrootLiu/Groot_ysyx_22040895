.PHONY: all sim
all:
	@echo "Write this Makefile by your self."

sim: ./csrc/main.cpp ./vsrc/top.v
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Making..."
	verilator --Mdir sim --Wno-fatal --trace --cc --exe --build ./csrc/main.cpp ./vsrc/top.v

include ../Makefile
