#include"header.h"
#include"zm.h"
#include"plant.h"
#include"sun.h"
int main() {
	gameInit();//游戏初始化
	startUI();//启动菜单
	viewScence();//转场
	barsDown();//工具栏
	gamestart();//游戏开始字幕
	int timer = 0;//计时器
	bool flag = true;//判断帧更新
	while (1)
	{
		userClick();//用户操作
		timer += getDelay();//自定义记录时间间隔
		if (timer > 10)//时间间隔大于10
		{
			flag = true;//为真
			timer = 0;//计算器为0
		}
		if (flag)//判断
		{
			flag = false;//为假
			updateWindow();//更新窗口
			updateGame();//游戏更新
			if (checkOver())break;
		}
	}
	system("pause");//窗口停留
	return 0;
}