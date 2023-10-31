#define  _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//
////指针和数组
////数组中，数组名是数组首元素的地址；数组名==地址==指针
//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//
//	for (i = 0; i < sz; i++) {
//		printf("%p == %p\n", p + i, &arr[i]);
//
//		printf("%d \n", *(p + i));
//	}
//
//	return 0;
//}

//
//
//int main() {
//	int a = 10;
//	int* p = &a;
//	//p是一级指针变量，指针变量也是变量，变量实在内存中开辟一个空间
//	int* * pp = &p;
//	//pp就是二级指针变量，二级指针变量就是存储一级指针的地址
//	//int*是说明pp指向的是p作为一级指针变量
//	*(*pp) = 100;
//	printf("%d\n", a);
//
//	int** * ppp = &pp;
//	return 0;
//}

////二级指针
//int main() {
//
//	char arr1[] = "abcdef";
//	char arr2[] = "hello world";
//	char arr3[] = "caihua";
//	char* parr[] = { arr1,arr2, arr3 };
//	char** p = parr;
//
//
//	return 0;
//}
////指针数组:存放指针的数组

//int main() {
//
//	char arr1[] = "abcdef";
//	char arr2[] = "hello world";
//	char arr3[] = "caihua";
//	char* parr[] = { arr1,arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%s\n", parr[i]);
//	}
//
//
//	return 0;
//}


//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 5; j++) {
//			//printf("%d ", parr[i][j]);
//			printf("%d ", *(parr[i] + j));
//
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}



//Struct
//结构是一些值的集合，这些值的每个成员可以是不同类型的变量
//描述一个学生
//名字+年龄+性别

//声明结构体类型
//struct Stu
//{
//	//成员变量，是用来描述结构对象的相关属性
//	char name[20];
//	int age;
//	char sex[5];
//
//}s2,s3,s4;//结构体变量-全局变量
//
//int main()
//{
//
//	struct Stu s1;//局部变量
//
//
//
//	return 0;
//}


//typedef struct Stu
//{
//	//成员变量，是用来描述结构对象的相关属性
//	char name[20];
//	int age;
//	char sex[5];
//
//}Stu;//结构体变量-全局变量
//
//int main()
//{
//
//	struct Stu s1;//局部变量
//	Stu s2;//在c语言中，没有对结构体类型typedef，struct不能省略
//
//	return 0;
//}

//结构体成员可以是标量，数组甚至结构体本身
//struct S {
//	int a;
//	char arr[5];
//	int* p;
//
//}s1 = { 100,"bit",NULL };
//
//struct S s2 = { 98, "hehe", NULL };
//
//struct B
//{
//	char ch[10];
//	struct S s;
//	double d;
//};
//
//int main() {
//
//	struct S s3 = { .arr = "abc", .p = NULL, .a = 1 };
//	printf("%d %s %p\n", s3.a, s3.arr, s3.p);//结构成员访问操作符
//	struct B sb = { "hello", {20, "qqq", NULL},3.14 };
//	printf("%s %d %s %p %.2lf\n", sb.ch, sb.s.a, sb.s.arr, sb.s.p, sb.d);
//	return 0;
//}
////.操作符是拿出成员的变量

//#include <string.h>
//
//struct Stu {
//	char name[20];
//	int age;
//};
//set_stu(struct Stu* ps) {
//	ps->age = 20;//结构体指针->结构体成员
//	strcpy(ps->name, "zhangsan");
//
//
//
//}
//void print_stu(struct Stu t) {
//	printf("%s %d\n", t.name, t.age);
//}
//
//
//int main() {
//
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//
//	return 0;
//}//结构体传参，尽量传结构体的地址



//n = n&(n-1)中，会让n的二进制最右边的1消失