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
//	// const����ͷ�const���󶼿��Ե���const��Ա����
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
//        //    //�������ڳ�ʼ��
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
//        //     //��ʼ���б�
//        //}
//
//         Date(int year, int month, int day)
//
//            :_ref(year)
//            ,_n (1)
//            ,_aa(10)
//        
//        {
//             //ʣ��3����Աû�г�ʼ���б���ʾд��������
//             //�������ᶨ�壬ֻ����������Ĭ�ϸ��������ֵ
//             //������Զ����Ա��ȥ��������Ĭ�Ϲ��캯��
//             _year = year;
//            _month = month;
//             _day = day;
//             //��ʼ���б�
//        }
//
//
//
//
//    private:
//        //����
//        int _year;//ȱʡֵ
//        int _month;
//        int _day;
//        
//        A _aa; //�Զ������ͳ�Ա(�Ҹ���û��Ĭ�Ϲ��캯��ʱ)
//
//        int& _ref;//����
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
//// ��ʼ���б��������⣺
//// 1. �����ڶ���ĵط���ʾ��ʼ�� ���� const û��Ĭ�Ϲ����Զ����Ա
//// 2. ��Щ�Զ����Ա��Ҫ��ʾ��ʼ�����Լ�����
//// ����ʹ�ó�ʼ���б�
//// ���캯���ܲ���ֻҪ��ʼ���б���Ҫ������ʼ��
//// ���ܣ���Ϊ��Щ��ʼ�����߼��Ĺ�����ʼ���б�Ҳ����ȫ���㶨
////80-100%��ʼ���б�㶨��������Ҫ�ú���������ǿ��Ի�����
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
//    //���壺�������嶨��
//    //ÿ����Ա��ʲô�ط����壬�ڳ�ʼ���б���
//    ly::Date d1();
//
//    MyQueue mq;
//    
//    return 0;
//
//}


//  ��Ա������������������������ڳ�ʼ���б��еĳ�ʼ��˳�������ڳ�ʼ���б��е��Ⱥ�����޹�
// ��������˳��ͳ�ʼ���б�˳�򱣳�һֱ����������������


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
