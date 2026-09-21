#pragma once
#include <iostream>
#include <graphics.h>//easyx图形库的头文件,需要安装easyx图形库
#include <time.h>
#include <math.h>
#include <mmsystem.h>
#define WIN_WIDTH 900//窗口长
#define WIN_HELGHT 600//窗口宽
#define ZM_MAX 10//僵尸个数

enum { WAN_DOU, XIANG_RI_KUI, ZHI_WU_COUNT };//植物种类和数量
enum { GOING, WIN, FAIL };//三种游戏状态
int killCount;//已经杀掉僵尸的个数
int zmCount;//已经出现的僵尸个数
int gameStatus;//当前游戏状态
int curX, curY;//当前选中的植物，在移动过程中的位置
int curZhiWu = 0;//选择哪种植物 0:没有选中 1:选择了第一种植物
int sunshine;//定义阳光值

IMAGE imgBg;//关卡背景
IMAGE imgBar;//背包
IMAGE imgCards[ZHI_WU_COUNT];//植物卡牌
IMAGE* imgZhiWu[ZHI_WU_COUNT][20];//植物
IMAGE imgZmStand[11];//转场的僵尸
IMAGE imghand[9];//僵尸手
IMAGE imgStartSet;//好
IMAGE imgStartReady;//准备
IMAGE imgStartPlant;//开始
IMAGE imgzmhead;//僵尸头
IMAGE imgjindu[11];//进度
IMAGE imgjindutiao;//进度条

bool fileExist(const char* name);//判断文件是否存在
void gameInit();//游戏初始化
void drawZM();//打印僵尸
void drawSunshines();//绘制阳光
void progressbar();//进度条
void updateWindow();//更新窗口
void collectSunshine(ExMessage* msg);//收集阳光
void userClick();//用户操作
void createSunshine();//创建阳光
void updateSunshine();//更新阳光
void createZM();//创建僵尸
void updateZM();//更新僵尸状态
void shoot();//发射豌豆子弹
void updateBullets();//更新豌豆子弹
void checkBulletZZm();//检查子弹对僵尸的影响
void checkZm2ZhiWU();//僵尸对植物的检测
void collisionCheck();//碰撞检测
void updateZhiWu();//更新植物
void startUI();//启动菜单
void viewScence();//转场
void barsDown();//工具栏下滑
void updateGame();//游戏更新
bool checkOver();//判断游戏结束
void gamestart();//游戏开始字幕
int getDelay();//获取时间




