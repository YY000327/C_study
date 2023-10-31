#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//初始化
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void PCMove(char board[ROW][COL], int row, int col);



//判断输赢
//玩家赢、电脑赢、平局、继续
//玩家赢 - ‘*’
//电脑赢 = ‘#’
//平局   - ‘Q’
//继续   - ‘C’

char IsWin(char board[ROW][COL], int row, int col);

