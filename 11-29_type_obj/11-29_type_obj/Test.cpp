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

////void func(auto e)//auto ������Ϊ�����ں����У�Ҳ������Ϊ����ֵ
////{
////
////}
//
//int main()
//{
//	vector<string> v;
//	//vector<string>::iterator it = v.begin();
//	auto it = v.begin(); //�򻯰�ķ�ʽ
//	//auto x;// auto�ұ߱����ʼ��
//
//	//func(23);
//	return 0;
//}


//auto������������

//int main() {
//
//    int array[] = { 1, 2, 3, 4, 5 };
//    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//        array[i] *= 2;
//    for (int* p = array; p < array + sizeof(array) / sizeof(array[0]); ++p)
//        cout << *p << endl;
//
//    //����ȡ���������鸳ֵ��e
//    //�Զ��жϽ������Զ�++������
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
//	for (auto e : array)//�������������Ϊ���������һ�����������飬�����������ָ��
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

//c++����c����struct�������÷�
//structͬʱ����������
// 1. �����������ͣ� Stack�������ͣ�����Ҫ��struct
// 2. �����涨�庯��
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
//�����д��Ĭ����˽�е�
//��������ķ��ʸ��ӹ淶

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
//	//s2.a = 0;//���ܷ���˽��
//
//
//	return 0;
//}

//��������Ķ�����
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
//	//�����һ����С����
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
//	// �������ж��Ƿ��˿ռ�
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
//// ��     �Ͷ��� 1v��
//// ���ͼ	����
////
//int main()
//{
//	Date d1;
//	Date d2;
//	Date d3;
//	//��Ĵ�С�����ǳ�Աָ�룬ֻ���Ǵ�С
//	//�����ڴ����
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
//	// �޳�Ա���࣬�����С��һ���ֽڣ�����ֽڲ�������Ч����
//	// ��ʶ����Ķ�����ڹ�
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

		// �������ж��Ƿ��˿ռ�
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
	//��Ĵ�С�����ǳ�Աָ�룬ֻ���Ǵ�С
	//�����ڴ����
	d1.Init(2023, 10, 07);
	d2.Init(2023, 11, 29);

	
	d1.Print();
	d2.Print();
	//������ʾдthis���ʵ�κ��β�
	//d1.Print(&d1);
	//d2.Print(&d2);





	return 0;
}