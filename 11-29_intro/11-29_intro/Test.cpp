#define  _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <assert.h>
using namespace std;

// 1. 做参数
//void Swap(int& a, int& b) {
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//
//
//int main() {
//	int a = 0;
//	int& b = a;
//	a++;
//	b++;
//	int x = 0;
//	int y = 1;
//	
//	Swap(x, y);
//
//	return 0;
//}


//int main() {
//
//	int a = 0;
//	//int& b;//引用必须初始化
//
//	int& c = a;
//	int d = 1;
//
//	// c变成d的别名？ 还是d赋值给c？
//	c = d;
//	return 0;
//}


//#include <time.h>
//struct A { int a[10000]; };
//void TestFunc1(A a) {}
//void TestFunc2(A& aa) {}
//void TestRefAndValue()
//{
//	A a;
//	// 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//
//int main()
//{
//	TestRefAndValue();
//	return 0;
//}

////引用返回
//int& Count()
//{
//	static int n = 0;
//	n++;
//	// ...
//	return n;
//}

////传值返回
//int Count()
//{
//	int n = 0;
//	n++;
//	// ...
//	return n;
//}



//int& Count()
//{
//	static int n = 0;
//	n++;
//	// ...
//	return n;
//}
//int main()
//{
//	int ret = Count();
//	cout << ret << endl;
//
//	return 0;
//}

//int& Count(int n = 0)
//{
//	int n = 0;
//	n++;
//	// ...
//	return n;
//}
//int main()
//{
//	int& ret = Count();
//	cout << ret << endl;
//	cout << ret << endl;
//	cout << ret << endl;
//	cout << ret << endl;
//	cout << ret << endl;
//
//
//
//	return 0;
//}

//出了函数作用域，返回对象就销毁了，不能用引用返回，否则结果是不确定的
//int& Add(int a, int b)
//{
//    int c = a + b;
//    return c;
//}
//int main()
//{
//    int& ret = Add(1, 2);
//    cout << "Add(1, 2) is :" << ret << endl;
//
//    Add(3, 4);
//    cout << "Add(3, 4) is :" << ret << endl;
//    return 0;
//}

//void func1()
//{
//
//	int c = 0;
//	cout << &c << endl;
//}
//
//
//void func2()
//{
//
//	int c = 0;
//	cout << &c << endl;
//}
//
//
//int main() {
//	//func();
//	//func();
//	func1();
//	func2();
//	//不同函数调用的还是一样的栈帧空间
//	return 0;
//}

//int& Add(int a, int b)
//{
//    static int c;
//    c = a + b;
//    return c;
//}
//int& Add(int a, int b)
//{
//    static int c = a + b;
//    return c;
//}
//int main()
//{
//    int& ret = Add(1, 2);
//    cout << "Add(1, 2) is :" << ret << endl;
//
//    Add(3, 4);
//    cout << "Add(3, 4) is :" << ret << endl;
//    return 0;
//}

//typedef struct SeqList
//{
//	int a[100];
//	int size;
//}SL;
//
//void SLModify(SL* ps, int pos, int x)
//{
//	assert(ps);
//	assert(pos < ps->size);
//	ps->a[pos] = x;
//}
//// 引用做返回值：可以修改返回对象
//int& SLat(SL* ps, int pos)
//{
//	assert(ps);
//	assert(pos < ps->size);
//
//	return ps->a[pos];
//
//}
//
//int main()
//{
//	SL s;
//
//	SLat(&s, 3) = 10;
//	//每个位置的值++
//	for (int i = 0; i < s.size; i++) {
//		SLat(&s, i)++;
//	}
//	
//	return 0;
//}


//常引用
//int main()
//{
//	//权限不能放大
//	const int a = 10;
//	int b = a;
//	//int& b = a;
//	const int& b = a;
//
//	//权限可以缩小
//	int c = 20;
//	const int& d = c;
//
//	const int& e = 10;
//	//int& e = 10;//不可以，权限放大了
//
//	int i = 1;
//	double j = i;
//
//	const double& rj = i;
//
//	return 0;
//}





//int main() {
//	//int a = 10;
//	////语法上b是不开空间
//	//int& b = a;
//
//	////语法，ptr开了空间
//	//int* ptr = &a;
//
//	char ch = 'x';
//	char& r = ch;
//	cout << sizeof(r) << endl;
//
//	return 0;
//}

//#define ADD(x,y)( x + y)
////宏的缺点
//// 1. 容易出错，语法细节多
//// 2. 不能调试
//// 3. 没有类型安全的检查
//
//int main()
//{
//	int ret = ADD(2, 3) * 5;
//
//	int a = 1, b = 2;
//	int ret2 = ADD(a | b, a & b);// (a| b + a&b)
//
//	return 0;
//}

//enum const inline 代替宏
//enum const -> 宏常量
// inline -> 宏函数


//可以调试
//效率高
inline int ADD(int a, int b)
{
	int c = a +  b;
	return c;
}

int main()
{

	//优点：不用建立栈帧，提高效率
	int ret = ADD(1, 2);

	return 0;
}
