#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY 10

//��ʼ������
void init_board(char board[ROWS][COLS], int rows, int cols, int met);

//��ӡ����
void display_board(char board[ROWS][COLS], int row, int col);

//������
void setmine(char mine[ROWS][COLS], int row, int col);

//�Ų���
void check(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//չ����
void open(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
