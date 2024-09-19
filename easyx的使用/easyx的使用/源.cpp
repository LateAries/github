#include<graphics.h>
#include<Windows.h>

int main(void)
{
	//创造背景
	initgraph(640, 480,0);

	//设计背景颜色
	setbkcolor(RGB(64,128,128));
	//相当于喷涂料的动作
	cleardevice();

	//设置画笔颜色
	setlinecolor(RGB(255, 0, 0));
	//设置画笔的样式
	setlinestyle(PS_SOLID, 10);
	//构建需要的图形画一个圆，在（320，240）位置画一个圆，半径为200像素
	circle(320, 240, 200);

	//书写文字
	settextcolor(YELLOW);
	settextstyle(100,0,"微软雅黑");
	outtextxy(170,190,"高清无码");

	line(180,380,460,100);


	system("pause");

	closegraph();
}