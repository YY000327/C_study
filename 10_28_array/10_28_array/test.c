#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu() {
	printf("******************\n");
	printf("******1. play*****\n");
	printf("******0. exit*****\n");
	printf("******************\n");

}

void game() {
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	//print the board
	DisplayBoard(board, ROW, COL);
	//move
	char ret = 0;
	while (1) {
		//player move
		PlayerMove(board, ROW, COL);
		//pc move
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

		PCMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		IsWin(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

	}
	if (ret == '*')
		printf("player win\n");
	else if (ret == '#')
		printf("PC wins\n");
	else
		printf("no wins\n");

}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));

	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}