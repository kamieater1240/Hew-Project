#define _CRT_SECURE_NO_WARNINGS
#include "setting.h"

//カーソルを隠す
void cursorSetInvisible(void)
{
	CONSOLE_CURSOR_INFO info;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(hConsole, &info);
}