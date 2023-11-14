#define _CRT_SECURE_NO_WARNINGS 1

#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;

typedef struct Seqlist {
	int* a;
	int size;	//��Ч����
	int capacity;	//�ռ�����
}SL;

void SLInit(SL* psl);
void SLDestroy(SL* psl);

void SLPrint(SL* psl);

void SLCheckCapacity(SL* psl);

//ͷβ����ɾ��
void SLPushBack(SL* psl, SLDataType x);
void SLPushFront(SL* psl, SLDataType x);
void SLPopBack(SL* psl);
void SLPopfront(SL* psl);

//�����±�λ�ò����ɾ��
void SLInsert(SL* psl, int pos, SLDataType x);
void SLErase(SL* psl, int pos);

int SLFind(SL* psl, SLDataType x);