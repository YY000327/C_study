#define _CRT_SECURE_NO_WARNINGS 1

#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;

typedef struct Seqlist {
	int* a;
	int size;	//有效数据
	int capacity;	//空间容量
}SL;

void SLInit(SL* psl);
void SLDestroy(SL* psl);

void SLPrint(SL* psl);

void SLCheckCapacity(SL* psl);

//头尾插入删除
void SLPushBack(SL* psl, SLDataType x);
void SLPushFront(SL* psl, SLDataType x);
void SLPopBack(SL* psl);
void SLPopfront(SL* psl);

//任意下标位置插入和删除
void SLInsert(SL* psl, int pos, SLDataType x);
void SLErase(SL* psl, int pos);

int SLFind(SL* psl, SLDataType x);