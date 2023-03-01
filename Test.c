#define _CRT_SECURE_NO_WARNINGS 1

#include "Minesweeper.h"

void menu()
{
	printf("��Ϸ��ʼ    \n");
	printf("1.play 0.exit\n");
	printf("**********\n");
}

void game()
{
	//�洢�׵���Ϣ
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("����������ѡ��> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ��>\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ��>\n");
			break;
		default:
			printf("�����������������롣\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}