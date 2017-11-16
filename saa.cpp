#include "graphics.h"
#include "conio.h"
#define Height 480
#define Width 640

void drawhead();
void drawbody();
int main(){
	initgraph(Width,Height);
	setbkcolor(WHITE);
	cleardevice();
	setorigin(0,0);
	drawhead();
	drawbody();
	_getch();
	return 0;
}
void drawhead(){
	//大头
	setfillcolor(GREEN);
	fillroundrect(240,60,400,220,200,200);
	//大脸。
	setfillcolor(WHITE);
	fillroundrect(260,100,380,210,200,200);
	//眼眶
	setlinecolor(GREEN);
	fillroundrect(290,85,320,120,20,20);
	fillroundrect(320,85,350,120,20,20);
	//眼睛
	setfillcolor(GREEN);
	fillroundrect(302,102,308,108,200,200);
	fillroundrect(332,102,338,108,200,200);
	//鼻子
	setfillcolor(LIGHTGREEN);
	fillroundrect(312.5,117,327.5,132,200,200);
	//胡子
	line(340,140,360,130);
	line(340,145,360,145);
	line(340,150,360,160);
	line(300,140,280,130);
	line(300,145,280,145);
	line(300,150,280,160);
	//嘴巴
	setfillcolor(GREEN);
	fillroundrect(319.9,132,320.1,180,2,2);
	arc(260,70,380,180,2,2);
}
void drawbody(){
	//身体
	setfillcolor(GREEN);
	fillroundrect(260,208,380,320,1,1);
	//肚子
	setfillcolor(WHITE);
	fillroundrect(270,200,370,300,200,200);
	//绳子
	setfillcolor(LIGHTGREEN);
	fillroundrect(255,200,385,210,20,20);
	//铃铛
	setfillcolor(LIGHTGREEN);
	fillroundrect(310,210,330,230,200,200);
	line(312,215,328,215);
	line(311,217,329,217);
	setfillcolor(GREEN);
	fillroundrect(317.5,222.5,322.5,227.5,200,200);
	//口袋
	arc(280,210,360,290,3.14,0);
	line(280,248,360,248);
	//裆部
	setfillcolor(WHITE);
	solidroundrect(310,310,330,330,200,200);
	//脚
	roundrect(250,320,315,340,20,20);
	roundrect(325,320,390,340,20,20);
	//手
	line(259,210,215,240);
	line(259,230,215,260);
	fillroundrect(195,240,225,270,200,200);
	line(381,210,425,240);
	line(381,230,425,260);
	fillroundrect(445,240,415,270,200,200);
	setfillcolor(GREEN);
	floodfill(240,235,GREEN);
	floodfill(390,235,GREEN);

}
