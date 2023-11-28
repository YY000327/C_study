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
//面向对象
//泛型
//c的不足的弥补
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
////命名冲突
////1. 我们写的跟库冲突
////2. 我们互相之间冲突
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
////命名空间
//
////解决了命名冲突
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
//	//::域作用限定符
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

// 自己写好了，做测试，没有给别人用，不存在冲突
//using namespace i;
//
//using namespace std;
//// std C++官方库定义的命名空间
////工程项目不要展开std，容易冲突
////日常联系，为了方便，就可以展开
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
//	//IO流
//	//自动识别输出变量类型
//	// << 流插入
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

//每次指定命名空间不方便
//直接展开，有很危险，又有冲突风险
//指定展开
//
using std::cout;
using std::endl;
using std::cin;
//int main() {
//
//	//IO流
//	//自动识别输出变量类型
//	// << 流插入
//	cout << "hello world\n";
//	int a = 10;
//	double b = 11.11;
//	//console,控制台
//	cout << a << "\n";
//	cout << b << "\n";
//	//流提取
//	cin >> a >> b;
//
//	cout << a << "\n" << b << "\n";
//	cout << a << endl << b << endl;
//
//
//	return 0;
//}



//缺省参数

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