#include <graphics.h>

int main()
{
	initgraph(600, 600);

	HWND hWnd = GetHWnd();						// 获得窗口句柄	
	SetWindowText(hWnd, _T("植物大战僵尸"));		// 使用 Windows API 修改窗口名称

	system("pause");
	closegraph();
	return 0;
}