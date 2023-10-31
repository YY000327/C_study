#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY 10

//初始化棋盘
void init_board(char board[ROWS][COLS], int rows, int cols, int met);

//打印棋盘
void display_board(char board[ROWS][COLS], int row, int col);

//设置雷
void setmine(char mine[ROWS][COLS], int row, int col);

//排查雷
void check(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//展开雷
void open(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
