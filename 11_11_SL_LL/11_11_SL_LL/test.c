#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

//void Test1()
//{
//	SLNode* plist = NULL;
//	SLTPushBack(&plist, 1);
//
//	SLTPushBack(&plist, 2);
//	SLTPushBack(&plist, 3);
//	SLTPushBack(&plist, 4);
//	SLTPushFront(&plist, 0);
//	SLTPrint(plist);
//	
//	//SLNode* pos = SLFind(plist, 3);
//
//
//
//
//	//SLTPrint(plist);
//}


//
//void Test2()
//{
//	SLNode* plist = NULL;
//	SLTInsert(&plist, NULL, 1);
//	SLTPushBack(&plist, 2);
//	SLTPushBack(&plist, 3);
//	SLTPushBack(&plist, 4);
//	SLTPrint(plist);
//
//	SLNode* pos = SLTFind(plist, 1);
//	SLTInsert(&plist, pos, 40);
//
//	pos = SLTFind(plist, 2);
//	SLTInsert(&plist, pos, 30);
//
//	//pos = SLTFind(plist, 200);
//	SLTInsert(&plist, pos, 30);
//
//
//	SLTPrint(plist);
//}


void Test3()
{
	SLNode* plist = NULL;
	//SLTInsert(&plist, NULL, 1);
	//SLTPushBack(&plist, 2);
	//SLTPushBack(&plist, 3);
	//SLTPushBack(&plist, 4);
	//SLTPrint(plist);

	//SLNode* pos = SLTFind(plist, 1);
	//SLTErase(&plist, pos);
	//SLTPrint(plist);

	//
	////SLTInsert(&plist, pos, 40);

	////pos = SLTFind(plist, 2);
	////SLTErase(&plist, pos);

	//pos = SLTFind(plist, 1);
	//SLTErase(&plist, pos);

	SLTPrint(plist);
	////pos = SLTFind(plist, 200);
	//SLTInsert(&plist, pos, 30);

	

	//SLTPrint(plist);
}


int main() {

	Test3();
	return 0;
}