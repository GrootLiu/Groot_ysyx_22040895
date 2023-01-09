ifdef CONFIG_ITRACE
CXXSRC = src/utils/disasm.cc
CXXFLAGS += $(shell llvm-config-13 --cxxflags) -fPIE
LIBS += $(shell llvm-config-13 --libs)
endif
