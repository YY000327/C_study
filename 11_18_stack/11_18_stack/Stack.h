#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>



typedef int STDataType;

typedef struct Stack {
	STDataType* a;
	STDataType top; //��ʶջ��λ��
	STDataType capacity;
}ST;


void STInit(ST* pst);

void STDestroy(ST* pst);

//ջ���Ĳ����ɾ��
void STPush(ST* pst, STDataType x);

void STPop(ST* pst);

STDataType STTop(ST* pst);

bool STEmpty(ST* pst);

int STSize(ST* pst);