#define  _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <assert.h>
using namespace std;

// 1. ������
//void Swap(int& a, int& b) {
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//
//
//int main() {
//	int a = 0;
//	int& b = a;
//	a++;
//	b++;
//	int x = 0;
//	int y = 1;
//	
//	Swap(x, y);
//
//	return 0;
//}


//int main() {
//
//	int a = 0;
//	//int& b;//���ñ����ʼ��
//
//	int& c = a;
//	int d = 1;
//
//	// c���d�ı����� ����d��ֵ��c��
//	c = d;
//	return 0;
//}


//#include <time.h>
//struct A { int a[10000]; };
//void TestFunc1(A a) {}
//void TestFunc2(A& aa) {}
//void TestRefAndValue()
//{
//	A a;
//	// ��ֵ��Ϊ��������
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// ��������Ϊ��������
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// �ֱ���������������н������ʱ��
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//
//int main()
//{
//	TestRefAndValue();
//	return 0;
//}

////���÷���
//int& Count()
//{
//	static int n = 0;
//	n++;
//	// ...
//	return n;
//}

////��ֵ����
//int Count()
//{
//	int n = 0;
//	n++;
//	// ...
//	return n;
//}



//int& Count()
//{
//	static int n = 0;
//	n++;
//	// ...
//	return n;
//}
//int main()
//{
//	int ret = Count();
//	cout << ret << endl;
//
//	return 0;
//}

//int& Count(int n = 0)
//{
//	int n = 0;
//	n++;
//	// ...
//	return n;
//}
//int main()
//{
//	int& ret = Count();
//	cout << ret << endl;
//	cout << ret << endl;
//	cout << ret << endl;
//	cout << ret << endl;
//	cout << ret << endl;
//
//
//
//	return 0;
//}

//���˺��������򣬷��ض���������ˣ����������÷��أ��������ǲ�ȷ����
//int& Add(int a, int b)
//{
//    int c = a + b;
//    return c;
//}
//int main()
//{
//    int& ret = Add(1, 2);
//    cout << "Add(1, 2) is :" << ret << endl;
//
//    Add(3, 4);
//    cout << "Add(3, 4) is :" << ret << endl;
//    return 0;
//}

//void func1()
//{
//
//	int c = 0;
//	cout << &c << endl;
//}
//
//
//void func2()
//{
//
//	int c = 0;
//	cout << &c << endl;
//}
//
//
//int main() {
//	//func();
//	//func();
//	func1();
//	func2();
//	//��ͬ�������õĻ���һ����ջ֡�ռ�
//	return 0;
//}

//int& Add(int a, int b)
//{
//    static int c;
//    c = a + b;
//    return c;
//}
//int& Add(int a, int b)
//{
//    static int c = a + b;
//    return c;
//}
//int main()
//{
//    int& ret = Add(1, 2);
//    cout << "Add(1, 2) is :" << ret << endl;
//
//    Add(3, 4);
//    cout << "Add(3, 4) is :" << ret << endl;
//    return 0;
//}

//typedef struct SeqList
//{
//	int a[100];
//	int size;
//}SL;
//
//void SLModify(SL* ps, int pos, int x)
//{
//	assert(ps);
//	assert(pos < ps->size);
//	ps->a[pos] = x;
//}
//// ����������ֵ�������޸ķ��ض���
//int& SLat(SL* ps, int pos)
//{
//	assert(ps);
//	assert(pos < ps->size);
//
//	return ps->a[pos];
//
//}
//
//int main()
//{
//	SL s;
//
//	SLat(&s, 3) = 10;
//	//ÿ��λ�õ�ֵ++
//	for (int i = 0; i < s.size; i++) {
//		SLat(&s, i)++;
//	}
//	
//	return 0;
//}


//������
//int main()
//{
//	//Ȩ�޲��ܷŴ�
//	const int a = 10;
//	int b = a;
//	//int& b = a;
//	const int& b = a;
//
//	//Ȩ�޿�����С
//	int c = 20;
//	const int& d = c;
//
//	const int& e = 10;
//	//int& e = 10;//�����ԣ�Ȩ�޷Ŵ���
//
//	int i = 1;
//	double j = i;
//
//	const double& rj = i;
//
//	return 0;
//}





//int main() {
//	//int a = 10;
//	////�﷨��b�ǲ����ռ�
//	//int& b = a;
//
//	////�﷨��ptr���˿ռ�
//	//int* ptr = &a;
//
//	char ch = 'x';
//	char& r = ch;
//	cout << sizeof(r) << endl;
//
//	return 0;
//}

//#define ADD(x,y)( x + y)
////���ȱ��
//// 1. ���׳����﷨ϸ�ڶ�
//// 2. ���ܵ���
//// 3. û�����Ͱ�ȫ�ļ��
//
//int main()
//{
//	int ret = ADD(2, 3) * 5;
//
//	int a = 1, b = 2;
//	int ret2 = ADD(a | b, a & b);// (a| b + a&b)
//
//	return 0;
//}

//enum const inline �����
//enum const -> �곣��
// inline -> �꺯��


//���Ե���
//Ч�ʸ�
inline int ADD(int a, int b)
{
	int c = a +  b;
	return c;
}

int main()
{

	//�ŵ㣺���ý���ջ֡�����Ч��
	int ret = ADD(1, 2);

	return 0;
}
