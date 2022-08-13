/***
 * @Author: Groot
 * @Date: 2022-08-11 21:57:18
 * @LastEditTime: 2022-08-13 10:23:11
 * @LastEditors: Groot
 * @Description:
 * @FilePath: /ysyx-workbench/npc/src/cpu/dut.cpp
 * @版权声明
 */
#include <dlfcn.h>

void (*ref_difftest_init)(char* img_file) = NULL;
// void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
// void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

#ifdef DIFFTEST

void init_difftest(char *ref_so_file, long img_size, char *img_file, int port)
{
	printf("difftest init\n");
	assert(ref_so_file != NULL);

	void *handle;
	handle = dlopen(ref_so_file, RTLD_LAZY);
	assert(handle);
	ref_difftest_init = (void (*)(char *))dlsym(handle, "my_difftest_init");
	printf("img_file: %s\n", img_file);
	ref_difftest_init(img_file);

	assert(ref_difftest_init);
	// ref_difftest_memcpy = dlsym(handle, "difftest_memcpy");
	// assert(ref_difftest_memcpy);

	ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "my_difftest_regcpy");
	assert(ref_difftest_regcpy);

	ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "my_difftest_exec");
	assert(ref_difftest_exec);

	// ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
	// assert(ref_difftest_raise_intr);

	char log_info_1[64] = ASNI_FMT("Differential testing: ON", ASNI_FG_GREEN);
	my_log(log_info_1);
	char log_info_2[256] = "The result of every instruction will be compared with ref_so_file. \nThis will help you a lot for debugging, but also significantly reduce the performance.\n";
	my_log(log_info_2);

	// ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
	printf("dut pc: %lx\n", cpu.pc);
	ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

static void checkregs(CPU_state *ref, uint64_t pc)
{
	int abort = 0;
	for (int i = 0; i < 32; i++)
	{
		if (cpu.cpu_gpr[i] != ref->cpu_gpr[i])
		{
			abort = 1;
		}
	}
	if (abort == 1)
	{
		contextp->gotFinish(true);
		char log_info[64] = ASNI_FMT("Differential testing Failed, Please Check Your NPC", ASNI_FG_RED);
		my_log(log_info);
	}
}

void difftest_step(uint64_t pc)
{

	CPU_state ref_temp;
	printf("difftest step\n");
	ref_difftest_exec(1);

	ref_difftest_regcpy(&ref_temp, DIFFTEST_TO_DUT);

	checkregs(&ref_temp, pc);
}

#endif