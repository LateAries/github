#include<graphics.h>
#include<Windows.h>

int main(void)
{
	//���챳��
	initgraph(640, 480,0);

	//��Ʊ�����ɫ
	setbkcolor(RGB(64,128,128));
	//�൱����Ϳ�ϵĶ���
	cleardevice();

	//���û�����ɫ
	setlinecolor(RGB(255, 0, 0));
	//���û��ʵ���ʽ
	setlinestyle(PS_SOLID, 10);
	//������Ҫ��ͼ�λ�һ��Բ���ڣ�320��240��λ�û�һ��Բ���뾶Ϊ200����
	circle(320, 240, 200);

	//��д����
	settextcolor(YELLOW);
	settextstyle(100,0,"΢���ź�");
	outtextxy(170,190,"��������");

	line(180,380,460,100);


	system("pause");

	closegraph();
}