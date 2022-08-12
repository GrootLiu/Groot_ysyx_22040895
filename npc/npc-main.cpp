/*** 
 * @Author: Groot
 * @Date: 2022-08-08 10:22:52
 * @LastEditTime: 2022-08-12 17:09:58
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/npc-main.cpp
 * @版权声明
 */
#include "./src/monitor/monitor.cpp"
#include "./src/sim-main.cpp"

int main(int argc, char** argv)
{
	init_monitor(argc, argv);
	sim_main(argc, argv);
	return 0;
}
