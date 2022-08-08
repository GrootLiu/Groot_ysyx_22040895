/*** 
 * @Author: Groot
 * @Date: 2022-08-08 10:22:52
 * @LastEditTime: 2022-08-08 11:15:35
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/main/npc-main.cpp
 * @版权声明
 */
#include "monitor.cpp"
#include "engine.cpp"

int main(int argc, char** argv)
{
	init_monitor(argc, argv);
	engine_start(argc, argv);
	return 0;
}
