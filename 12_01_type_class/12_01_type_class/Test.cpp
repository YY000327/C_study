#define  _CRT_SECURE_NO_WARNINGS 1

#include "Date.h"
using namespace std;


//void TestDate1()
//{
//	Date d1(2023, 10, 31);
//	Date d2(2023, 11, 30);
//
//
//	//d1.print;
//	cout << d1 << d2 << endl;
//
//	cin >> d1 >> d2;
//
//	cout << d1 << d2 << endl;
//
//
//
//
//	//d1 << cout;
//}
////
////struct A
////{
////	int* _p;
////	int _a;
////
////};
////
////int main()
////{
////
////	int i = 0;
////	A aa1;
////	aa1._p = &i;
////	//cout << aa1.*_p << endl;
////	cout << *(aa1._p) << endl;
////
////
////
////	//TestDate1();
////
////	return 0;
////}
//
//int main()
//{
//	// const对象和非const对象都可以调用const成员函数
//	const Date d1(2023,10, 31);
//	
//	d1.Print();
//
//	Date d2(2023, 12, 1);
//	d2.Print();
//
//	d1 < d2;
//	d2 < d1;
//
//	cout << &d1 << endl;
//	cout << &d2 << endl;
//
//
//	return 0;
//}

//class A
//{
//public:
//    A(int a)
//        :_a(a)
//    {
//        cout << "A(int a = 0)" << endl;
//    }
//private:
//    int _a;
//};
//
//
//namespace ly
//{
//    class Date
//    {
//    public:
//        //Date(int year, int month, int day)
//        //{
//        //    //函数体内初始化
//        //    _year = year;
//        //    _month = month;
//        //    _day = day;
//        //    _ref = year;
//        //    _n = 1;
//        //}
//
//        //Date(int year, int month, int day)
//        //    :_year(year)
//        //    , _month(month)
//        //    , _day(day)
//        //    ,_ref(year)
//        //    ,_n (1)
//        //
//        //{
//        //     //初始化列表
//        //}
//
//         Date(int year, int month, int day)
//
//            :_ref(year)
//            ,_n (1)
//            ,_aa(10)
//        
//        {
//             //剩下3个成员没有初始化列表显示写出来定义
//             //但是他会定义，只是内置类型默认给的是随机值
//             //如果是自定义成员会去调用他的默认构造函数
//             _year = year;
//            _month = month;
//             _day = day;
//             //初始化列表
//        }
//
//
//
//
//    private:
//        //声明
//        int _year;//缺省值
//        int _month;
//        int _day;
//        
//        A _aa; //自定义类型成员(且该类没有默认构造函数时)
//
//        int& _ref;//引用
//        const int _n; //const
//    };
//}
//
//class Stack
//{
//public:
//    Stack(int n = 4)
//        : _a((int*)malloc(sizeof(int)*n))
//        ,_top (0)
//        ,_capacity(0)
//
//    {
//        if (_a == nullptr)
//        {
//            perror("mnalloc");
//            exit(-1);
//        }
//        memset(_a, 0, sizeof(int) * n);
//        //...
//        cout << "Stack (int n = 4)" << endl;
//    }
//
//    int* _a;
//    int _top;
//    int _capacity;
//};
//
//// 初始化列表解决的问题：
//// 1. 必须在定义的地方显示初始化 引用 const 没有默认构造自定义成员
//// 2. 有些自定义成员想要显示初始化，自己控制
//// 尽量使用初始化列表
//// 构造函数能不能只要初始化列表，不要函数初始化
//// 不能，因为有些初始化或者检查的工作初始化列表也不能全部搞定
////80-100%初始化列表搞定，还有需要用函数题的他们可以混着用
//
//class MyQueue
//{
//public:
//
//
//private:
//    Stack _s1;
//    Stack _s2;
//
//    int _size = 0;
//};
//
//int main()
//{
//    //定义：对象整体定义
//    //每个成员在什么地方定义，在初始化列表定义
//    ly::Date d1();
//
//    MyQueue mq;
//    
//    return 0;
//
//}


//  成员变量在类中声明次序就是其在初始化列表中的初始化顺序，与其在初始化列表中的先后次序无关
// 建议声明顺序和初始化列表顺序保持一直，避免出现理解问题


class A
{
public:
    A(int a)
        :_a1(a)
        , _a2(_a1)
    {}

    void Print() {
        cout << _a1 << " " << _a2 << endl;
    }
private:
    int _a2;
    int _a1;
};
int main() {
    A aa(1);
    aa.Print();
}
