#define  _CRT_SECURE_NO_WARNINGS 1


//指针复习
//指针需要理解内存
//指针是用来管理内存和访问内存
#include <stdio.h>

//int main() {
//	int a = 15;//a是int类型的，所以向内存申请了4个字节的内容
//
//	int* pa = &a;//pa存放a的地址，是个变量，也是指针变量
//	//* 是说明pa是指针变量
//	//int说明pa指向的变量是int类型
//	//& 是取地址操作符
//	*pa =30;//解引用操作。通过pa里的地址找到所表示的对象
//	printf("%d", a);
//
//	double d = 3.14;
//	double* pd = &d;
//
//
//	return 0;
//}

//指针变量的大小
//指针变量是存储地址，32位机器上，地址是32个二进制位，这个地址需要4个字节
//64位机器需要8个字节


//
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//void print1(struct S t) {
//	printf("%s %d %f\n", t.name, t.age, t.score);
//}
//void print2(struct S* ps) {
//
//	printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).score);
//	printf("%s %d %f\n", ps->name, ps->age, ps->score);
//}
////结构体变量.成员
////结构体指针->成员
//int main() {
//	struct S s = { "zhang san", 20 ,85.5f };
//	print1(s);
//	print2(&s);
//
//	return 0;
//}

//三子棋
//1.游戏不退出，继续下一把