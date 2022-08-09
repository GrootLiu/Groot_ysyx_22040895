/*** 
 * @Author: Groot
 * @Date: 2022-08-08 10:22:52
 * @LastEditTime: 2022-08-08 22:36:11
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/npc-main.cpp
 * @版权声明
 */
#include "./src/monitor/monitor.cpp"
#include "./src/engine/engine.cpp"

int main(int argc, char** argv)
{
	init_monitor(argc, argv);
	engine_start(argc, argv);
	return 0;
}
