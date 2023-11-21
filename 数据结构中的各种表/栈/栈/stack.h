#pragma once

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>


typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;		// ��ʶջ��λ�õ�
	int capacity;
}ST;

void STInit(ST* pst);
void STDestroy(ST* pst);

// ջ������ɾ��
void STPush(ST* pst, STDataType x);
void STPop(ST* pst);
STDataType STTop(ST* pst);

bool STEmpty(ST* pst);
int STSize(ST* pst);
