#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>
#include <time.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

void Swap(HPDataType* p1, HPDataType* p2);
void HeadPrint(HP* php);
void HeapInit(HP* php);
void HeapInitArray(HP* php, int* a, int n);

void HeapDestroy(HP* php);
void HeapPush(HP* php, HPDataType x);
void HeadPop(HP* php);
HPDataType HeadTop(HP* php);
bool HeadEmpty(HP* php);

void AdjustDown(HPDataType* a, int n, int parent);