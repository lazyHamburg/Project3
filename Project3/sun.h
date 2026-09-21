
#include"header.h"
class sunshineBall
{
public:
	int x, y;//阳光球在飘落过程种的坐标位置(x不变)
	int frameIndex;//当前显示的图片帧的序号
	int destY;//飘落的目标位置的y坐标
	bool used;//是否在使用
	int timer;//计时器
	float xoff;//x偏移量
	float yoff;//y偏移量
	float speed;//速度
	int status;//当前状态

	sunshineBall();
	~sunshineBall();
};
sunshineBall balls[10];//阳光池
IMAGE imgSunshineBall[29];//阳光球图片数组
enum { SUNSHINE_DOWN, SUNSHINE_GROUND, SUNSHINE_COLLECT, SUNSHINE_PRODUCT };//阳光球的四种状态


