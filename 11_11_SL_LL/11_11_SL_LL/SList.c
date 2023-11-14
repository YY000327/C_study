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
	if (*pphead == NULL) {//�ı�Ľṹ���ָ�룬�����ýṹ���ָ��ĵ�ַ
		*pphead = newnode;//����Щ�������Ǿֲ�������
		//������������ͻ����٣���������ָ�룬�洢���ǵ�ַ�������Ǿֲ������ĵ�ַ������Ҫ�ں�����ȡ����ָ��
	}
	else {
		SLNode* tail = *pphead;//����һ��β����ָ�룬ָ��ͷ������Ѱ��β��
		//��Ҫ�ҵ����Ľ��
		//����ı���ǽṹ��ĳ�Ա
		while (tail->next != NULL) {//����tail��=NULL�������tail�ĵ�ַ���ǿգ�����������Ҫ����tail->next�ĵ�ַ��Ϊ��
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
		SLNode* tail = *pphead;//����һ��β����ָ�룬ָ��ͷ������Ѱ��β��
	//��Ҫ�ҵ����Ľ��
	//����ı���ǽṹ��ĳ�Ա
		while (tail->next != NULL) {//����tail��=NULL�������tail�ĵ�ַ���ǿգ�����������Ҫ����tail->next�ĵ�ַ��Ϊ��
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

	//�ϸ��޶�posһ�������������һ����Ч�ڵ�
	/*assert(pphead);
	assert(pos);
	assert(*pphead);*/

	//��Ϊ����
	//Ҫô���ǿգ�Ҫô�����ǿ�
	assert((!pos && !(*pphead))||(pos && *pphead));


	if (*pphead == pos) {
		//ͷ��
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