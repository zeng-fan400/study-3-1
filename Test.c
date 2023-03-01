#define _CRT_SECURE_NO_WARNINGS 1

#include "Minesweeper.h"

void menu()
{
	printf("游戏开始    \n");
	printf("1.play 0.exit\n");
	printf("**********\n");
}

void game()
{
	//存储雷的信息
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//扫雷
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入您的选择：> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏：>\n");
			game();
			break;
		case 0:
			printf("退出游戏：>\n");
			break;
		default:
			printf("输入有误，请重新输入。\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}