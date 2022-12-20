FG_YELLOW = "\001\033[1;33m"
FG_MAGENTA = "\001\033[1;35m"
CLOSE = "\001\033[0m\002"

override ARGS += -l $(shell pwd)/log/npc-log.txt # -ldl

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

## Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
## Optimiza
VERILATOR_FLAGS += -O3 -x-assign 0
## Don't warn the no-fatal warning
VERILATOR_FLAGS += --Wno-fatal
## make waveforms
VERILATOR_FLAGS += --trace
## make dir
VERILATOR_FLAGS += --Mdir  sim
##include
VERILATOR_FLAGS += -y $(NPC_HOME)/include/
VERILATOR_FLAGS += -y $(NPC_HOME)/vsrc/

# Input_file for Verilator
VERILATOR_INPUT = ./vsrc/ysyx_22040895_top.v ./npc-main.cpp -y .

default: run

## Make
run: 
	@echo
	@echo $(FG_YELLOW) "-------------------------------- VERILATE --------------------------------" $(CLOSE)
	@echo
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
### To compile, we can either
# 1. Pass --build to Verilator by editing VERILATOR_FLAGS above.
# 2. Or, run the make rules Verilator does:
#		$(MAKE) -j -C obj_dir -f Vysyx_22040895_top.mk
# 3. Or, call a submakefile where we can override the rules ourselves:
	@echo
	@echo $(FG_YELLOW) "-------------------------------- BUILDING --------------------------------" $(CLOSE)
	@echo
	$(MAKE)  -j -C sim -f ../Makefile_obj

	@echo
	@echo $(FG_YELLOW) "-------------------------------- GENERATE SO --------------------------------" $(CLOSE)
	$(MAKE) -j -C $(NEMU_HOME)

	@echo
	@echo $(FG_YELLOW) "-------------------------------- RUN -------------------------------------" $(CLOSE)
	@echo
	sim/Vysyx_22040895_top $(ARGS) $(IMG) 

	@echo
	@echo $(FG_YELLOW) "-------------------------------- DONE ------------------------------------" $(CLOSE)
	@echo
	@echo $(FG_MAGENTA) "To see waveforms, please "make wave"" $(CLOSE)
	@echo
wave: 
	gtkwave ./wave/wave.vcd

