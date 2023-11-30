#define  _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <assert.h>
using namespace std;

//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(const Date& dd)
//	{
//		_year = dd._year;
//		_month = dd._month;
//		_day = dd._day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day <<endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};

class Stack
{
public:
	Stack(size_t capacity = 3)
	{
		cout << "Stack(size_t capacity = 3)" << endl;
		_a = (int*)malloc(sizeof(int) * capacity);
		if (nullptr == _a)
		{
			perror("malloc����ռ�ʧ��!!!");
			return;
		}
		_capacity = capacity;
		_top = 0;
	}

	//��Ҫ��������
	Stack(const Stack& stt)
	{
		cout << "Stack(Stack& stt)" << endl;

		//���
		_a = (int* )malloc(sizeof(int) * stt._capacity);
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);


		}
		
		memcpy(_a, stt._a, sizeof(int) * stt._top);
		_top = stt._top;
		_capacity = stt._capacity;


	}
	//�ڶ����������ڽ�����ʱ���Զ�������������
	~Stack()
	{
		free(_a);
		_capacity = 0;
		_a = nullptr;
	}

private:

	int* _a;
	int _capacity;
	int _top;
};

class MyQueue
{

	Stack _pushst;
	Stack _popst;
	int _size = 1;
};


//// ǳ����
//void func1(Date d)
//{
//	d.Print();
//}
//void func2(Stack st)
//{
//	
//}

//int main() {
//	//Date �� MyQueue Ĭ�����ɿ����Ϳ�����
//	// 1. �������ͳ�Ա���ֵ����
//	// 2. �Զ������ͳ�Ա���������Ա�Ŀ�������
//	// 
//	// Stack��Ҫ�Լ�д�������죬������
//	// ��Ϊ�ռ���Ҫ�Լ��
//	// ˳��������������ȵȵ��࣬����Ҫ���
//	// �Լ����ռ䶼��������Ҫ���
//	//
//
//	//Date d1(2023, 10, 22);
//	//func1(d1);
//	//Date d2(d1);
//
//
//	//Stack st1;
//	//func2(st1);
//	//Stack st2(st1);
//
//	MyQueue q1;
//	MyQueue q2(q1);
//	return 0;
//}

//Stack func2()
//{
//	Stack st;
//
//	return st;
//}
//
//int main()
//{
//	func2();
//
//	return 0;
//
//}

///////////////////////////////////////////////////////////////////////////////

//
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(const Date& dd)
//	{
//		_year = dd._year;
//		_month = dd._month;
//		_day = dd._day;
//	}
//
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//	
//
////private:
//	int _year;
//	int _month;
//	int _day;
//};


//bool Equal(Date x, Date y)
//{
//	return x._year == y._year && x._month == y._month && x._day == y._month;
//}
//bool Greater(Date x, Date y)
//{
//	if (x._year > y._year)
//	{
//		return true;
//	}
//	else if (x._year == y._year && x._month > x._month) {
//		return true;
//	}
//	else if (x._year == y._year && x._month == x._month && x._day > x._day)
//	{
//		return true;
//	}
//
//	return false;
//}

//bool operator==(Date x, Date y)
//{
//	return x._year == y._year && x._month == y._month && x._day == y._month;
//}
//bool operator>(Date x, Date y)
//{
//	if (x._year > y._year)
//	{
//		return true;
//	}
//	else if (x._year == y._year && x._month > x._month) {
//		return true;
//	}
//	else if (x._year == y._year && x._month == x._month && x._day > x._day)
//	{
//		return true;
//	}
//
//	return false;
//}

//bool operator==(const Date& x, const Date& y)
//{
//	return x._year == y._year && x._month == y._month && x._day == y._month;
//}
//bool operator>(const Date& x, const Date& y)
//{
//	if (x._year > y._year)
//	{
//		return true;
//	}
//	else if (x._year == y._year && x._month > x._month) {
//		return true;
//	}
//	else if (x._year == y._year && x._month == x._month && x._day > x._day)
//	{
//		return true;
//	}
//
//	return false;
//}

//int main() {
//	Date d1;
//	Date d2(2023, 10, 22);
//	//d1 == d2;
//	//d1 > d2;
//	//Equal(d1, d2);
//	
//	//��������أ��Զ������Ϳ���ֱ��ʹ�������
//	//�������أ��������������ͬ��ͬ������
//	// ����֮��û�й�ϵ
//	//cout << operator==(d1, d2) << endl;
//	//cout << operator>(d1, d2) << endl;
//
//
//	cout << (d1 > d2) << endl;//operator>(d1,d2)
//	cout << (d1 == d2) << endl;//operator==(d1,d2)
//
//	bool ret1 = d1 > d2;
//	bool ret2 = d1 == d2;
//
//
//
//	//Greater(d1, d2);
//
//
//	
//
//	// �������Ͷ������ֱ���ø��������
//	// �����Լ����壬����ֱ��ת����ָ��
//	//�Զ������Ͳ���
//	int x = 1, y = 2;
//	x > y;
//	x == y;
//
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////////

class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	Date(const Date& dd)
	{
		_year = dd._year;
		_month = dd._month;
		_day = dd._day;
	}

	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}



	bool operator==(const Date& y)
	{
		return _year == y._year && _month == y._month && _day == y._month;
	}
	bool operator>(const Date& y)
	{
		if (_year > y._year)
		{
			return true;
		}
		else if (_year == y._year && _month > y._month) {
			return true;
		}
		else if (_year == y._year && _month == y._month && _day > y._day)
		{
			return true;
		}

		return false;
	}
	//d1-d2
	int operator-(const Date& d) {
		//...
		return 0;
	}
	int GetMonthDay(int year, int month)
	{
		assert(year >= 1 && month >= 1 && month <= 12);
		int monthArray[13] = { 0, 31, 28,31,30,31,30,31,31,30,31,30,31 };

		if (month == 2 && (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			return 29;
		return monthArray[month];


	}
	// d1 + 100
	//���÷��أ������ڴ���һ���ռ�
	Date& operator+=(int day) {
		_day += day;
		while (_day > GetMonthDay(_year, _month)) {
			_day -= GetMonthDay(_year, _month);
			++_month;
			if (_month == 13)
			{
				_year++;
				_month = 1;

			}
		}

		return *this;
	}
	//����ʹ�����÷���
	//Date operator+(int day) {
	//	Date tmp(*this);

	//	tmp._day += day;
	//	while (tmp._day > GetMonthDay(tmp._year, tmp._month)) {
	//		tmp._day -= GetMonthDay(tmp._year, tmp._month);
	//		++tmp._month;
	//		if (tmp._month == 13)
	//		{
	//			tmp._year++;
	//			tmp._month = 1;

	//		}
	//	}

	//	return tmp;
	//}

	Date operator+(int day) {
		Date tmp(*this);

		tmp += day;


		return tmp;
	}


private:
	int _year;
	int _month;
	int _day;
};


int main() {
	Date d1;
	Date d2(2023, 10, 22);


	bool ret1 = d1 > d2;//d1.operator>(d2) -> d1.operator>(&d1,d2)
	bool ret2 = d1 == d2;//d1.operator==(d2) -> d1.operator==(&d1,d2)

	d1.operator>(d2);

	//һ��������Щ���������Ҫ������������û������
	//������Ϳ���ʵ��,û������
	/*d1 + d2;
	d1 - d2;
	d1 * d2;*/

	d2 += 50;
	d2.Print();

	Date ret = d1 + 50;
	ret.Print();




	return 0;
}