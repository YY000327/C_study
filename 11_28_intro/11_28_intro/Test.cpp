#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//void Func(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//}
//
//int main()
//{
//	Func();
//	Func(1);
//	Func(1, 2);
//	Func(1, 2,3);
//
//
//	return 0;
//}

//半缺省，（缺省值只能从右往左给，必须连续给
//不能定义和声明都给一个缺省参数
//也不能只给定义
//只能声明给
//void Func(int a , int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//}
//
//int main()
//{
//	Func(1);
//	Func(1, 2);
//	Func(1, 2, 3);
//
//
//	return 0;
//}


// 1、参数类型不同 （类型不同，个数不同）返回值可同也可以不同
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}
//
////构成重载
//void f()
//{
//	cout << "f()" << endl;
//}
////void f(int a = 0)
////{
//// cout << "f(int a)" << endl;
////}
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}
//
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}

#include "Func.h"


//int main() {
//
//	f(1, 'x');
//	f('y', 2);
//
//
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = a;
//
//	int& c = a;
//	int& d = a;
//	int& e = c;
//
//	cout << &a << endl;
//	cout << &c << endl;
//	cout << &d << endl;
//	cout << &e << endl;
//
//
//	return 0;
//}

//传参数
void Swap(int* left, int* right) {
	int tmp = *left;
	*left = *right;
	*right = tmp;
}

void Swap(int& left, int& right) {
	int tmp = left;
	left = right;
	right = tmp;
}

typedef struct SListNode
{
	struct SListNode* next;
	int val;

}SLTNode, *PSLTNode;
//void SListPushBack(SLTNode* phead, int x)
//{
//	if (phead == NULL)
//	{
//		//
//	}
//	else {
//		//找尾结点，再连接newnode
//		// tail->next = newnode
//	}
//}

void SListPushBack(PSLTNode& phead, int x)
{
	if (phead == NULL)
	{
		//
	}
	else {
		//找尾结点，再连接newnode
		// tail->next = newnode
	}
}

int main()
{
	int a = 0, b = 2;
	Swap(&a, &b);
	Swap(a, b);

	PSLTNode plist = NULL;
	SListPushBack(plist, 1);
	SListPushBack(plist, 2);
	SListPushBack(plist, 3);

	return 0;
}