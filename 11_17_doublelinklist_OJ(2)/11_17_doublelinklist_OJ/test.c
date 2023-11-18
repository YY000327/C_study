#define  _CRT_SECURE_NO_WARNINGS 1

#include "List.h"
//
//void TestList1() {
//	LTNode* plist = LTInit();
//	LTPushBack(plist, 1);
//	LTPushBack(plist, 2);
//	LTPushBack(plist, 3);
//	LTPushBack(plist, 4);
//	LTPushBack(plist, 5);
//	LTPushBack(plist, 6);
//
//	LTPrint(plist);
//	LTPushFront(plist, 10);
//	LTPrint(plist);
//}
//

//void TestList2() {
//	LTNode* plist = LTInit();
//
//	LTPushFront(plist, 10);
//	LTPushFront(plist, 20);
//	LTPushFront(plist, 30);
//	LTPushFront(plist, 40);
//
//	LTPrint(plist);
//
//	LTPopFront(plist);
//	LTPrint(plist);
//
//	LTPopFront(plist);
//	LTPrint(plist);
//
//	LTPopFront(plist);
//	LTPrint(plist);
//
//	LTPopFront(plist);
//	LTPrint(plist);
//
//	LTPopFront(plist);
//	LTPrint(plist);
//
//}

//void TestList3() {
//	LTNode* plist = LTInit();
//	//	LTNode* plist = LTInit();
//	LTPushBack(plist, 1);
//	LTPushBack(plist, 2);
//	LTPushBack(plist, 3);
//	LTPushBack(plist, 4);
//	LTPushBack(plist, 5);
//	LTPushBack(plist, 6);
//	LTPushFront(plist, 40);
//	
//	LTPrint(plist);
//	LTNode* pos = LTFind(plist, 3);
//	if (pos) {
//		pos->val *= 10;
//	}
//	LTPrint(plist);
//	LTInsert(pos, 3000);
//	LTPrint(plist);
//	
//}
void TestList3() {
	LTNode* plist = LTInit();
	//	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);
	LTPushBack(plist, 6);
	LTPushFront(plist, 40);

	LTPrint(plist);
	LTNode* pos = LTFind(plist,3);
	if (pos) {
		LTErase(pos);
		pos = NULL;
	}
	LTPrint(plist);
	plist = NULL;


}

int main() {
	TestList3();

	return 0;
}
