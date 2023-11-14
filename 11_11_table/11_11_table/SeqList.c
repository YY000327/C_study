#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void SLInit(SL* psl) {

	assert(psl->a != NULL);

	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}


void SLDestroy(SL* psl) {
	assert(psl);
	if (psl->a != NULL) {
		free(psl->a);
		psl->a = NULL;
		psl->size = 0;
		psl->capacity = 0;
	}
}

void SLPrint(SL* psl) {
	assert(psl);
	for (int i = 0; i < psl->size; i++) {
		printf("%d ", psl->a[i]);

	}
	printf("\n");
}

void SLCheckCapacity(SL* psl) {
	assert(psl);

	if (psl->size == psl->capacity) {
		int newCapacity = psl->capacity == 0 ? 4 : psl->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(psl->a, sizeof(SLDataType) * newCapacity);//如果空间是空，realloc也可以开一个新的空间
		if (tmp == NULL) {
			perror("realloc fail");
			return;
		}
		psl->a = tmp;
		psl->capacity = newCapacity;
	}
}


void SLPushBack(SL* psl, SLDataType x) {
	assert(psl);

		
	SLCheckCapacity(psl);
	psl->a[psl->size] = x;
	psl->size++;

}
void SLPushFront(SL* psl, SLDataType x) {
	assert(psl);

	SLCheckCapacity(psl);
	int end = psl->size - 1;

	//挪动数据
	while (end >= 0) {
		psl->a[end + 1] = psl->a[end];
		--end;
	}
	psl->a[0] = x;
	psl->size++;
}
void SLPopBack(SL* psl) {
	assert(psl);


	//温柔的检查
	//if (psl->size == 0) {
	//	return;
	//}

	//暴力的检查
	assert(psl->size > 0);
	//psl->a[psl->size - 1] = -1;//但是-1已经把这个数给写死了，不能改变数据
	psl->size--; //光光改变size时，当减到0的时候，size会减到负数，后续加数据会从-1开始，导致数据错误

}
void SLPopfront(SL* psl) {
	assert(psl);


	assert(psl->size > 0);

	int begin = 1;
	while (begin < psl->size) {
		psl->a[begin - 1] = psl->a[begin];
		++begin;
	}
	psl->size--;

}

//多画图
//写一个函数，编译一个，测试一个
//一步一个脚印

//注意pos是下标
//如果pos选择和size相同的位置，就等于尾插
void SLInsert(SL* psl, int pos, SLDataType x) {
	assert(psl);
	assert(pos >= 0 && pos <= psl->size);
	SLCheckCapacity(psl);
	int end = psl->size - 1;
	while (end >= pos) {
		psl->a[end + 1] = psl->a[end];
		--end;
	}
	psl->a[pos] = x;
	psl->size++;


}
void SLErase(SL* psl, int pos) {
	assert(psl);
	assert(pos >= 0 && pos < psl->size);//size的位置指向空，所以删除就没有意义
	//挪动覆盖
	int begin = pos + 1;
	while (begin < psl->size) {
		psl->a[begin - 1] = psl->a[begin];
		++begin;

	}
	psl->size--;


}

int SLFind(SL* psl, SLDataType x) {
	assert(psl);
	for (int i = 0; i < psl->size; i++) {
		if (psl->a[i] == x) {
			return i;
		}
	}
	return -1;
}