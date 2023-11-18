#define  _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

LTNode* CreatLTNode(LTDataType x) {
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL) {
		perror("malloc fail");
		exit(-1);
	}

	newnode->val = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;

}


LTNode* LTInit() {
	LTNode* phead = CreatLTNode(-1);
	phead->next = phead;
	phead->prev = phead;
}


void LTPrint(LTNode* phead) {
	assert(phead);
	printf("ÉÚ±øÎ»: ");
	LTNode* cur = phead->next;

	while (cur != phead) {
		printf("%d<=>", cur->val);
		cur = cur->next;
	}
	printf("\n");
}

void LTPushBack(LTNode* phead, LTDataType x) {
	//assert(phead);
	//LTNode* tail = phead->prev;
	//LTNode* newnode = CreatLTNode(x);

	//// phead		tail newnode
	//tail->next = newnode;
	//newnode->prev = tail;
	//newnode->next = phead;
	//phead->prev = newnode;

	LTInsert(phead, x);
}

void LTPopBack(LTNode* phead) {
	//assert(phead);
	//assert(phead->next != phead);
	//LTNode* tail = phead->prev;
	//LTNode* tailPrev = tail->prev;
	//free(tail);
	//tailPrev->next = phead;
	//phead->prev = tailPrev;

	LTErase(phead->prev);
}


//void LTPushFront(LTNode* phead, LTDataType x) {
//	assert(phead);
//	LTNode* newnode = CreatLTNode(x);
//
//	newnode->next = phead->next;
//	phead->next->prev = newnode;
//
//	phead->next = newnode;
//	newnode->prev = phead;
//}
//


void LTPushFront(LTNode* phead, LTDataType x) {
	//assert(phead);
	//LTNode* newnode = CreatLTNode(x);
	//LTNode* first = phead->next;

	//phead->next = newnode;
	//newnode->next = first;
	//newnode->prev = phead;
	//first->prev = newnode;
	LTInsert(phead->prev, x);

}
void LTPopFront(LTNode* phead) {
	//assert(phead);

	//assert(phead->next != phead);
	//LTNode* first = phead->next;
	//LTNode* second = first->next;
	//phead->next = second;
	//second->prev = phead;
	//free(first);
	//first = NULL;
	LTErase(phead->next);

}

LTNode* LTFind(LTNode* phead, LTDataType x) {
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead) {
		if (cur->val == x) {
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void LTInsert(LTNode* pos, LTDataType x) {
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* newnode = CreatLTNode(x);

	//posprev newnode pos
	posPrev->next = newnode;
	newnode->prev = posPrev;
	newnode->next = pos;
	pos->prev = newnode;

}

void LTErase(LTNode* pos) {
	assert(pos);

	LTNode* posNext = pos->next;
	LTNode* posPrev = pos->prev;
	posPrev->next = posNext;
	posNext->prev = posPrev;
	
	free(pos);
	pos = NULL;

}


void LTDestroy(LTNode* phead) {
	assert(phead);


	LTNode* cur = phead->next;
	while (cur != phead) {
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
	phead = NULL;
}
