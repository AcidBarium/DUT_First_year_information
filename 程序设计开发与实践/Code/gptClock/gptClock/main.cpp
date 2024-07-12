#define _CRT_SECURE_NO_WARNINGS 

#include<iostream>
#include <Windows.h>
#include<graphics.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include <sstream>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

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

void drawThickCircle(int x, int y, int radius, int thickness)
{
	rep(i, 0, thickness)	circle(x, y, radius + i);
}

void drawClock()
{
	setbkcolor(WHITE);
	cleardevice();
	setorigin(300, 300);
	setcolor(BLACK);
	drawThickCircle(0, 0, 280, 3);

	setfillcolor(RGB(210, 210, 210));
	fillcircle(0, 0, 275);   //内圆

	// 显示里面的线
	setlinestyle(0, 0);
	_rep(i, 1, 60) line(265 * cos(PI / 30 * i), 265 * sin(PI / 30 * i), 273 * cos(PI / 30 * i), 273 * sin(PI / 30 * i));
	setlinestyle(0, 2);
	_rep(i, 1, 12) line(265 * cos(PI / 6 * i), 265 * sin(PI / 6 * i), 273 * cos(PI / 6 * i), 273 * sin(PI / 6 * i));

	int textR = 230;
	settextcolor(BLACK);
	settextstyle(50, 25, _T("Courier"));
	setbkmode(TRANSPARENT);

	_rep(i, 1, 12)
	{
		ostringstream ss;
		ss << i;
		outtextxy((int)(textR * cos(-PI / 2 + PI / 6 * i)) - 20, (int)(textR * sin(-PI / 2 + PI / 6 * i)) - 20, ss.str().c_str());
	}

	char rolexLogo[10] = "ROLEX";
	int h = textheight(rolexLogo);
	int w = textwidth(rolexLogo);
	outtextxy(-w / 2, 50 - h / 2, rolexLogo);

	setfillcolor(RGB(0, 0, 0));
	solidcircle(0, 0, 12);   //黑色表芯
	setfillcolor(RGB(210, 0, 0));
	solidcircle(0, 0, 6);   //红色表芯

	SYSTEMTIME time; // 定义系统时间变量
	int second;      // 秒数
	int minute;      // 分钟数
	int hour;        // 小时数
	int shizhenLength = 150;
	int fenzhenLength = 250;
	int miaozhenLength = 200;

	GetLocalTime(&time); // 获取本地系统时间
	second = time.wSecond; // 设置秒数		
	minute = time.wMinute; // 设置分钟数
	hour = time.wHour;     // 设置小时数    

	setlinestyle(0, 4);
	line(0, 0, shizhenLength * cos(-PI / 2.0 + (hour % 12 + minute / 60.0 + second / 3600.0) * 2.0 * PI / 12.0),
		shizhenLength * sin(-PI / 2.0 + (hour % 12 + minute / 60.0 + second / 3600.0) * 2.0 * PI / 12.0)); // 画时针
	line(0, 0, fenzhenLength * cos(-PI / 2.0 + (minute + second / 60.0) * 2.0 * PI / 60.0), fenzhenLength * sin(-PI / 2.0 + (minute + second / 60.0) * 2.0 * PI / 60.0)); // 画分针
	setlinecolor(RED);
	line(0, 0, miaozhenLength * cos(-PI / 2.0 + 2.0 * PI / 60.0 * second), miaozhenLength * sin(-PI / 2.0 + 2.0 * PI / 60.0 * second)); // 画秒针
}

int main()
{
	initgraph(600, 600, EX_SHOWCONSOLE);
	setbkcolor(WHITE);

	// 创建双缓冲区
	IMAGE buffer;
	SetWorkingImage(&buffer);

	// 初始化缓冲区
	initgraph(600, 600);
	setbkcolor(WHITE);
	cleardevice();

	while (1)
	{
		// 绘制时钟内容到缓冲区
		drawClock();

		// 将缓冲区内容复制到屏幕
		putimage(0, 0, &buffer);

		// 暂停一秒
		Sleep(1000);
	}

	closegraph();
	Forget_that Just_go;
}
