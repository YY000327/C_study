#define  _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set) {
	int i = 0;
	for (i = 0; i < rows; i++) {
		int j = 0;
		for (j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	printf("----扫雷游戏----\n");
	for (i = 0; i <= col; i++)
		printf("%d ", i);
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= col; j++) {
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}


void SetMine(char board[ROWS][COLS], int row, int col) {
	int count = COUNT;
	int x = 0;
	int y = 0;
	//布置雷10个
	//随机生成坐标
	while (count) {
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
	}


}
//
//int GetMineCount(char mine[ROWS][COLS], int x, int y) {
//	return (mine[x - 1][y] + mine[x - 1][y + 1] + mine[x - 1][y - 1] + mine[x][y + 1] + mine[x][y - 1]
//		+ mine[x + 1][y - 1] + mine[x + 1][y + 1] + mine[x + 1][y] - 8 * '0');
//}

int GetMineCount(char mine[ROWS][COLS], int x, int y) {
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



void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col - COUNT ) 
	{
		printf("write down the position>:");
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
				printf("wrong choice, failed the game\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else {
				open(mine,show, x, y);
				//如果该位置不是雷，统计坐标周围有几个雷
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else {
			printf("wrong position\n");
		}

	}
	if (win == (row * col - COUNT)) {
		printf("sucess!\n");
		DisplayBoard(mine, ROW, COL);
	}


}
void open(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		int count = GetMineCount(mine, x, y);//统计一个格子周围雷的个数，并返回个数count
		//如果该格子周围雷的个数不为0，我们就把该格子周围雷的个数传到玩家玩的show棋盘对应的格子中，而如果是0，我们传入空格‘ ’ 
		if (count != 0)
			show[x][y] = count + '0';//由于count返回的是整数，而存入数组中的是字符，我们需要加上‘0’，相当于加上ASCII值48
		else if (show[x][y] != ' ')
		{
			show[x][y] = ' ';
			int i = 0;
			for (i = x - 1; i <= x + 1; i++)
			{
				int j = 0;
				for (j = y - 1; j <= y + 1; j++)
				{
					//利用递归反复进行，知道周围都有雷
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