#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

//
// 有效括号！！！
// 
//typedef char STDataType;
//
//typedef struct Stack {
//	STDataType* a;
//	int top; //标识栈顶位置
//	int capacity;
//}ST;
//
//
//void STInit(ST* pst);
//
//void STDestroy(ST* pst);
//
////栈顶的插入和删除
//void STPush(ST* pst, STDataType x);
//
//void STPop(ST* pst);
//
//STDataType STTop(ST* pst);
//
//bool STEmpty(ST* pst);
//
//int STSize(ST* pst);
//
//void STInit(ST* pst) {
//	assert(pst);
//
//	pst->a = NULL;
//	pst->capacity = 0;
//
//	//表示top指向栈元素的下一个位置
//	pst->top = 0;
//	//表示top指向栈顶元素
//	//pst->top = -1;
//
//}
//
//
//void STDestroy(ST* pst) {
//	assert(pst);
//	free(pst->a);
//	pst->a = NULL;
//	pst->top = pst->capacity = 0;
//
//}
//
//
////栈顶的插入和删除
//void STPush(ST* pst, STDataType x) {
//	assert(pst);
//	if (pst->top == pst->capacity) {
//		int newcapacity = pst->capacity == 0 ? 4 : pst->capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(pst->a, sizeof(STDataType) * newcapacity);
//		if (tmp == NULL) {
//			perror("realloc fail");
//			return;
//		}
//		pst->a = tmp;
//		pst->capacity = newcapacity;
//	}
//	pst->a[pst->top] = x;
//	pst->top++;
//}
//
//void STPop(ST* pst) {
//	assert(pst);
//	assert(pst->top > 0);
//	pst->top--;
//
//}
//
//STDataType STTop(ST* pst) {
//	assert(pst);
//	assert(pst->top > 0);
//	return pst->a[pst->top - 1];
//}
//
//bool STEmpty(ST* pst) {
//	assert(pst);
//
//	return pst->top == 0;
//
//}
//
//int STSize(ST* pst) {
//	assert(pst);
//
//	return pst->top;
//}
//
//
//bool isValid(char* s) {
//	ST st;
//	STInit(&st);
//	while (*s) {
//		if (*s == '(' || *s == '{' || *s == '[')
//		{
//			STPush(&st, *s);
//		}
//		else
//		{
//			if (STEmpty(&st)) {
//				STDestroy(&st);
//				return false;
//			}
//			char top = STTop(&st);
//			STPop(&st);
//			if ((*s == ']' && top != '[')
//				|| (*s == '}' && top != '{')
//				|| (*s == ')' && top != '('))
//			{
//				STDestroy(&st);
//				return false;
//			}
//
//
//
//		}
//		++s;
//
//
//	}
//	bool ret = STEmpty(&st);
//	STDestroy(&st);
//
//	return ret;
//
//
//}


////用队列实现栈
//
//
//typedef int QDataType;
//
//typedef struct QueueNode
//{
//	QDataType val;
//	struct QueueNode* next;
//}QNode;
//
//
//typedef struct Queue {
//	QNode* phead;
//	QNode* ptail;
//	int size;
//}Queue;
//
//void QueueInit(Queue* pq);
//void QueueDetroy(Queue* pq);
//
//
//void QueuePush(Queue* pq, QDataType x);
//
//void QueuePop(Queue* pq);
//
//QDataType QueueFront(Queue* pq);
//QDataType QueueBack(Queue* pq);
//bool QueueEmpty(Queue* pq);
//int QueueSize(Queue* pq);
//
//
//void QueueInit(Queue* pq) {
//	assert(pq);
//	pq->phead = pq->ptail = NULL;
//	pq->size = 0;
//
//}
//void QueueDetroy(Queue* pq) {
//	assert(pq);
//
//	QNode* cur = pq->phead;
//	while (cur)
//	{
//		QNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	pq->phead = pq->ptail = NULL;
//	pq->size = 0;
//}
//
//
//void QueuePush(Queue* pq, QDataType x) {
//	assert(pq);
//
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	if (newnode == NULL) {
//		perror("malloc fail");
//		return;
//	}
//	newnode->val = x;
//	newnode->next = NULL;
//	if (pq->ptail == NULL) {
//		pq->ptail = pq->phead = newnode;
//	}
//	else {
//		pq->ptail->next = newnode;
//		pq->ptail = newnode;
//	}
//	pq->size++;
//}
//
//void QueuePop(Queue* pq) {
//	assert(pq);
//	assert(pq->phead);
//	QNode* del = pq->phead;
//	pq->phead = pq->phead->next;
//	free(del);
//	del = NULL;
//	if (pq->phead == NULL)
//		pq->ptail = NULL;
//
//	pq->size--;
//}
//
//QDataType QueueFront(Queue* pq) {
//	assert(pq);
//	assert(pq->phead);
//
//	return pq->phead->val;
//}
//QDataType QueueBack(Queue* pq) {
//	assert(pq);
//	assert(pq->ptail);
//
//	return pq->ptail->val;
//}
//bool QueueEmpty(Queue* pq) {
//	assert(pq);
//
//	return pq->phead == NULL;
//
//}
//int QueueSize(Queue* pq) {
//	assert(pq);
//
//	return pq->size;
//}
//
//
//
//
//
//typedef struct {
//	Queue q1;
//	Queue q2;
//
//} MyStack;
//
//
//MyStack* myStackCreate() {
//	MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
//	QueueInit(&pst->q1);
//	QueueInit(&pst->q1);
//
//	return pst;
//
//}
//
//void myStackPush(MyStack* obj, int x) {
//	if (!QueueEmpty(&obj->q1)) {
//		QueuePush(&obj->q1,x);
//	}
//	else {
//		QueuePush(&obj->q2, x);
//	}
//
//}
//
//int myStackPop(MyStack* obj) {
//	Queue* nonempty = &obj->q1, *emppty = &obj->q2;
//	if (QueueEmpty(&obj->q2)) {
//		nonempty = &obj->q2;
//		emppty = &obj->q1;
//	}
//	while (QueueSize(nonempty) > 1) {
//		QueuePush(emppty, QueueFront(nonempty));
//		QueuePop(nonempty);
//	}
//	int top = QueueFront(nonempty);
//	QueuePop(nonempty);
//	return top;
//}
//
//int myStackTop(MyStack* obj) {
//
//	if (!QueueEmpty(&obj->q1)) {
//		return QueueBack(&obj->q1);
//	}
//	else {
//		return QueueBack(&obj->q2);
//
//	}
//}
//
//
//bool myStackEmpty(MyStack* obj) {
//
//	return QueueEmpty(&obj->q1) || QueueEmpty(&obj->q2);
//
//}
//
//void myStackFree(MyStack* obj) {
//	QueueDetroy(&obj->q1);
//	QueueDetroy(&obj->q2);
//	free(obj);
//
//
//}

//用栈实现队列

typedef int STDataType;

typedef struct Stack {
	STDataType* a;
	int top; //标识栈顶位置
	int capacity;
}ST;


void STInit(ST* pst);

void STDestroy(ST* pst);

//栈顶的插入和删除
void STPush(ST* pst, STDataType x);

void STPop(ST* pst);

STDataType STTop(ST* pst);

bool STEmpty(ST* pst);

int STSize(ST* pst);

void STInit(ST* pst) {
	assert(pst);

	pst->a = NULL;
	pst->capacity = 0;

	//表示top指向栈元素的下一个位置
	pst->top = 0;
	//表示top指向栈顶元素
	//pst->top = -1;

}


void STDestroy(ST* pst) {
	assert(pst);
	free(pst->a);
	pst->a = NULL;
	pst->top = pst->capacity = 0;

}


//栈顶的插入和删除
void STPush(ST* pst, STDataType x) {
	assert(pst);
	if (pst->top == pst->capacity) {
		int newcapacity = pst->capacity == 0 ? 4 : pst->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(pst->a, sizeof(STDataType) * newcapacity);
		if (tmp == NULL) {
			perror("realloc fail");
			return;
		}
		pst->a = tmp;
		pst->capacity = newcapacity;
	}
	pst->a[pst->top] = x;
	pst->top++;
}

void STPop(ST* pst) {
	assert(pst);
	assert(pst->top > 0);
	pst->top--;

}

STDataType STTop(ST* pst) {
	assert(pst);
	assert(pst->top > 0);
	return pst->a[pst->top - 1];
}

bool STEmpty(ST* pst) {
	assert(pst);

	return pst->top == 0;

}

int STSize(ST* pst) {
	assert(pst);

	return pst->top;
}

typedef struct {
	ST Sin;
	ST Sout;
} MyQueue;


MyQueue* myQueueCreate() {
	MyQueue* pq = (MyQueue*)malloc(sizeof(MyQueue));
	STInit(&pq->Sin);
	STInit(&pq->Sout);

	return pq;

}

void myQueuePush(MyQueue* obj, int x) {
	while (!STEmpty(&obj->Sout)) {
		STPush(&obj->Sin, STTop(&obj->Sout));
		STPop(&obj->Sout);
	}
	STPush(&obj->Sin, x);

}

int myQueuePop(MyQueue* obj) {
	while (!STEmpty(&obj->Sin)) {
		STPush(&obj->Sout, STTop(&obj->Sin));
		STPop(&obj->Sin);

	}
	int top = STTop(&obj->Sout);
	STPop(&obj->Sout);
	return top;
}

int myQueuePeek(MyQueue* obj) {
	while (!STEmpty(&obj->Sin)) {
		STPush(&obj->Sout, STTop(&obj->Sin));
		STPop(&obj->Sin);

	}
	int top = STTop(&obj->Sout);
	return top;
}

bool myQueueEmpty(MyQueue* obj) {
	return STEmpty(&obj->Sin) && STEmpty(&obj->Sout);

}

void myQueueFree(MyQueue* obj) {
	STDestroy(&obj->Sin);
	STDestroy(&obj->Sout);
	free(obj);

}

int main() {
	MyQueue* pq = myQueueCreate();

	myQueuePush(pq, 1);
	myQueuePush(pq, 2);
	myQueuePush(pq, 3);
	myQueuePush(pq, 4);
	myQueuePush(pq, 5);
	myQueuePop(pq);
	//while (!STEmpty(&pq->Sout))
	//	{
	//		printf("%d ", STTop(&pq->Sout));
	//	}
	//printf("\n");
	myQueuePush(pq, 6);
	myQueuePush(pq, 7);
	myQueuePush(pq, 8);
	myQueuePush(pq, 9);
	while (!STEmpty(&pq->Sin))
	{
		printf("%d ", STTop(&pq->Sin));
		STPop(&pq->Sin);
	}

	return 0;
}