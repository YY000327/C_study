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
//	//������ʾ��дʵ�κ��β�
//	//void Print(Date* const this)
//	void Print()
//	{
//		cout << this << endl;
//		//���ǿ�������������ʾ��ʹ��
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;     // ��
//	int _month;    // ��
//	int _day;      // ��
//};
//int main()
//{
//	Date d1;
//	Date d2;
//	d1.Print(); //d1.Print(&d1)
//	d2.Print();
//	return 0;
//}

//û�д���
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
//    //��Ա�����ĵ�ַ���ڶ�����
//    //��Ա�����ĵ�ַ
//    p->PrintA();//ȡ��ַ
//    return 0;
//}


//
////�����
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
//    //��Ա�����ĵ�ַ���ڶ�����
//    //��Ա�����Ǵ��ڶ����е�
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
////	//���ǳ�ʼ��?
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
//	//���ǳ�ʼ��?
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
//	//���ɺ������أ������޲ε��ô������壬����ͬʱ����
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
////Date f() ��������
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
//	//Ĭ�����ɵĹ��캯��
//	//�����Զ��壨��ȥ���ó�Ա��Ĭ�Ϲ��캯����
//	//�������Ͳ�ȷ�������鵱��������
//	
//private:
//	//c++11֧�֣�������ʱ���ȱʡֵ
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//};

////Date f() ��������
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
//			perror("malloc����ռ�ʧ��!!!");
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

// ����ջʵ��һ������
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
//	//c++11֧�֣�������ʱ���ȱʡֵ
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//};
//
//// 1. ���ǲ�д����Ĭ�����ɵ��Ǹ����캯������Ĭ�Ϲ���
//// 2. �޲ι��캯��Ҳ���Խ�Ĭ�Ϲ���
//// 3. ȫȱʡҲ���Խ�Ĭ�Ϲ���
////���Բ����ξ͵��ù��죬��Ĭ�Ϲ���
////��������������ͬʱ���ڣ�ֻ�ܴ���һ��
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
		//date�ϸ���˵����Ҫд����
		cout << "~Date" << endl;
	}
private:
	//c++11֧�֣�������ʱ���ȱʡֵ
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
			perror("malloc����ռ�ʧ��!!!");
			return;
		}
		_capacity = capacity;
		_top = 0;
	}
	//�ڶ����������ڽ�����ʱ���Զ�������������
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
	//Ĭ�����ɵ�������������Ϊ����������
	//�������ͳ�Ա��������
	//�Զ������ͳ�Ա��ȥ����������������
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