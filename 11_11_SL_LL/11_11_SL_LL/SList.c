#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

void SLTPrint(SLNode* phead) {
	
	SLNode* cur = phead;
	while (cur != NULL) {
		printf("%d->", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}

SLNode* CreateNode(SLNDataType x) {
	SLNode* newnode =(SLNode*) malloc(sizeof(SLNode));
	if (newnode == NULL) {
		perror("malloc fail");
		exit(-1);
	}
	newnode->val = x;
	newnode->next = NULL;
	return newnode;
}

void SLTPushBack(SLNode** pphead, SLNDataType x) {
	assert(pphead);
	SLNode* newnode = CreateNode(x);
	if (*pphead == NULL) {//改变的结构体的指针，所以用结构体的指针的地址
		*pphead = newnode;//但这些变量都是局部变量，
		//这个函数结束就会销毁，哪怕他是指针，存储的是地址，但是是局部变量的地址，所以要在函数内取二级指针
	}
	else {
		SLNode* tail = *pphead;//先找一个尾部的指针，指向开头，往后寻找尾部
		//先要找到最后的结点
		//下面改变的是结构体的成员
		while (tail->next != NULL) {//不能tail！=NULL，是这个tail的地址不是空，但是我们需要的是tail->next的地址不为空
			tail = tail->next;
		}


		tail->next = newnode;
	}

}



void SLTPushFront(SLNode** pphead, SLNDataType x) {
	assert(pphead);
	SLNode* newnode = CreateNode(x);
	
	newnode->next = *pphead;
	*pphead = newnode;

}

void SLTPopBack(SLNode** pphead) {
	assert(pphead);
	//if (*pphead == NULL)
	//	return;

	assert(*pphead);
	if ((*pphead)->next == NULL) {
		free(*pphead);
		*pphead = NULL;
	}
	else {
		SLNode* prev = NULL;
		SLNode* tail = *pphead;//先找一个尾部的指针，指向开头，往后寻找尾部
	//先要找到最后的结点
	//下面改变的是结构体的成员
		while (tail->next != NULL) {//不能tail！=NULL，是这个tail的地址不是空，但是我们需要的是tail->next的地址不为空
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}


void SLTPopBack(SLNode** pphead) {
	//if (*pphead == NULL)
	//	return;

	assert(*pphead);
	if ((*pphead)->next == NULL) {
		free(*pphead);
		*pphead = NULL;
	}
	else {

		SLNode* tail = *pphead;
		while ( tail->next->next != NULL) {
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}


void SLTPopFront(SLNode** pphead) {
	assert(pphead);
	assert(*pphead);
	SLNode* head = (*pphead) ->next;
	free(*pphead);
	(*pphead) = head;


}

SLNode* SLTFind(SLNode* phead, SLNDataType x) {

	SLNode* cur = phead;
	while (cur) {
		if (cur->val == x) {
			return cur;
		}
		else {
			cur = cur->next;
		}
	}

}


void SLTInsert(SLNode** pphead, SLNode* pos, SLNDataType x) {

	//严格限定pos一定是链表里面的一个有效节点
	/*assert(pphead);
	assert(pos);
	assert(*pphead);*/

	//较为宽松
	//要么都是空，要么都不是空
	assert((!pos && !(*pphead))||(pos && *pphead));


	if (*pphead == pos) {
		//头插
		SLTPushFront(pphead, x);
	}
	else {
		SLNode* prev = *pphead;
		while (prev->next != pos) {
			prev = prev->next;
		}
		SLNode* newnode = CreateNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}


void SLTErase(SLNode** pphead, SLNode* pos) {
	assert(pphead);
	assert(pos);
	assert(*pphead);

	if (*pphead == pos) {
		SLTPopFront(pphead);
	}
	else {
		SLNode* prev = *pphead;
		while (prev->next != pos) {
			prev = prev->next;
		}

		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}


}

void SLTInsertAfter(SLNode* pos, SLNDataType x) {
	assert(pos);

	SLNode* newnode = CreatNode(x);
	newnode->next = pos->next;
	pos->next = newnode;

}


void SLTEraseAfter(SLNode* pos) {
	assert(pos->next);
	SLNode* tmp = pos->next;
	pos->next = pos->next->next;
	free(tmp);
	tmp = NULL;
}



SLNode* SLTDestroy(SLNode** pphead) {
	assert(pphead);

	SLNode* cur = pphead;
	while (cur) {
		SLNode* next= cur->next;
		free(cur);
		cur =next;
	}
	*pphead = NULL;
}