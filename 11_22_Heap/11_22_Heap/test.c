#define  _CRT_SECURE_NO_WARNINGS 1

#include "heap.h"


//
//int main() {
//	int a[] = { 65, 100, 70, 32, 50, 60 , 12, 423, 23, 21};
//	HP hp;
//	HeapInit(&hp);
//	for (size_t i = 0; i < sizeof(a) / sizeof(int); i++) {
//
//		HeapPush(&hp, a[i]);
//	}
//
//	HeadPrint(&hp);
//
//	int k = 5;
//	while (!HeadEmpty(&hp)&& k--) {
//
//		printf("%d ", HeadTop(&hp));
//		HeadPop(&hp);
//	}
//
//	HeapDestroy(&hp);
//
//	return 0;
//}

//����д����ȱ�㣺
//1. ����һ���ѵ����ݽṹ
//2. �ռ临�Ӷȵ�����
//
//void HeapSort(int* a, int size) {
//	HP hp;
//	HeapInit(&hp);
//	for (size_t i = 0; i < size; i++) {
//
//		HeapPush(&hp, a[i]);
//	}
//
//	//HeadPrint(&hp);
//
//	//int k = 5;
//	int i = 0;
//	while (!HeadEmpty(&hp) /*&& k--*/ ) {
//
//		//printf("%d ", HeadTop(&hp));
//		a[i++] = HeadTop(&hp);
//		HeadPop(&hp);
//	}
//
//	HeapDestroy(&hp);
//}


//����

//void HeapSort(int* a, int size) {
//	//����ѻ���С��
//	//���򽨴��
//	//ջ�������һ��λ�ý���
//	//���������ź���
//	//ʣ�µ��������µ�����ѡ���δ�ģ�������logN
//	//�ϼ���N*logN
//	for (int i = 1; i < size; i++) {
//		AdjustUp(a, i);
//	}
//	int end = size - 1;
//	while (end > 0) {
//		Swap(&a[0], &a[end]);
//		AdjustDown(a, end, 0);
//		--end;
//
//	}
//}
void HeapSort(int* a, int size) {

	for (int i = (size-1-1)/2; i >= 0; i--) {
		AdjustDown(a, size, i);
	}
	int end = size - 1;
	//���µ�������
	//ʱ�临�Ӷ���O��n)
	while (end > 0) {
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;

	}
}

//���򣺽�С��


//int main() {
//	int a[] = { 65, 100, 70, 32, 50, 60 , 12, 423, 23, 21};
//	HeapSort(a, sizeof(a) / sizeof(int));
//
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////////

void PrintTopK(const char* filename, int k)
{
	// 1. ����--��a��ǰk��Ԫ�ؽ���
	FILE* fout = fopen(filename, "r");
	if (fout == NULL) {
		perror("fopen fail");
		return;

	}

	int* minheap = (int*)malloc(sizeof(int) * k);
	if (minheap == NULL) {
		perror("malloc failed");
		return;

	}

	for (int i = 0; i < k; i++) {
		fscanf(fout, "%d", &minheap[i]);
	}

	//����
	// 
	for (int i = (k - 2) / 2; i >= 0; --i) {
		AdjustDown(minheap, k, i);

	}

	int x = 0;
	while (fscanf(fout, "%d", &x) != EOF) {
		if (x > minheap[0]) {

			//�滻
			minheap[0] = x;
			AdjustDown(minheap, k, 0);
		}
	}

	for (int i = 0; i < k; i++) {
		printf("%d ", minheap[i]);
	}
	printf("\n");

	free(minheap);

	fclose(fout);

	
}

// fprintf fscanf

void CreatNDate() {
	int n = 10000000;
	srand(time(0));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL) {
		perror("fopen error");
		return;

	}
	for (size_t i = 0; i < n; ++i) {
		int x = (rand()+i) % 1000000;
		fprintf(fin, "%d\n", x);
	}
	fclose(fin);
}

int main() {
	//CreatNDate();
	PrintTopK("data.txt",5);

	return 0;
}