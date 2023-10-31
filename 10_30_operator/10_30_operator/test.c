#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//三目操作符
//exp1?exp2:exp3
//如果exp1为真，exp2执行，如果exp1为假，exp3执行

//int main() {
//
//	int a = 0;
//	int b = 0;
//	//if (a > 5) {
//	//	b = 3;
//
//	//}
//	//else
//	//	b = -3;
//
//	b = (a > 5) ? 3 : -3;
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d%d", &a, &b);
//
//	m = (a > b ? a : b);
//	printf("%d\n", m);
//
//	return 0;
//}

//逗号表达式，从左向右计算，整个表达式的结果是最后一个表达式的结果
//
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//
//	return 0;
//
//}


////下标引用操作符
//
//int main() {
//	int arr[10] = { 1,2,3,4,5 };
//	//数组的起始是有下标的
//
//	printf("%d\n", arr[2]);//[]下标引用操作符，arr和2是[]的两个操作数
//	return 0;
//}
//

////函数调用操作符
//int main() {
//	int len = strlen("abc");//()函数调用操作符
//	//strlen和“abc”是操作符的操作数
//
//	return 0;
//}

//可变操作函数列表-参数的数量是变化的

//结构成员操作符
//
//struct Book
//{
//	char name[30];
//	char aunthor[20];
//	float price;
//};
//int main() {
//
//	struct Book b1 = { "cll","mr.Li",65.5f };
//	struct Book b2 = { "c22","mr.Yang",165.5f };
//
//	printf("%s %s %f\n", b1.name, b1.aunthor, b1.price);
//
//	printf("%s %s %f\n", b2.name, b2.aunthor, b2.price);
//	return 0;
//}



//struct Book
//{
//	char name[30];
//	char aunthor[20];
//	float price;
//};
//Print(struct Book* p) {
//	printf("%s %s %f\n", (*p).name, (*p).aunthor, (*p).price);
//	printf("%s %s %f\n", p->name, p->aunthor, p->price);
//}
//int main() {
//
//	struct Book b1 = { "cll","mr.Li",65.5f };
//	struct Book b2 = { "c22","mr.Yang",165.5f };
//	Print(&b1);
//	Print(&b2);
//	
//	return 0;
//}
//
////整型提升
//int main() {
//	char c1 = 5;
//	//00000101 - c1
//	char c2 = 127;
//	//01111111 - c2
//	char c3 = c1 + c2;
//	//00000000000000000000000000000101
//	//00000000000000000000000001111111
//	//00000000000000000000000010000100
//	//10000100-c3
//	//%d -10进制打印有符号的整数
//	//11111111111111111111111110000100-补码
//	//11111111111111111111111110000011-反码
//	//11000000000000000000000001111100-原码 -->-124
//	printf("%d\n", c3);
//	return 0;
//
//
//}

//%u - 10进制的形式打印无符号的整数
// 相邻操作符优先级高的先算
//相邻操作符的优先级相同的情况下，结合性先算