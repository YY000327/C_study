#define  _CRT_SECURE_NO_WARNINGS 1

#include "Date.h"
using namespace std;

//
//
//class Date
//{
//public:
//	
//	// 如果用户显式定义了构造函数，编译器将不再生成
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//	_year = year;
//	_month = month;
//	_day = day;
//	}
//
//
//	//// d1 = d3;
//	//Date& operator=(const Date& d) {
//	//	if (this != &d)
//	//	{
//	//		_year = d._year;
//	//		_month = d._month;
//	//		_day = d._day;
//	//	}
//	//	return *this;
//	//}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
////operator = 我们不写，编译器会生成默认的operator=
//// 跟拷贝构造的行为类似，内置类型值拷贝，自定义类型调用他的赋值
////跟拷贝构造的行为类似，默认的operator = 内置类型值拷贝
//// Date MyQueue 可以不写，默认生成operator=就可以用
////stack必须自己实现operator=，实现深拷贝
//
//int main()
//{
//	Date d1(2023, 10, 24);
//	Date d2(2022, 1, 1);
//
//	// 一个已经存在的对象去拷贝初始化另一个对象
//	Date d3(d1);
//
//	//两个已经存在的对象拷贝
//	d2 = d1 = d3;
//
//	d1 = d1;
//
//	return 0;
//}

//void TestDate1()
//{
//	Date d1(2023,12,1);
//	d1.Print();
//
//	Date d2 = d1 - 100;
//	d2.Print();
//
//	Date ret = d2 + 100;
//	ret.Print();
//}

//void TestDate2()
//{
//	Date d1(2023, 12, 1);
//	d1.Print();
//
//	Date d2 = d1 - 100;
//	d2.Print();
//
//
//	//语法设计，无法逻辑闭环，那么这时就只能特殊处理
//	//特殊处理
//	++d1;
//	d1.operator++();
//	d1.Print();
//
//
//	d1++;
//	d1.operator++(10);
//	d1.operator++(10);
//	d1.Print();
//}
void TestDate3()
{
	Date d1(2023, 12, 01);
	d1.Print();


	Date d2(2024, 2, 10);
	d2.Print();

	cout << d2 - d1 << endl;
}

int main()
{

	TestDate3();

	return 0;
}
