#include <graphics.h>

int main()
{
	initgraph(600, 600);

	HWND hWnd = GetHWnd();						// ��ô��ھ��	
	SetWindowText(hWnd, _T("ֲ���ս��ʬ"));		// ʹ�� Windows API �޸Ĵ�������

	system("pause");
	closegraph();
	return 0;
}