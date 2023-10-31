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
	printf("----ɨ����Ϸ----\n");
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
	//������10��
	//�����������
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
			printf("�����걻�����");
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
				//�����λ�ò����ף�ͳ��������Χ�м�����
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
		int count = GetMineCount(mine, x, y);//ͳ��һ��������Χ�׵ĸ����������ظ���count
		//����ø�����Χ�׵ĸ�����Ϊ0�����ǾͰѸø�����Χ�׵ĸ�������������show���̶�Ӧ�ĸ����У��������0�����Ǵ���ո� �� 
		if (count != 0)
			show[x][y] = count + '0';//����count���ص��������������������е����ַ���������Ҫ���ϡ�0�����൱�ڼ���ASCIIֵ48
		else if (show[x][y] != ' ')
		{
			show[x][y] = ' ';
			int i = 0;
			for (i = x - 1; i <= x + 1; i++)
			{
				int j = 0;
				for (j = y - 1; j <= y + 1; j++)
				{
					//���õݹ鷴�����У�֪����Χ������
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