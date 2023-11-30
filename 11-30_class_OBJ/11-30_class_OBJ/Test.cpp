#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//不能显示的写实参和形参
//	//void Print(Date* const this)
//	void Print()
//	{
//		cout << this << endl;
//		//但是可以在类里面显示的使用
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;     // 年
//	int _month;    // 月
//	int _day;      // 日
//};
//int main()
//{
//	Date d1;
//	Date d2;
//	d1.Print(); //d1.Print(&d1)
//	d2.Print();
//	return 0;
//}

//没有错误
//class A
//{
//public:
//    void PrintA()
//    {
//        cout << "print()" << endl;
//    }
//private:
//    int _a;
//};
//
//int main()
//{
//    A* p = nullptr;
//    //成员函数的地址不在对象中
//    //成员变量的地址
//    p->PrintA();//取地址
//    return 0;
//}


//
////会崩溃
//class A
//{
//public:
//    void PrintA()
//    {
//        cout << _a << endl;
//    }
//private:
//    int _a;
//};
//
//int main()
//{
//    A* p = nullptr;
//    //成员函数的地址不在对象中
//    //成员变量是存在对象中的
//    p->PrintA();
//    return 0;
//}
//


//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
////int main()
////{
////	//忘记初始化?
////	Date d1;
////	d1.Print();
////	Date d2;
////	d2.Init(2022, 7, 6);
////	d2.Print();
////	return 0;
////}
//
//
//int main()
//{
//	//忘记初始化?
//	Date d1;
//	d1.Print();
//	Date d2;
//	d2.Init(2022, 7, 6);
//	d2.Print();
//	return 0;
//}
//

///////////////////////////////////////////////////////////////////////////////////////////////



//class Date
//{
//public:
//
//	//构成函数重载，但是无参调用存在歧义，不能同时存在
//	//Date() {
//	//	_year = 1;
//	//	_month = 1;
//	//	_day = 1;
//	//}
//
//	//Date(int year, int month, int day) {
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	Date(int year =1, int month = 1, int day = 1) {
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//void Init(int year, int month, int day)
//	//{
//
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////Date f() 函数声明
//int main()
//{
//	Date d1;
//	d1.Print();
//
//	Date d2(2023,10,19);
//	d2.Print();
//
//	Date d3(2023, 10);
//	d3.Print();
//	return 0;
//}


//class Date
//{
//public:
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	//默认生成的构造函数
//	//处理自定义（会去调用成员的默认构造函数）
//	//内置类型不确定，建议当作不处理
//	
//private:
//	//c++11支持，声明的时候给缺省值
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//};

////Date f() 函数声明
//int main()
//{
//	Date d1;
//	d1.Print();
//
//	return 0;
//}




//class Stack
//{
//public:
//	Stack(size_t capacity = 3)
//	{
//		cout << "Stack(size_t capacity = 3)" << endl;
//		_a = (int*)malloc(sizeof(int) * capacity);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败!!!");
//			return;
//		}
//		_capacity = capacity;
//		_top = 0;
//	}
//
//private:
//	int* _a ;
//	int _capacity;
//	int _top;
//};

// 两个栈实现一个队列
//class MyQueue
//{
//private:
//	Stack _pushst;
//	Stack _popst;
//	int _size = 1;
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//
//	Stack st1;
//
//	MyQueue mq;
//
//	return 0;
//}

//
//class Date
//{
//public:
//		Date(int year = 1 , int month = 1, int day = 1 ) {
//			_year = year;
//			_month = month;
//			_day = day;
//		}	
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	//c++11支持，声明的时候给缺省值
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//};
//
//// 1. 我们不写编译默认生成的那个构造函数，叫默认构造
//// 2. 无参构造函数也可以叫默认构造
//// 3. 全缺省也可以叫默认构造
////可以不传参就调用构造，叫默认构造
////这三个函数不能同时存在，只能存在一个
//
//int main()
//{
//	Date d1;
//	d1.Print();
//	Date d2(2023 );
//	d2.Print();
//
//
//
//	return 0;
//}


class Date
{
public:
	Date(int year = 1 , int month = 1, int day = 1 ) {
		_year = year;
		_month = month;
		_day = day;
	}		
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	~Date() 
	{
		//date严格来说不需要写析构
		cout << "~Date" << endl;
	}
private:
	//c++11支持，声明的时候给缺省值
	int _year = 1;
	int _month = 1;
	int _day = 1;
};



class Stack
{
public:
	Stack(size_t capacity = 3)
	{
		cout << "Stack(size_t capacity = 3)" << endl;
		_a = (int*)malloc(sizeof(int) * capacity);
		if (nullptr == _a)
		{
			perror("malloc申请空间失败!!!");
			return;
		}
		_capacity = capacity;
		_top = 0;
	}
	//在对象生命周期结束的时候，自动调用析构函数
	~Stack()
	{
		cout << "~Satck()" << endl;
		free(_a);
		_capacity = 0;
		_a = nullptr;
	}

private:
	
	int* _a ;
	int _capacity;
	int _top;
};


class MyQueue
{
	//默认生成的析构函数，行为跟构造类似
	//内置类型成员不做处理
	//自定义类型成员会去调用他的析构函数
private:
	Stack _pushst;
	Stack _popst;
	int _size = 1;
};

int main()
{
	//Date d1;
	//Stack st1;
	MyQueue mq;

	return 0;
}