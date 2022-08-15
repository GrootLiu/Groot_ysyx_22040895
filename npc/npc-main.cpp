/*** 
 * @Author: Groot
 * @Date: 2022-08-08 10:22:52
 * @LastEditTime: 2022-08-15 10:53:11
 * @LastEditors: Groot
 * @Description: 
 * @FilePath: /ysyx-workbench/npc/npc-main.cpp
 * @版权声明
 */

// state == -1 正常退出
// state == -2 difftest错误

#include "./src/monitor/monitor.cpp"

int main(int argc, char** argv)
{
	init_monitor(argc, argv);
	int state = sim_main(argc, argv);
	if (state == -1)
	{
		return 0;
	}	
	return state;
}
