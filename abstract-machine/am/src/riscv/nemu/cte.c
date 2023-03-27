#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

// 函数指针
// 函数返回值类型 (* 指针变量名) (函数参数列表);
static Context *(*user_handler)(Event, Context *) = NULL;

Context *__am_irq_handle(Context *c)
{
	if (user_handler)
	{
		Event ev = {0};
		switch (c->mcause)
		{
		case (0xb):
			ev.event = EVENT_YIELD;
			break;
		default:
			ev.event = EVENT_ERROR;
			break;
		}
		// 进入异常处理程序
		c = user_handler(ev, c);

		assert(c != NULL);
	}

	return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context *(*handler)(Event, Context *))
{
	// initialize exception entry
	asm volatile("csrw mtvec, %0"
				 :
				 : "r"(__am_asm_trap));

	// register event handler
	user_handler = handler;

	return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg)
{
	return NULL;
}

void yield()
{
	asm volatile("li a7, -1; ecall;");
}

bool ienabled()
{
	return false;
}

void iset(bool enable)
{
}
