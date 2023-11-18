#define  _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

int main() {

	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);
	LTPushBack(plist, 6);

	LTPrint(plist);
	return 0;
}
