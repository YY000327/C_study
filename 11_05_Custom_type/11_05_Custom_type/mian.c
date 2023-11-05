#define  _CRT_SECURE_NO_WARNINGS 1

//数组：一组相同类型的集合

//结构体的声明
// struct tag
// {
//	member-list; 成员列表
// }variable-list; 变量列表
//
//
//struct S {
//	int a;
//	char c;
//	float f;
//};
//
//struct  {
//	int a;
//	char c;
//	float f;
//}x;
//
//struct  {
//	int a;
//	char c;
//	float f;
//}* p;
//

//struct Node {
//	int data;
//	struct Node* next;
//};


//typedef struct Node {
//	int data;
//	struct Node* next;
//}Node;
//
//
//int main() {
//
//	//struct S s;
//	//p = &x;//error
//	Node n = { 1 };
//	Node x = { 1,1,2,2,3,3 };
//	return 0;
//}
//
//


#include <stdio.h>


//struct SN {
//	char c;
//	int i;
//
//}sn1 = { 'q',100 }, sn2 = { .i = 200, .c = 'w' };//全局变量
//
//struct S {
//	double d;
//	struct SN sn;
//	int arr[10];
//};
//
//int main() {
//
//	//struct SN sn3,  sn4;
//
//	//printf("%c %d\n", sn2.c, sn2.i);
//
//	struct S s = { 3.14, {'a', 99},{1,2,3} };
//	printf("%lf %c %d\n", s.d, s.sn.c,s.sn.i);
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//
//		printf("%d ", s.arr[i]);
//	}
//
//	return 0;
//}


////结构体内存对齐，计算结构体大小
//#include <stddef.h>
//struct S1 {
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2 {
//	int i;
//	char c1;
//	char c2;
//};
//
//int main() {
//
//	//printf("%d\n", sizeof(struct S1));
//	//printf("%d\n", sizeof(struct S2));
//	printf("%d\n", offsetof(struct S1, c1)); //可以计算结构体成员相较于结构体起始位置的偏移量
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//
//	return 0;
//}
//结构体的对其规则，结构体成员不是按照顺序再内存中连续存放的，而是有对其规则
//	1.结构体的第一个成员永远放在相较于结构体的起始位置偏移量为0的位置
//	2.第二个成员开始，往后的每个成员都要对其到某个对齐数的整数倍数
//		对齐数：结构体成员自身大小和默认对齐数的较小值
//		vs上默认对齐数是8
//		gcc 没有默认对齐数吗，对齐数就是结构体成员的自身大小
//	3.结构体的总大小必须是最大对齐数的整数倍
//		最大对齐数是：所有成员的对齐数中最大值
//	4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的额最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数的整数倍

//struct S3 {
//	double d;
//	char c;
//	int i;
//
//};
//
//int main() {
//
//	printf("%d\n", sizeof(struct S3));
//
//	return 0;
//}

//修改默认对齐数

#include <stdio.h>
//#pragma pack(1)
//
//struct S {
//	char c1;
//	int a;
//	char c2;
//
//};
//
//
//int main() {
//
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}


//结构体传参


//struct S
//{
//	int data[100];
//	int num;
//
//};
//
//void print1(struct S tmp) {
//	printf("%d\n", tmp.num);
//}
//
//void print2(const struct S* ps) {
//	printf("%d\n", ps->num);
//}
//
//int main() {
//	struct S s = { {1,2,3},100 };
//
//	print1(s);
//	print2(&s);
//
//
//	return 0;
//}


//位段，位域


//struct A
//{
//	int _a : 2; //二进制位
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main() {
//
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}

//struct S
//{
//	char a : 3; //二进制位
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main() {
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}


//枚举， 一一列举

//enum day{
// a;
//
//
//enum Color {
//	RED = 1,
//	GREEN = 2,
//	BLUE = 8
//};
//
//int main() {
//
//	enum Color c = GREEN;
//
//	printf("%d\n", c);
//
//
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n",BLUE);
//
//
//}

//联合（共用体）
//
//union Un {
//	char c;
//	int i;
//
//};
//
//int main() {
//
//	printf("%d\n", sizeof(union Un));
//	union Un un = { 0 };
//
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%p\n", &un);
//	printf("%p\n", &un.i);
//	printf("%p\n", &un.c);
//
//
//
//	return 0;
//}


//
//int check_sys() {
//	union Un
//	{
//		int i;
//		char c;
//
//	}un = { .i = 1 }; 
//		return un.c;
//}
//int main() {
//	int ret = check_sys();
//
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//
//	return 0;
//}


union Un1 {
	char c[5];
	int i;

};
union Un2 {
	short c[7];
	int i;
};

int main() {
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));


}