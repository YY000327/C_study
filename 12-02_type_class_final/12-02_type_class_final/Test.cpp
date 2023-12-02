#define  _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>
#include <list>
using namespace std;

////namespace ly
////{
////	int count = 0;
////}
////
////
////class A
////{
////public:
////	A() { ++ly::count; }
////	A(const A& t) { ++ly::count; }
////	~A() { ++ly::count; }
////	
////private:
////	
////};
////
////A func()
////{
////	A aa;
////	return aa;
////}
////
////int main()
////{
////	A aa;
////	func();
////
////	cout << ly::count << endl;
////
////	return 0;
////}
//
//
//
//
//class A
//{
//public:
//	A() { ++count; }
//	A(const A& t) { ++count; }
//	~A() {
//		cout << "~A()" << endl;
//		++count; }
//
//	//静态成员函数，特点：没有this指针
//	static int GetCount()
//	{
//		
//		return count;
//	}
//
//private:
//	//声明
//	static int count;
//};
//
////定义
//int A::count = 0;
//
//
//A func()
//{
//	A aa;
//	return aa;
//}
//
//int main()
//{
//	//A aa;
//	//func();
//
//	func();
//	func();
//	func();
//
//	//公有
//	//属于整个类，属于这个类所有对象
//	// 受访问限定符限制
//	//cout << A::count << endl;
//	//cout << aa.count << endl;
//
//	//私有
//	//A aa; //有名对象
//	// //为了调用而创建的，所以要-1
//	//cout << aa.GetCount()-1 << endl;
//
//	//A()这种写法就叫做匿名对象，声明周期只在这一行
//	/*cout << A().GetCount() - 1 << endl;*/
//
//	cout << A::GetCount() << endl;
//
//	// 总结一下：静态成员函数和静态成员变量，本质受限制的全局变量和全局函数
//	//专属这个类，受类域和访问限定符的限制
//
//	return 0;
//}
//
//
//class A
//	{
//	public:
//		A(int a)
//			:_a()
//		{
//
//		}
//		A(int* p) {
//
//		}
//		int _a = 0;
//	};
//
//class Date
//{
//	
//public:
//	Date(int year, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//
//
//int main()
//{
//	A aa1(1);
//	A aa2(2);
//
//	//
//	//内置类型对象 隐式转换成自定义类型对象
//	//能支持这个转换，是有A的int单参数构造函数（支持传一个参数多参数带缺省也可以）支持
//	//不想让隐式转换发生， 构造函数加explicit
//	//显示可以发生
//	A aa3 = (A)3;
//	const A& ra = (A) 3;
//
//	int* p = NULL;
//	A aa4 = p;
//
//	//内置类型 整型和浮点 隐式互相转
//	int i = 0;
//	double d = i;
//	const double& r = i;
//
//
//	//C++ 11
//	//Date d1(2023, 12, 2);
//	//Date d2 = (2023, 11, 3);//逗号表达式
//	//Date d3 = 2023;
//
//	//Date d4 = { 2023, 11, 3 };
//	//const Date&  d5 = { 2023, 11, 3 };
//
//	list<A> lt;
//	//void push_back(const A & aa);
//	A aa1(1);
//	lt.push_back(aa1);
//	lt.push_back(A(2));
//	lt.push_back(3);
//
//	list<Date> lt1;
//	Date d6(2023, 12, 2);
//
//	lt1.push_back(d6);
//
//	lt1.push_back(Date(2023, 12, 2));
//	lt1.push_back({2023,12,2});
//	
//
//	return 0;
//
//}

//class A
//{
//private:
//	int h;
//
//public:
//	// A和B关系
//	// B就是一个普通类，只是受A的类域和访问限定符限制
//	class B // B天生就是A的友元
//	{
//	public:
//		void func()
//		{
//			A aa;
//			//B天生就是A的友元
//			aa.h++;
//		}
//	private:
//		int _b;
//	};
//};
//
//
//int main()
//{
//	cout << sizeof(A) << endl;
//
//	A aa;
//	A::B bb;
//
//	return 0;
//}


//扩展：一些构造时的优化
class A
{
public:
	A(int a = 0)
		:_a(a)
	{
		cout << "A(int a)" << endl;
	}
	A(const A& aa)
		:_a(aa._a)
	{
		cout << "A(const A& aa)" << endl;
	}
	A& operator=(const A& aa)
	{
		cout << "A& operator=(const A& aa)" << endl;
		if (this != &aa)
		{
			_a = aa._a;
		}
		return *this;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
private:
	int _a;
};
//
//int main()
//{
//	//A aa1 = 1;
//	// 1. 先用1构造一个临时对象
//	// 2. 再用临时对象拷贝构造aa1
//	// 3. 同一个表达式中， 连续构造+构造/ 构造+拷贝构造 / 拷贝构造+拷贝构造会合二为一
//	// a. 构造+构造 -> 构造
//	// b. 构造+拷贝构造 -> 构造
//	// c. 拷贝构造+拷贝构造 ->拷贝构造
//	A aa1 = 1;
//	const A& aa2 = 2;
//	return 0;
//}

//void func(A aa1)
//{
//
//}

A func()
{
	A aa;
	return aa;
}
int main()
{
	////构造
	//A aa;
	////拷贝构造
	//func(aa);

	////构造+拷贝构造 -> 构造
	//func(A(2));

	//构造+拷贝构造 -> 构造
	//func(3);

	A aa1 = func();

	//A aa1;
	//aa1 = func();


	return 0;
}




//int main()
//{
//	A aa1(1);//构造
//
//	//一个已经存在的对象拷贝初始化另一个要创建的对象，就是拷贝构造
//	//他们俩是等价的
//	A aa2(aa1);//拷贝构造
//	A aa3 = aa1; //拷贝构造 or 赋值拷贝
//
//	//两个已经存在的对象拷贝，赋值拷贝
//	aa2 = aa3;
//
//	return 0;
//}