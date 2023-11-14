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
		SLDataType* tmp = (SLDataType*)realloc(psl->a, sizeof(SLDataType) * newCapacity);//����ռ��ǿգ�reallocҲ���Կ�һ���µĿռ�
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

	//Ų������
	while (end >= 0) {
		psl->a[end + 1] = psl->a[end];
		--end;
	}
	psl->a[0] = x;
	psl->size++;
}
void SLPopBack(SL* psl) {
	assert(psl);


	//����ļ��
	//if (psl->size == 0) {
	//	return;
	//}

	//�����ļ��
	assert(psl->size > 0);
	//psl->a[psl->size - 1] = -1;//����-1�Ѿ����������д���ˣ����ܸı�����
	psl->size--; //���ı�sizeʱ��������0��ʱ��size��������������������ݻ��-1��ʼ���������ݴ���

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

//�໭ͼ
//дһ������������һ��������һ��
//һ��һ����ӡ

//ע��pos���±�
//���posѡ���size��ͬ��λ�ã��͵���β��
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
	assert(pos >= 0 && pos < psl->size);//size��λ��ָ��գ�����ɾ����û������
	//Ų������
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