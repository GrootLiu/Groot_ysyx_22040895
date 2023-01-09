#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc)
{
	/* TODO: Trigger an interrupt/exception with ``NO''.
	 * Then return the address of the interrupt/exception vector.
	 */
	cpu.csr[mepc] = epc;
	cpu.csr[mcause] = NO;
	printf("mcause: %ld\n", NO);

#ifdef CONFIG_ETRACE
	char exec_name[128];
	char *c = exec_name;
	switch (NO)
	{
	case 0xb:
		sprintf(c, "exception name: [%s]!\n", ASNI_FMT("EVENT_YIELD", ASNI_FG_YELLOW ASNI_BG_CYAN));
		break;
	default:
		break;
	}

	printf("%s", exec_name);
	log_write("%s\n", exec_name);
#endif

	return cpu.csr[mtvec];
}

word_t isa_query_intr()
{
	return INTR_EMPTY;
}
