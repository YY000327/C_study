#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLNDataType;

typedef struct SListNode {
	SLNDataType val;
	struct SListNode* next;
	//�ṹ�岻��Ƕ�׽ṹ�壬�����ָ����ָ����һ������

}SLNode;

void SLTPrint(SLNode* phead);
void SLTPushBack(SLNode** pphead, SLNDataType x);
void SLTPushFront(SLNode** pphead, SLNDataType x);

void SLTPopBack(SLNode** pphead);
void SLTPopFront(SLNode** pphead);

SLNode* SLTFind(SLNode* pphead, SLNDataType x);

//��pos��ǰ�����

void SLTInsert(SLNode** pphead,SLNode* pos, SLNDataType x);

//ɾ��posλ��
SLNode* SLTFind(SLNode* phead, SLNDataType x);

//ɾ���ڵ�
void SLTErase(SLNode** pphead, SLNode* pos);


//�ݻ�SLT
SLNode* SLTDestroy(SLNode** pphead);

//�ں�pos�����
//����������ɾ��
void SLTInsertAfter( SLNode* pos, SLNDataType x);

void SLTEraseAfter( SLNode* pos);








