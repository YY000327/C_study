#define  _CRT_SECURE_NO_WARNINGS 1

#include "heap.h"

void HeapInit(HP* php) {
	assert(php);
	php->a = NULL;
	php->size = 0;
	php->capacity = 0;


}
void AdjustUp(HPDataType* a, int child) {
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (parent - 1) / 2;
		}
		else {
			break;
		}
	}

}
void AdjustDown(HPDataType* a, int n, int parent) {
	int child = parent * 2 + 1;
	while (child < n) {

		//找出小的那个孩子
		if ((child + 1 < n) && (a[child + 1] < a[child])) {
			++child;
		}
		if (a[child] < a[parent]) {
			Swap(&a[child], &a[parent]);
			//继续往下调整
			parent = child;
			child = parent * 2 + 1;
		}
		else {
			break;
		}
	}
}

void HeapInitArray(HP* php, int* a, int n) {
	assert(php);
	assert(a);
	php->a =(HPDataType*) malloc(sizeof(HPDataType)*n);
	if (php->a == NULL) {
		perror("realloc failed");
		exit(-1);
	}
	php->size = 0;
	php->capacity = 0;

	memcpy(php->a, a, sizeof(HPDataType) * n);

	//建堆
	for (int i = 0; i < n; i++) {
		AdjustUp(php->a, i);
	}
	
}


void HeapDestroy(HP* php) {
	assert(php);

	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;

}



void HeapPush(HP* php, HPDataType x) {
	assert(php);
	if (php->size == php->capacity) {

		int newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * newcapacity);
		if (tmp == NULL) {
			perror("realloc failed");
			exit(-1);
		}
		php->capacity = newcapacity;
		php->a = tmp;
	}

	php->a[php->size] = x;
	php->size++;

	AdjustUp(php->a, php->size - 1);
}


void HeadPrint(HP* php) {
	assert(php);

	for (size_t i = 0; i < php->size; i++) {
		printf("%d ", php->a[i]);
	}
	printf("\n");
}


void Swap(HPDataType* p1, HPDataType* p2) {
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}



void HeadPop(HP* php) {

	assert(php);
	assert(php->size > 0);

	Swap(&php->a[0], &php->a[php->size - 1]);
	--php->size;

	AdjustDown(php->a, php->size, 0);

}

HPDataType HeadTop(HP* php) {
	assert(php);
	assert(php->size > 0);

	return php->a[0];
}

bool HeadEmpty(HP* php) {
	assert(php);

	return php->size == 0;

}