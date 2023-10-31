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
	//定义2个棋盘mine，show
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化
	//其中mine全部初始化为'0'，有雷的地方定为'1'，用0，1是为了方便统计周围雷的数量
	//show是用来给玩家来玩的，一开始全部初始化为'*'
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');

	//打印棋盘
	//display_board(mine, ROW, COL);
	display_board(show, ROW, COL);

	//设置雷
	setmine(mine, ROW, COL);
	//display_board(mine, ROW, COL);

	//排查雷
	check(mine, show, ROW, COL);

	//展开雷
	open(mine, show, ROW, COL);
}

void text()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择是否进行游戏\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
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
