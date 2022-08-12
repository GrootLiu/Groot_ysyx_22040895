/*** 
 * @Author: Groot
 * @Date: 2022-08-11 21:57:18
 * @LastEditTime: 2022-08-12 10:55:47
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/src/cpu/dut.cpp
 * @版权声明
 */
#include <dlfcn.h>

// void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

#ifdef DIFFTEST

void init_difftest(char *ref_so_file, long img_size, int port)
{
	assert(ref_so_file != NULL);

	void *handle;
	handle = dlopen(ref_so_file, RTLD_LAZY);
	assert(handle);

	ref_difftest_memcpy = dlsym(handle, "difftest_memcpy");
	assert(ref_difftest_memcpy);

	ref_difftest_regcpy = dlsym(handle, "difftest_regcpy");
	assert(ref_difftest_regcpy);

	ref_difftest_exec = dlsym(handle, "difftest_exec");
	assert(ref_difftest_exec);

	ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
	assert(ref_difftest_raise_intr);

	void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
	assert(ref_difftest_init);

	my_log(ASNI_FMT("Differential testing: ON", ASNI_FG_GREEN));
	my_log("The result of every instruction will be compared with ref_so_file. \nThis will help you a lot for debugging, but also significantly reduce the performance.\nIf it is not necessary, you can turn it off in menuconfig.");

	ref_difftest_init(port);
	// ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
	ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

static void checkregs(CPU_state *ref, uint64_t pc)
{
	int abort = 0;
	for (int i = 0; i < 32; i++)
	{
		if (cpu.gpr[i] != ref->gpr[i])
		{
			abort = 1;
		}
	}
	if (abort == 1)
	{
		contextp->gotFinish(true);
		my_log(ASNI_FMT("Differential testing Failed, Please Check Your NPC", ASNI_FG_RED));
		regs_display();
	}
}

void difftest_step(uint64_t pc)
{
	CPU_state ref_temp;

	ref_difftest_exec(1);
	ref_difftest_regcpy(&ref_temp, DIFFTEST_TO_DUT);

	checkregs(&ref_temp, pc);
}

#endif