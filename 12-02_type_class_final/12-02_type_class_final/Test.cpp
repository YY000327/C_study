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
//	//��̬��Ա�������ص㣺û��thisָ��
//	static int GetCount()
//	{
//		
//		return count;
//	}
//
//private:
//	//����
//	static int count;
//};
//
////����
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
//	//����
//	//���������࣬������������ж���
//	// �ܷ����޶�������
//	//cout << A::count << endl;
//	//cout << aa.count << endl;
//
//	//˽��
//	//A aa; //��������
//	// //Ϊ�˵��ö������ģ�����Ҫ-1
//	//cout << aa.GetCount()-1 << endl;
//
//	//A()����д���ͽ�������������������ֻ����һ��
//	/*cout << A().GetCount() - 1 << endl;*/
//
//	cout << A::GetCount() << endl;
//
//	// �ܽ�һ�£���̬��Ա�����;�̬��Ա���������������Ƶ�ȫ�ֱ�����ȫ�ֺ���
//	//ר������࣬������ͷ����޶���������
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
//	//�������Ͷ��� ��ʽת�����Զ������Ͷ���
//	//��֧�����ת��������A��int���������캯����֧�ִ�һ�������������ȱʡҲ���ԣ�֧��
//	//��������ʽת�������� ���캯����explicit
//	//��ʾ���Է���
//	A aa3 = (A)3;
//	const A& ra = (A) 3;
//
//	int* p = NULL;
//	A aa4 = p;
//
//	//�������� ���ͺ͸��� ��ʽ����ת
//	int i = 0;
//	double d = i;
//	const double& r = i;
//
//
//	//C++ 11
//	//Date d1(2023, 12, 2);
//	//Date d2 = (2023, 11, 3);//���ű��ʽ
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
//	// A��B��ϵ
//	// B����һ����ͨ�ֻ࣬����A������ͷ����޶�������
//	class B // B��������A����Ԫ
//	{
//	public:
//		void func()
//		{
//			A aa;
//			//B��������A����Ԫ
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


//��չ��һЩ����ʱ���Ż�
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
//	// 1. ����1����һ����ʱ����
//	// 2. ������ʱ���󿽱�����aa1
//	// 3. ͬһ�����ʽ�У� ��������+����/ ����+�������� / ��������+���������϶�Ϊһ
//	// a. ����+���� -> ����
//	// b. ����+�������� -> ����
//	// c. ��������+�������� ->��������
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
	////����
	//A aa;
	////��������
	//func(aa);

	////����+�������� -> ����
	//func(A(2));

	//����+�������� -> ����
	//func(3);

	A aa1 = func();

	//A aa1;
	//aa1 = func();


	return 0;
}




//int main()
//{
//	A aa1(1);//����
//
//	//һ���Ѿ����ڵĶ��󿽱���ʼ����һ��Ҫ�����Ķ��󣬾��ǿ�������
//	//�������ǵȼ۵�
//	A aa2(aa1);//��������
//	A aa3 = aa1; //�������� or ��ֵ����
//
//	//�����Ѿ����ڵĶ��󿽱�����ֵ����
//	aa2 = aa3;
//
//	return 0;
//}