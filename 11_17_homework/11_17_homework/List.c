#define  _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

SListNode* BuySListNode(SLTDateType x) {
	struct SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL) {
		perror("malloc failed");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SListPrint(SListNode* plist) {
	assert(plist);
	SListNode* cur = plist;
	while (cur != NULL) {
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL");
}

void SListPushBack(SListNode** pplist, SLTDateType x) {
	assert(pplist);
	SListNode* newnode = BuySListNode(x);
	
	if (*pplist == NULL) {
		*pplist = newnode;
	}
	else {
		SListNode* cur = *pplist;
		while (cur->next != NULL) {
			cur = cur->next;
		}
		cur->next = newnode;
	}
}

void SListPushFront(SListNode** pplist, SLTDateType x) {
	assert(pplist);
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}

void SListPopBack(SListNode** pplist) {
	assert(pplist);

	if ((*pplist)->next == NULL) {
		free(*pplist);
		*pplist = NULL;


	}
	else {
		SListNode* tail = *pplist;
		SListNode* prev = NULL;
		while (tail->next != NULL) {
			prev = tail;
			tail = tail->next;

		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}
void SListPopFront(SListNode** pplist) {
	assert(pplist);

	if ((*pplist)->next == NULL) {
		free(*pplist);
		*pplist = NULL;
	}
	else {
		SListNode* next = (*pplist)->next;
		free(*pplist);
		*pplist = next;
	}
}
SListNode* SListFind(SListNode* plist, SLTDateType x) {


	SListNode* cur = plist;


	while (cur) {
		
		if (cur->data == x) {
			return cur;
		}
		else {
			cur = cur->next;
		}
	}
	return NULL;
}


void SListInsertAfter(SListNode* pos, SLTDateType x) {
	assert(pos);
	SListNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
	
}

void SListEraseAfter(SListNode* pos) {
	assert(pos->next);
	SListNode* tmp = pos->next;
	pos->next = pos->next->next;
	free(tmp);
	tmp = NULL;

}

void SLTInsert(SListNode** pplist, SListNode* pos, SLTDateType x) {
	assert(pplist);
	assert(pos);
	assert(*pplist);
	if (*pplist == pos) {
		SListPushFront(pplist, x);
	}
	else {
		SListNode* newnode = BuySListNode(x);
		newnode->next = pos;
		SListNode* prev = *pplist;

		while (prev->next != pos) {
				prev = prev->next;
				
		}
		prev->next = newnode;
			
		
	}
}
void SLTErase(SListNode** pphead, SListNode* pos) {
	assert(pphead);
	assert(pos);

	if ((*pphead) == pos) {
		SListPopFront(pphead);
	}
	else {
		SListNode* prev = *pphead;

		while (prev->next != pos) {
				prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

void SLTDestroy(SListNode** pphead) {
	assert(pphead);
	SListNode* cur = *pphead;

	while (cur) {
		SListNode* next = cur->next;

		free(cur);
		cur = next;
		
	}
	*pphead = NULL;
}