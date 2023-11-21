#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;

typedef struct SQList {
	int* a;
	int size;
	int capacity;

}SQ;

void SQInit(SQ* psl);

void SQDestroy(SQ* psl);
void SQPrint(SQ* psl);

void SQCheckCapacity(SQ* psl);

void SQPushBack(SQ* psl, SLDataType x);
void SQPushFront(SQ* psl, SLDataType x);
void SQPopBack(SQ* psl);
void SQPopFront(SQ* psl);

void SQInsert(SQ* psl,int pos,  SLDataType x);
void SQErase(SQ* psl, int pos);



