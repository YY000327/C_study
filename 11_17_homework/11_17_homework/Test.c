#define  _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

int main() {

	SListNode* plist = NULL;

	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushFront(&plist, 0);
	SListPopBack(&plist);

	SListPopFront(&plist);

	SListNode* pos = SListFind(plist, 3);
	SListInsertAfter(pos, 4);
	pos = SListFind(plist, 1);
	SListEraseAfter(pos);
	pos = SListFind(plist, 3);
	SLTInsert(&plist, pos, 1);

	SLTErase(&plist, pos);


	SListPrint(plist);

	SLTDestroy(&plist);


	return 0;
}