#define  _CRT_SECURE_NO_WARNINGS 1

#include "Date.h"
using namespace std;

//
//
//class Date
//{
//public:
//	
//	// ����û���ʽ�����˹��캯��������������������
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
////operator = ���ǲ�д��������������Ĭ�ϵ�operator=
//// �������������Ϊ���ƣ���������ֵ�������Զ������͵������ĸ�ֵ
////�������������Ϊ���ƣ�Ĭ�ϵ�operator = ��������ֵ����
//// Date MyQueue ���Բ�д��Ĭ������operator=�Ϳ�����
////stack�����Լ�ʵ��operator=��ʵ�����
//
//int main()
//{
//	Date d1(2023, 10, 24);
//	Date d2(2022, 1, 1);
//
//	// һ���Ѿ����ڵĶ���ȥ������ʼ����һ������
//	Date d3(d1);
//
//	//�����Ѿ����ڵĶ��󿽱�
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
//	//�﷨��ƣ��޷��߼��ջ�����ô��ʱ��ֻ�����⴦��
//	//���⴦��
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
