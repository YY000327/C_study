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
}

void LTPushBack(LTNode* phead, LTDataType x) {
	assert(phead);
	LTNode* tail = phead->prev;
	LTNode* newnode = CreatLTNode(x);

	// phead		tail newnode
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;

}

void LTPopBack(LTNode* phead) {
	assert(phead);
	assert(phead->next != phead);
	LTNode* tail = phead->prev;
	LTNode* tailPrev = tail->prev;
	free(tail);
	tailPrev->next = phead;
	phead->prev = tailPrev;
}
