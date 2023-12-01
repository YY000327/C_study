#define  _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <assert.h>
using namespace std;


class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1);
	Date(const Date& dd);
	int GetMonthDay(int year, int month);

	void Print() const;

	bool operator==(const Date& y) const;
	bool operator!=(const Date& y)const;

	bool operator>(const Date& y)const;
	bool operator<(const Date& y)const;

	bool operator>=(const Date& y)const;
	bool operator<=(const Date& y)const;

	int operator-(const Date& d) const;

	Date& operator+=(int day) ;
	Date operator+(int day) const;
	Date& operator-=(int day);
	Date operator-(int day)const;

	Date& operator++( );
	Date operator++(int);

	Date& operator--();
	Date operator--(int);

	/*void operator<<(ostream& out);*/

	Date* operator&()
		{
			return this;
		}
		const Date* operator&()const
		{
			return this;
		}

	//友元函数
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);


private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);

//重载操作符必须有一个类类型参数 -> 不能通过重载运算符，改变内置类型的运算规则
//int operator +（int i , int j);
