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
    bool running = true;  // ��ѭ�����Ʋ���
    ExMessage msg;        // ��Ϣ����
    int x = 400;          // Բ��X����
    int y = 300;          // Բ��Y����
    int r = 10;           // Բ�뾶
    int edge = 10;        // �����α߳�
    bool isyuan = false;  // �Ƿ�Բ��
    bool issqure = false; // �Ƿ񻭷���
    bool isbiger = false;
    bool isred = false;
    bool isgreen = false;
    bool isblue = false;
    bool isClear = false;


    initgraph(800, 600); // ��ʼ����ͼ����
    BeginBatchDraw();    // ����������ͼ

    // ��ѭ��
    while (running)
    {
        // ��Ϣ����
        DWORD beginTime = GetTickCount(); // ��¼ѭ����ʼʱ��

        while (peekmessage(&msg))
        {
            if (msg.message == WM_MOUSEMOVE)
            { // Բ��λ�������λ�ñ仯
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

            if (msg.message == WM_KEYDOWN) // ���°�������
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
            if (msg.message == WM_KEYUP) // �ɿ���������
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
        // ��ͼ
        if (isred)setfillcolor(RED);
        else if (isgreen)setfillcolor(GREEN);
        else if (isblue)setfillcolor(BLUE);

        if (isyuan && !issqure)
        {
            if (!isbiger)
                solidcircle(x, y, r); // ����һ��Բ
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

        FlushBatchDraw(); // ˢ��������ͼ

        DWORD endTime = GetTickCount();          // ��¼ѭ������ʱ��
        DWORD elapsedTime = endTime - beginTime; // ����ѭ����ʱ
        if (elapsedTime < 1000 / 120)            // ��ÿ��60֡���в�ʱ
            Sleep(1000 / 120 - elapsedTime);
    }

    EndBatchDraw(); // �ر�������ͼ
    closegraph();   // �رջ�ͼ����

    Forget_that Just_go;
}