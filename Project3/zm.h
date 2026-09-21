#include"header.h"
class Zombie
{
public:
	int x, y;//坐标
	int frameIndex;//序列帧的序号
	bool used;//是否登场
	int speed;//速度
	int row;//行
	int blood;//血量
	int dead;//死亡
	bool eating;//正在吃植物
	Zombie();
};
class NormalZombie : public Zombie
{
public:
	NormalZombie();
};

class ConeheadZombie : public Zombie
{
public:
	ConeheadZombie();
};

class BucketheadZombie : public Zombie
{
public:
	BucketheadZombie();
};

Zombie zms[10];//僵尸数量
IMAGE imgZM[21];//图片数组
IMAGE imgZMDead[20];//死亡图片数组
IMAGE imgZMEat[21];//吃东西图片数组


