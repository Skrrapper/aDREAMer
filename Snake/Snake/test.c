#define _CRT_SECURE_NO_WARNINGS 1


#include "snake.h"



void test()
{
	//����̰����
	Snake snake = { 0 };
	GameStart(&snake);//��Ϸ��ʼǰ��ʼ��
	//GameRun();//����Ϸ�Ĺ���
	//GameEnd();//��Ϸ������Ĺ���
}

int main() {
	setlocale(LC_ALL, "");

	test();//

	return 0;
}