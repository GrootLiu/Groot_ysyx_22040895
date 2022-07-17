.PHONY: image clean
ifndef CROSS_COMPILE
CROSS_COMPILE = riscv64-linux-gnu-
endif
CC = $(CROSS_COMPILE)as
LD = $(CROSS_COMPILE)ld
OBJCOPY = $(CROSS_COMPILE)objcopy
OBJDUMP = $(CROSS_COMPILE)objdump

OBJECTS = inst_rom.o

export	CROSS_COMPILE
AS        = $(CROSS_COMPILE)gcc
CC        = $(CROSS_COMPILE)gcc
CXX       = $(CROSS_COMPILE)g++
LD        = $(CROSS_COMPILE)ld
OBJDUMP   = $(CROSS_COMPILE)objdump
OBJCOPY   = $(CROSS_COMPILE)objcopy
READELF   = $(CROSS_COMPILE)readelf

LDFLAGS   += -T linker.ld --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
ASFLAGS   += -MMD $(INCFLAGS)
IMAGE=CPG
SRCS 	  += start.S 

# trm.o: trm.c
# 	$(CC) -o $@ $<
	
# start.o: start.S trap.S
# 	$(AS)  -c -o $@ $<

program.o: $(CPG)
	$(CC) -std=gnu11 -c -o $@ $<

image: program.o
	$(LD) $(LDFLAGS) -o $(IMAGE).elf --start-group *.a --end-group *.o

compile: image
	$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt

clean: 
	rm -f *.o 