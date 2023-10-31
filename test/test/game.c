#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void init_board(char board[ROWS][COLS], int rows, int cols, int met)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = met;
		}
	}
}


void display_board(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("--------- 扫雷 ---------\n");
	for (y = 0; y <= col; y++)
	{
		printf("%d ", y);
	}
	printf("\n");
	for (x = 1; x <= row; x++)
	{
		printf("%d ", x);
		for (y = 1; y <= col; y++)
		{
			printf("%c ", board[x][y]);
		}
		printf("\n");
	}
	printf("--------- 扫雷 ---------\n");
}

void setmine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//统计 周围雷的个数
//方法一
//int get_mine(char mine[ROWS][COLS], int x, int y)
//{
//	return mine[x][y + 1] + mine[x][y - 1] + mine[x - 1][y] + mine[x + 1][y] 
//		+ mine[x + 1][y + 1] + mine[x - 1][y - 1] + mine[x + 1][y - 1] +
//		mine[x - 1][y + 1]-8*'0';
//}

//方法二
int get_mine(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
				count++;
		}
	}
	return count;
}

//排查雷
void check(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY)
	{
		printf("请输入要排查的坐标");
		scanf("%d%d", &x, &y);
		if (show[x][y] != '*')
		{
			printf("该坐标被查过了");
			continue;
		}
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				//把雷的位置打出来给玩家看看
				display_board(mine, ROW, COL);
				break;
			}
			else
			{
				open(mine, show, x, y);
				display_board(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	if (win == (row * col - EASY))
	{
		printf("游戏获胜\n");
		display_board(mine, ROW, COL);
	}
}

//展开雷
void open(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		int count = get_mine(mine, x, y);
		if (count != 0)
			show[x][y] = count + '0';
		else if (show[x][y] != ' ')
		{
			show[x][y] = ' ';
			int i = 0;
			for (i = x - 1; i <= x + 1; i++)
			{
				int j = 0;
				for (j = y - 1; j <= y + 1; j++)
				{
					open(mine, show, i, j);
				}
			}
		}
		else
		{
			return;
		}
	}
}
