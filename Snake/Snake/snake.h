#pragma once
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

#define WALL L'��'

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

//̰���������㶨��
typedef struct SnakeNode
{
	int x;
	int y;
	struct SnakeNode* next;
}SnakeNode,* pSnakeNode;

//̰���������Ϸ���ߵ�λ�á� ʳ���λ��...��
 typedef struct Snake
{
	pSnakeNode pSnake;//ά�������ߵ�ָ��
	pSnakeNode pFood;//ָ��ʳ���ָ��
	int Score;//��ǰ�ۼƵķ���
	int foodweight;//ÿ��ʳ��ķ���
	int SleepTime;//Speed�ߵ��ٶȣ�����ʱ�����ٶȳɷ���
	enum GAME_STATUS status;//��Ϸ��ǰ��״̬
	enum DIRECTION dir;//���ߵķ���
}Snake,*pSnake;

//��Ϸ��ʼǰ 
void GameStart(pSnake ps);
//��ӭ����
void WelcomeToGame();
//���Ƶ�ͼ
void CreateMap();
