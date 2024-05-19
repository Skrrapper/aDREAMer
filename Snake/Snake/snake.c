#define _CRT_SECURE_NO_WARNINGS 1
#include "snake.h"


//设置光标的坐标
void SetPos(short x, short y)
{
	COORD pos = { x, y };
	HANDLE hOutput = NULL;
	//获取标准输出的句柄(⽤来标识不同设备的数值)
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	//设置标准输出上光标的位置pos
	SetConsoleCursorPosition(hOutput, pos);
}
//界面
void WelcomeToGame() {
	SetPos(45, 10);
	printf("WELCOME!\n");
	SetPos(44, 12);
	printf("S-N-A-K-E\n");
	SetPos(41, 15);

	system("pause");

	system("cls");

	SetPos(15, 10);
	printf("用 ↑ . ↓ . ← . → 分别控制蛇的移动，F3为加速，F4为减速\n");
	SetPos(15, 11);
	printf("加速能得到更高的分数");
	SetPos(38, 20);
	system("pause");
	system("cls");
}

//创建地图
void CreateMap() {
	int i = 0;
	//上
	SetPos(0, 0);
	for (i = 0; i <= 56; i += 2)
	{
		wprintf(L"%lc", WALL);
	}
	//下
	SetPos(0, 25);
	for (i = 0; i <= 56; i += 2)
	{
		wprintf(L"%lc", WALL);
	}
	//左
	for (i = 1; i <= 25; i++)
	{
		SetPos(0, i);
		wprintf(L"%lc", WALL);
	}
	//右
	for (i = 1; i <= 25; i++)
	{
		SetPos(56, i);
		wprintf(L"%lc", WALL);
	}
	getchar();
}


void GameStart(pSnake ps) {
	//设置控制台的信息：窗口大小、窗口名等
	system("mode con cols=100 lines=30");
	system("title 贪吃蛇");
	
	//隐藏光标
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);//获取控制台光标信息
	CursorInfo.bVisible = false;
	SetConsoleCursorInfo(handle, &CursorInfo);

	//打印欢迎信息
	WelcomeToGame();
	//绘制地图
	CreateMap();
	//初始化

	//创建食物
}
