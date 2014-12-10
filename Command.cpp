#include <Windows.h>
#include <conio.h>

int WINAPI WinMain(HINSTANCE hInstance ,HINSTANCE prehInstance,LPSTR pszCmdLine,int nCmdShow)
{
	TCHAR		cmdline[512] = { 0 };
	int			i=0,tmp;
	while (1)
	{
		Sleep(100);
		if ((GetAsyncKeyState(VK_MENU) & 0x8000) && ((GetAsyncKeyState('a') & 0x8000) || GetAsyncKeyState('A') & 0x8000))
		{
			MessageBox(NULL, cmdline, TEXT("test"), 0);
			while ((tmp=_getch()) != 'q')
			{
				cmdline[i % 512] = tmp;
				i++;
			}
			MessageBox(NULL, cmdline, TEXT("test"), 0);
		}
	}
	return 0;
}