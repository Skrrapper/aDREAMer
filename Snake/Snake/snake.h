#pragma once
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

#define WALL L'□'

enum GAME_STATUS
{
	OK=1,
	ESC,
	KILL_BY_WALL,
	KILL_BY_SELF
};

enum DIRECTION
{
	UP = 1,
	DOWM,
	LEFT,
	RIGHT
};

//贪吃蛇蛇身结点定义
typedef struct SnakeNode
{
	int x;
	int y;
	struct SnakeNode* next;
}SnakeNode,* pSnakeNode;

//贪吃蛇这个游戏（蛇的位置、 食物的位置...）
 typedef struct Snake
{
	pSnakeNode pSnake;//维护整条蛇的指针
	pSnakeNode pFood;//指向食物的指针
	int Score;//当前累计的分数
	int foodweight;//每个食物的分数
	int SleepTime;//Speed蛇的速度，休眠时间与速度成反比
	enum GAME_STATUS status;//游戏当前的状态
	enum DIRECTION dir;//蛇走的方向
}Snake,*pSnake;

//游戏开始前 
void GameStart(pSnake ps);
//欢迎界面
void WelcomeToGame();
//绘制地图
void CreateMap();
