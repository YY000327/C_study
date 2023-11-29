#define  _CRT_SECURE_NO_WARNINGS 1
#include "head.h"


//int main()
//{
//	f(10);
//	//func();
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = a;
//	auto c = a;
//	auto d = &a;
//	auto* e = &a;
//	auto& f = a;
//	f++;
//
//	cout << typeid(c).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(a).name() << endl;
//	cout << typeid(e).name() << endl;
//	cout << typeid(d).name() << endl;
//	cout << typeid(f).name() << endl;
//
//
//	
//
//	return 0;
//}

#include <vector>
#include <string>

////void func(auto e)//auto 不能作为参数在函数中，也不能作为返回值
////{
////
////}
//
//int main()
//{
//	vector<string> v;
//	//vector<string>::iterator it = v.begin();
//	auto it = v.begin(); //简化版的方式
//	//auto x;// auto右边必须初始化
//
//	//func(23);
//	return 0;
//}


//auto不能声明数组

//int main() {
//
//    int array[] = { 1, 2, 3, 4, 5 };
//    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//        array[i] *= 2;
//    for (int* p = array; p < array + sizeof(array) / sizeof(array[0]); ++p)
//        cout << *p << endl;
//
//    //依次取数组中数组赋值给e
//    //自动判断结束，自动++往后走
//    for (int& e : array)
//    {
//        e++;
//        cout << e << " ";
//
//    }
//    cout << endl;
//
//
//    for (auto e : array)
//    {
//        cout << e << " ";
//
//    }
//    cout << endl;
//
//    return 0;
//}

//void TestFor(int arry[])
//{
//	for (auto e : array)//不能用这个，因为这个必须是一个完整的数组，不能是数组的指针
//		{
//		    cout << e << " ";
//		
//		}
//		cout << endl;
//}
//
//int main() {
//	int a[] = { 1,2,3,4,5 };
//	TestFor(a);
//	return 0;
//}

//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//
//
//int main()
//{
//	//int* ptr = NULL;
//	int* ptr = nullptr;
//
//	f(0);
//	//f(NULL);
//	f(nullptr);
//
//	return 0;
//}

//struct Stack
//{
//	int* a;
//	int top;
//	int capacity;
//};
//void StackInit(struct Stack* ps);
//void StackPush(struct Stack* ps, int x);

//c++兼容c语言struct的所有用法
//struct同时进行了升级
// 1. 类名就是类型， Stack就是类型，不需要加struct
// 2. 类里面定义函数
struct Stack
{
	int* a;
	int top;
	int capacity;

	void Init()
	{
		a = 0;
		top = 0;
		capacity = 0;
	}

	void Push(int x)
	{
		//...
	}
};
struct ListNode
{
	ListNode* next;
	int val;
};
//如果不写，默认是私有的
//可以让类的访问更加规范

//
//int main()
//{
//	Stack1 s2;
//	s2.Init();
//	s2.Push(1);
//	s2.Push(2);
//	s2.Push(3);
//	s2.Push(4);
//	s2.Push(5);
//	s2.Empty();
//
//
//	//s2.a = 0;//不能访问私有
//
//
//	return 0;
//}

//花括号里的都是域
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	/*int year_
//	int m_year
//	int mYear;*/
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d;
//	d.Init(2023, 11, 29);
//
//	/*int x = 0;
//	while (x > 0)
//	{
//		int n = 0;
//
//	}
//	n++;*/
//	//这个是一个更小的域
//
//	return 0;
//}

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
////private:
//
//	// 声明，判定是否开了空间
//	/*int year_
//	int m_year
//	int mYear;*/
//	int _year;
//	int _month;
//	int _day;
//};
//
//class A
//{
//private:
//	char _ch;
//	int _a;
//};
//
//class B
//{
//
//};
//
//class C
//{
//public:
//	void f()
//	{
//
//	};
//
//};
//// 类     和对象 1v多
//// 设计图	房子
////
//int main()
//{
//	Date d1;
//	Date d2;
//	Date d3;
//	//类的大小不考虑成员指针，只考虑大小
//	//考虑内存对齐
//	d1.Init(2023, 10, 7);
//	d2.Init(2023, 10, 7);
//
//	d1._year++;
//	d2._year++;
//
//	cout << sizeof(d1) << endl;
//	cout << sizeof(d2) << endl;
//	A a;
//	cout << sizeof(A) << endl;
//
//	B b1;
//	B b2;
//	
//	// 无成员的类，对象大小开一个字节，这个字节不储存有效数据
//	// 标识定义的对象存在过
//	cout << sizeof(B) << endl;
//	cout << &b1 << endl;
//	cout << &b2 << endl;
//	cout << sizeof(C) << endl;
//
//
//
//
//
//
//	return 0;
// }


class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Print() 
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	//void Print(Date* this)

	//{
	//	cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
	//}
private:

		// 声明，判定是否开了空间
		/*int year_
		int m_year
		int mYear;*/
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	Date d2;
	//类的大小不考虑成员指针，只考虑大小
	//考虑内存对齐
	d1.Init(2023, 10, 07);
	d2.Init(2023, 11, 29);

	
	d1.Print();
	d2.Print();
	//不能显示写this相关实参和形参
	//d1.Print(&d1);
	//d2.Print(&d2);





	return 0;
}