#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <Windows.h>
#include <graphics.h>
#include <mmsystem.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <math.h>
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
#pragma comment(lib, "winmm.lib")

int main()
{
    bool running = true;  // 主循环控制参数
    ExMessage msg;        // 消息对象
    int x = 400;          // 圆心X坐标
    int y = 300;          // 圆心Y坐标
    int r = 10;           // 圆半径
    int edge = 10;        // 正方形边长
    bool isyuan = false;  // 是否画圆形
    bool issqure = false; // 是否画方形
    bool isbiger = false;
    bool isred = false;
    bool isgreen = false;
    bool isblue = false;
    bool isClear = false;


    initgraph(800, 600); // 初始化绘图窗口
    BeginBatchDraw();    // 开启批量绘图

    // 主循环
    while (running)
    {
        // 消息处理
        DWORD beginTime = GetTickCount(); // 记录循环开始时间

        while (peekmessage(&msg))
        {
            if (msg.message == WM_MOUSEMOVE)
            { // 圆的位置随鼠标位置变化
                x = msg.x;
                y = msg.y;
            }
            if (msg.message == WM_LBUTTONDOWN)
            {

                isyuan = true;
            }
            if (msg.message == WM_LBUTTONUP)
            {
                isyuan = false;
            }

            if (msg.message == WM_RBUTTONDOWN)
            {
                issqure = true;
            }

            if (msg.message == WM_RBUTTONUP)
            {
                issqure = false;
            }

            if (msg.message == WM_KEYDOWN) // 按下按键处理
            {
                switch (msg.vkcode)
                {
                case 'r':
                case 'R':
                    isred = true;
                    isgreen = false;
                    isblue = false;
                    break;

                case 'g':
                case 'G':
                    isred = false;
                    isgreen = true;
                    isblue = false;
                    break;

                case 'b':
                case 'B':
                isred = false;
                isgreen = false;
                isblue = true;
                    break;

                case 'c':
                case 'C':
                    isClear = true;
                    break;

                case VK_CONTROL:
                    isbiger = true;
                    break;

                case VK_ESCAPE:
                    running = false;
                    break;

                }
            }
            if (msg.message == WM_KEYUP) // 松开按键处理
            {
                switch (msg.vkcode)
                {
                case VK_CONTROL:
                    isbiger = false;
                    break;
                }
            }
        }

        if (isClear)
        {
            cleardevice();
            isClear = false;
        }
        // 绘图
        if (isred)setfillcolor(RED);
        else if (isgreen)setfillcolor(GREEN);
        else if (isblue)setfillcolor(BLUE);

        if (isyuan && !issqure)
        {
            if (!isbiger)
                solidcircle(x, y, r); // 绘制一个圆
            else
                solidcircle(x, y, 2 * r);
        }
        else if (!isyuan && issqure)
        {
            if (!isbiger)
                solidrectangle(x - edge / 2, y - edge / 2, x + edge / 2, y + edge / 2);
            else
                solidrectangle(x - edge, y - edge, x + edge, y + edge);
        }

        FlushBatchDraw(); // 刷新批量绘图

        DWORD endTime = GetTickCount();          // 记录循环结束时间
        DWORD elapsedTime = endTime - beginTime; // 计算循环耗时
        if (elapsedTime < 1000 / 120)            // 按每秒60帧进行补时
            Sleep(1000 / 120 - elapsedTime);
    }

    EndBatchDraw(); // 关闭批量绘图
    closegraph();   // 关闭绘图窗口

    Forget_that Just_go;
}