#define  _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

void STInit(ST* pst) {
	pst->a = NULL;
	pst->top = 0;
	pst->capacity = 0;

}
void STDestroy(ST* pst) {
	assert(pst);
	free(pst->a);
	pst->top = 0;
	pst->capacity = 0;

}

// Õ»¶¥²åÈëÉ¾³ý
void STPush(ST* pst, STDataType x) {
	assert(pst);
	if (pst->top == pst->capacity) {
		int newcapacity = pst->capacity == 0 ? 4 : pst->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(pst->a, sizeof(STDataType) * newcapacity);
		if (tmp == NULL) {
			perror("realloc failed");
			return;
		}
		pst->a = tmp;
		pst->capacity = newcapacity;

	}
	pst->a[pst->top] = x;
	pst->top++;
}
//Î²É¾£¬Õ»¶¥É¾³ý
void STPop(ST* pst) {
	assert(pst);
	assert(pst->top > 0);
	pst->top--;
}
STDataType STTop(ST* pst) {
	assert(pst);
	assert(pst->top > 0);

	return pst->a[pst->top-1];
}

bool STEmpty(ST* pst) {
	assert(pst);
	return pst->top == 0;
}
int STSize(ST* pst) {
	assert(pst);
	return pst->top;
}