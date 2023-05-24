#include <common.h>

static Context *do_event(Event e, Context *c)
{
	// printf("%d\n", e.event);
	switch (e.event)
	{		
	case (EVENT_YIELD):
		printf("\033[47;32;4m Hello YIELD! \033[0m \n");
		c->mepc = c->mepc+0x4;
		break;
	default:
		panic("Unhandled event ID = %d", e.event);
		break;
	}

	return c;
}

void init_irq(void)
{
	Log("Initializing interrupt/exception handler...");
	cte_init(do_event);
}
