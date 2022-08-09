ifndef CROSS_COMPILE
CROSS_COMPILE = riscv64-linux-gnu-
endif
CC = $(CROSS_COMPILE)as
LD = $(CROSS_COMPILE)ld
OBJCOPY = $(CROSS_COMPILE)objcopy
OBJDUMP = $(CROSS_COMPILE)objdump

export	CROSS_COMPILE

assembly: inst.txt

%.o: %.s
	$(CC) $< -o $@

inst.elf: inst.o
	$(LD) $< -o $@

inst.txt: inst.elf
	$(OBJDUMP) -d $< > inst.txt
	rm -f *.o *.elf