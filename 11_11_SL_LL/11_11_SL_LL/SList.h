#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLNDataType;

typedef struct SListNode {
	SLNDataType val;
	struct SListNode* next;
	//结构体不能嵌套结构体，这里的指针是指向下一个结点的

}SLNode;

void SLTPrint(SLNode* phead);
void SLTPushBack(SLNode** pphead, SLNDataType x);
void SLTPushFront(SLNode** pphead, SLNDataType x);

void SLTPopBack(SLNode** pphead);
void SLTPopFront(SLNode** pphead);

SLNode* SLTFind(SLNode* pphead, SLNDataType x);

//在pos的前面插入

void SLTInsert(SLNode** pphead,SLNode* pos, SLNDataType x);

//删除pos位置
SLNode* SLTFind(SLNode* phead, SLNDataType x);

//删除节点
void SLTErase(SLNode** pphead, SLNode* pos);


//摧毁SLT
SLNode* SLTDestroy(SLNode** pphead);

//在后pos后加入
//后面插入后面删除
void SLTInsertAfter( SLNode* pos, SLNDataType x);

void SLTEraseAfter( SLNode* pos);








