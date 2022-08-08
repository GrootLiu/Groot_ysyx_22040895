CXXFLAGS += -lreadline

verilator: ./npc-main.cpp ../vsrc/ysyx_22040895_top.v
	@echo "- compile the main.cpp..."
	export CXXFLAGS
	verilator --Mdir  sim -y ./vsrc  --Wno-fatal --trace --cc --exe --build ./npc-main.cpp ../vsrc/ysyx_22040895_top.v
	

