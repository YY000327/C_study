#define  _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu() {
	printf("*********************\n");
	printf("******1. play********\n");
	printf("******0. exit********\n");
	printf("*********************\n");

}

void game() {
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化棋盘
	//1.mine数组全是‘0’
	//2.show数组全是‘*’

	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
	open(mine, show, ROW, COL);



}

int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("please select>:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("exiting\n");
			break;
		default:
			printf("wrong choice\n");
			break;
		}

	} while (input);

	return 0;
}