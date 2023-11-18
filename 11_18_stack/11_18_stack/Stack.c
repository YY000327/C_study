#define  _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void STInit(ST* pst) {
	assert(pst);

	pst->a = NULL;
	pst->capacity = 0;

	//表示top指向栈元素的下一个位置
	pst->top = 0;
	//表示top指向栈顶元素
	//pst->top = -1;

}

void STDestroy(ST* pst) {
	assert(pst);
	free(pst);
	pst->a = NULL;
	pst->top = pst->capacity = 0;

}


//栈顶的插入和删除
void STPush(ST* pst, STDataType x) {
	assert(pst);
	if (pst->top == pst->capacity) {
		int newcapacity = pst->capacity == 0 ? 4 : pst->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(pst->a, sizeof(STDataType) * newcapacity);
		if (tmp == NULL) {
			perror("realloc fail");
			return;
		}
		pst->a = tmp;
		pst->capacity = newcapacity;
	}
	pst->a[pst->top] = x;
	pst->top++;
}

void STPop(ST* pst) {
	assert(pst);
	assert(pst->top > 0);
	pst->top--;

}

STDataType STTop(ST* pst) {
	assert(pst);
	assert(pst->top > 0);
	return pst->a[pst->top - 1];
}

bool STEmpty(ST* pst) {
	assert(pst);
	
	return pst->top == 0;

}

int STSize(ST* pst) {
	assert(pst);

	return pst->top;
}