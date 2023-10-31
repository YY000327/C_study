#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("********* 1.play *********\n");
	printf("********* 0.exit *********\n");
	printf("**************************\n");
}

void game()
{
	//����2������mine��show
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	//����mineȫ����ʼ��Ϊ'0'�����׵ĵط���Ϊ'1'����0��1��Ϊ�˷���ͳ����Χ�׵�����
	//show���������������ģ�һ��ʼȫ����ʼ��Ϊ'*'
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');

	//��ӡ����
	//display_board(mine, ROW, COL);
	display_board(show, ROW, COL);

	//������
	setmine(mine, ROW, COL);
	//display_board(mine, ROW, COL);

	//�Ų���
	check(mine, show, ROW, COL);

	//չ����
	open(mine, show, ROW, COL);
}

void text()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ���Ƿ������Ϸ\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	srand((unsigned int)time(NULL));
	text();
	return 0;
}
