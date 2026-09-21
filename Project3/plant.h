
#include"header.h"
class zhiwu
{
public:
	int type;//0:没有植物	1:选择了第一种植物
	int frameIndex;//序列帧的序号
	bool catched;//是否被僵尸捕获
	int deadTime;//死亡计数器
	int timer;//定时器
	int x, y;//植物的x，y坐标
	int shootTime;//发射时间
	zhiwu();
	~zhiwu();
};

//土豆雷
class PotatoMine :public zhiwu {
protected:
	int undercountdown;//倒数计时
	int boomcountdown;//爆炸时间
public:
	PotatoMine();
};

//向日葵
class sunflower :public zhiwu {

};

//豌豆射手
class Peashooter :public zhiwu {

};
zhiwu map[3][9];//植物种植的地方
