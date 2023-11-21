#define  _CRT_SECURE_NO_WARNINGS 1

#include "SQlist.h"

void SQInit(SQ* psl) {
	assert(psl->a != NULL);

	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}

void SQDestroy(SQ* psl) {
	assert(psl);
	if (psl->a != NULL) {
		psl->a = NULL;
		free(psl->a);
		psl->size = 0;
		psl->capacity = 0;

	}
}
void SQPrint(SQ* psl) {
	assert(psl);
	for (int i = 0; i < psl->size; i++) {
		printf("%d ", psl->a[i]);
	}
	printf("\n");

}


void SQCheckCapacity(SQ* psl) {
	assert(psl);//¼ì²épslµÄÖ¸Õë
	if (psl->size == psl->capacity) {
		int newcapacity = psl->capacity == 0 ? 4 : psl->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(psl->a, sizeof(SLDataType)* newcapacity);
		if (tmp == NULL) {
			perror("realloc failed");
			return;
		}
		psl->a = tmp;
		psl->capacity = newcapacity;
	}
		
}


void SQPushBack(SQ* psl, SLDataType x) {
	assert(psl);

	SQCheckCapacity(psl);

	psl->a[psl->size] = x;
	psl->size++;

}
void SQPushFront(SQ* psl, SLDataType x) {
	assert(psl);
	SQCheckCapacity(psl);

	int end = psl->size - 1;
	while (end >= 0) {
		psl->a[end + 1] = psl->a[end];
		end--;
	}
	psl->a[0] = x;
	psl->size++;
}

void SQPopBack(SQ* psl) {
	assert(psl);
	assert(psl->size > 0);

	psl->size--;
}
void SQPopFront(SQ* psl) {
	assert(psl);
	assert(psl->size > 0);
	int begin = 1;

	while (begin < psl->size) {
		psl->a[begin - 1] = psl->a[begin];
		begin++;
	}
	psl->size--;
}

void SQInsert(SQ* psl, int pos, SLDataType x) {
	assert(psl);

	SQCheckCapacity(psl);
	
	int end = psl->size-1;
	while (end < pos) {
		psl->a[end + 1] = psl->a[end];
		end--;
	}
	psl->a[pos] = x;
	psl->size++;

}
void SQErase(SQ* psl, int pos) {
	assert(psl);
	assert(psl->size > 1);
	int begin = pos+1;
	while (begin < psl->size) {
		psl->a[begin - 1] = psl->a[begin];
		begin++;
	}
	psl->size--;
}
