#define _CRT_SECURE_NO_WARNINGS 

#include<iostream>
#include <Windows.h>
#include<graphics.h>
#include<mmsystem.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include <sstream>

typedef long long ll;
#define endl '\n'
#define _rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define Forget_that return
#define Just_go 0
#define Endl endl
#define ednl endl
#define eldn endl
#define dnel endl
#define enndl endl
#define Ednl endl
#define Edml endl
#define llmax 9223372036854775807
#define intmax 2147483647
#define PI 3.141592653589793238462643383279502884197
using namespace std;
#pragma comment(lib,"winmm.lib")



int main()
{
	initgraph(800, 800, EX_SHOWCONSOLE);
	setbkcolor(RGB(224,149,79));
	cleardevice();

	setorigin(0, 800);			// 将绘图窗口的左下角作为坐标原点
	setaspectratio(1, -1);		// 缩放因子为负数，可以实现坐标轴的翻转，此行可使y轴向上为正
	
	setlinecolor(BLACK);
	setlinestyle(0, 5);

	line(50, 50, 50, 750);
	line(50, 50, 750, 50);
	line(750, 50, 750, 750);
	line(50, 750, 750, 750);

	setlinestyle(0, 2);
	settextcolor(BLACK);
	_rep(i, 1, 13)line(50 + i * 50, 50, 50 + i * 50, 750), line(50, 50 + i * 50, 750, 50 + i * 50);

	
	settextstyle(34, 17, _T("Courier"));
	setaspectratio(1, 1);

	char c = 'A';
	_rep(i, 1, 15) 
	{
		c = 'A' + i - 1;
		outtextxy(-10 + i * 50, -40, c);
	}
	int cNum = 0;

	_rep(i, 1, 15)
	{
		cNum = 0 + i;
		ostringstream ss;
		ss << cNum;
		outtextxy(10, -20 - 50 * i, ss.str().c_str());
	}

	setaspectratio(1, -1);

	setfillcolor(BLACK);
	solidcircle(200, 200, 10);
	solidcircle(200, 600, 10);
	solidcircle(600, 200, 10);
	solidcircle(600, 600, 10);
	solidcircle(400, 400, 10);

	system("pause");
	closegraph();
	

	Forget_that Just_go;
}