#define _CRT_SECURE_NO_WARNINGS 1


#include "snake.h"



void test()
{
	//创建贪吃蛇
	Snake snake = { 0 };
	GameStart(&snake);//游戏开始前初始化
	//GameRun();//玩游戏的过程
	//GameEnd();//游戏结束后的工作
}

int main() {
	setlocale(LC_ALL, "");

	test();//

	return 0;
}