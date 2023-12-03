#define  _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;


//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	A(const A& aa)
//		:_a(aa._a)
//	{
//		cout << "A(const A& aa)" << endl;
//	}
//	A& operator=(const A& aa)
//	{
//		cout << "A& operator=(const A& aa)" << endl;
//		if (this != &aa)
//		{
//			_a = aa._a;
//		}
//		return *this;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a;
//};

//void func1(A aa)
//{
//
//}
//int main()
//{
//	A aa1 = 1;
//	const A& aa2 = 2;
//
//	func1(A(3));
//	func1(4);
//
//
//	return 0;
//}
//A func2()
//{
//	A aa;
//	return aa;
//
//}
//A func3()
//{
//	A aa1(1);
//	A aa2 = aa1;
//	A aa3 = aa2;
//	return aa1;
//}
//
//int main()
//{
//	//A ret1 = func2();
//	//func2();
//
//	A ret = func3();
//
//	return 0;
//}

//int main()
//{
//	const char* p1 = "hello world";
//	cout << p1 << endl;
//	char* p2 = (char*)p1;
//	p2[0]++;
//	cout << p2 << endl;
//
//	//const char* pChar3 = "abcd";
//	//字面量
//	return 0;
//}
class A
{
public:
	A(int a = 0)
		: _a(a)
	{
		cout << "A():" << this << endl;
	}
	~A()
	{
		cout << "~A():" << this << endl;
	}
private:
	int _a;
};

struct ListNode
{
	int _val;
	ListNode* _next;
	ListNode(int val)
		:_val(val)
		,_next(nullptr)
	{}
};

//int main()
//{
//	////内置类型的对象申请释放，new和malloc除了用法上，没有区别
//	//int* p1 = new int;
//	//int* p2 = new int[10];
//
//	//int* p3 = new int(1);
//	//int* p4 = new int[10] {1, 2, 3};
//
//	//delete p1;
//	//delete[] p2;
//	//delete p3;
//	//delete[] p4;
//
//	////malloc不方便解决动态申请的自定义类型对象的初始化问题
//	// // new的本质：开空间+调用构造函数初始化
//	////A* p5 = (A*)malloc(sizeof(A));
//
//	A* p6 = new A;
//	A* p7 = new A(1);
//
//	//ListNode* n1 = new ListNode(1);
//	//ListNode* n2 = new ListNode(2);
//	//ListNode* n3 = new ListNode(3);
//	A aa1(1);
//	A aa2(1);
//	A aa3(1);
//
//
//	A* p8 = new A[3]{ aa1,aa2,aa3 };
//	A* p9 = new A[3]{ A(2),A(2),A(2)};
//	A* p10 = new A[3]{ 3,3,3 };
//
//	//析构函数+释放内存空间
//	delete p6;
//	delete[] p10;
//	return 0;
//}

int main()
{
	/*try {*/
		char* p1 = new char[1024 * 1024 * 1024];
		cout << (void*)p1 << endl;


		char* p2 = new char[1024 * 1024 * 1024 ];
		cout << (void*)p2 << endl;
	/*}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}*/
	
	return 0;
}