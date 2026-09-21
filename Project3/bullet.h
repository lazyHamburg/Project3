#pragma once
#include"header.h"
class bullet{
public:
	int x, y;//坐标
	int row;//行
	bool used;//是否使用
	int speed;//速度
	bool blast;//是否发射爆炸
	int frameIndex;//帧序号
	bullet();
	~bullet();
};

//豌豆子弹
class pea :public bullet {

};

struct bullet bullets[30];//子弹池
IMAGE imgBulletNormal;//正常状态下子弹的图片
IMAGE imgBullBlast[4];//图片帧数组

void shoot();//发射豌豆子弹
void updateBullets();//更新豌豆子弹