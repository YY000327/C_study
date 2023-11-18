#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>



typedef int STDataType;

typedef struct Stack {
	STDataType* a;
	STDataType top; //标识栈顶位置
	STDataType capacity;
}ST;


void STInit(ST* pst);

void STDestroy(ST* pst);

//栈顶的插入和删除
void STPush(ST* pst, STDataType x);

void STPop(ST* pst);

STDataType STTop(ST* pst);

bool STEmpty(ST* pst);

int STSize(ST* pst);