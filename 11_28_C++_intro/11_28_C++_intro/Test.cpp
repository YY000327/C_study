//#define  _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main() {
//	printf( "hello word" );
//
//	return 0;
//
//}
//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//	cout << "hello world" << endl;
//
//	return 0;
//
//}



//Cpp
//�������
//����
//c�Ĳ�����ֲ�
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
////������ͻ
////1. ����д�ĸ����ͻ
////2. ���ǻ���֮���ͻ
//
//namespace i
//{
//	namespace i1 {
//
//		int rand = 0;
//
//	}
//
//	namespace i2 {
//		int rand = 0;
//	}
//
//
//	int Add(int left, int right) {
//		return left + right;
//	}
//
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//}
////�����ռ�
//
////�����������ͻ
//namespace a {
//
//}
//
//namespace b {
//
//}
//
//int main() {
//
//	printf("hello word\n");
//
//	printf("%p\n", rand);
//
//	//::�������޶���
//	printf("%d\n", i::i1::rand);
//
//	int a = i::Add(1, 2);
//
//	printf("%d\n", a);
//
//	//struct i::Node a;
//
//	return 0;
//
//}

//

#include "Stack.h"
//
//int main() {
//
//	i::ST s;
//	i::StackInit(&s);
//	i::StackPush(&s, 1);
//	i::StackPush(&s, 2);
//	i::StackPush(&s, 3);
//	i::StackPush(&s, 4);
//
//
//	return 0;
//}

// �Լ�д���ˣ������ԣ�û�и������ã������ڳ�ͻ
//using namespace i;
//
//using namespace std;
//// std C++�ٷ��ⶨ��������ռ�
////������Ŀ��Ҫչ��std�����׳�ͻ
////�ճ���ϵ��Ϊ�˷��㣬�Ϳ���չ��
//int main() {
//
//	ST s;
//	StackInit(&s);
//	StackPush(&s, 1);
//	StackPush(&s, 2);
//	StackPush(&s, 3);
//	StackPush(&s, 4);
//
//
//	return 0;
//}


#include <iostream>

//int main() {
//
//	//IO��
//	//�Զ�ʶ�������������
//	// << ������
//	std::cout << "hello world\n";
//	int a = 10;
//	double b = 11.11;
//	std::cout << a << "\n";
//	std::cout << b << "\n";
//
//
//	std::cout << a << "\n" << b << "\n";
//	std::cout << a << std::endl << b << std::endl;
//
//
//	return 0;
//}

//ÿ��ָ�������ռ䲻����
//ֱ��չ�����к�Σ�գ����г�ͻ����
//ָ��չ��
//
using std::cout;
using std::endl;
using std::cin;
//int main() {
//
//	//IO��
//	//�Զ�ʶ�������������
//	// << ������
//	cout << "hello world\n";
//	int a = 10;
//	double b = 11.11;
//	//console,����̨
//	cout << a << "\n";
//	cout << b << "\n";
//	//����ȡ
//	cin >> a >> b;
//
//	cout << a << "\n" << b << "\n";
//	cout << a << endl << b << endl;
//
//
//	return 0;
//}



//ȱʡ����

//using namespace i;
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//
//int main()
//{
//
//	Func();
//	Func(10);
//
//	ST s;
//	StackInit(&s);
//	StackPush(&s, 1);
//	StackPush(&s, 2);
//	StackPush(&s, 3);
//	StackPush(&s, 4);
//
//	return 0;
//}