#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			board[i][j]=' ';
		}
	}
}
//// vers 1.0
//void DisplayBoard(char board[ROW][COL], int row, int col) {
//	int i = 0;
//	for (i = 0; i < row; i++) {
//		int j = 0;
//		for (j = 0; j < row; j++) {
//			printf("%c", board[i][j]);
//		}
//		printf("\n");
//	}
//}

//// vers 2.0
//void DisplayBoard(char board[ROW][COL], int row, int col) {
//	int i = 0;
//	for (i = 0; i < row; i++) {
//		//1.打印数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//2.打印分割线
//		if (i < row - 1) {
//			printf("---|---|---\n");
//
//		}
//	}
//}

//verse 3.0
void DisplayBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}printf("\n");
		if (i < row - 1) {
			int j = 0;
				for (j = 0; j < col; j++) {
					printf("---");
					if (j < col - 1)
						printf("|");
				}
				printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("player move>:");

	while (1) {
		printf("please enter the axis>:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("already token\n");
			}
		}
		else {
			printf("unavailable position\n");
		}
	}
}		

//
// 电脑随机下棋
//
void PCMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("PC move >：\n");
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}

}
int IsFull(char board[ROW][COL], int row,int col) {
	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;

}


char IsWin(char board[ROW][COL], int row, int col) {
	//赢
	//行
	int i = 0;
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&& board[i][0] !=' ') {
			return board[i][0];
		}
	}
	for (i = 0; i < row; i++) {
		if (board[0][1] == board[1][i] && board[1][i] == board[2][i] && board[0][1] != ' ') {
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	//平局
	if (IsFull(board, row, col) == 1) {
		return 'Q';
	}
	//继续
	return 'C';
}

