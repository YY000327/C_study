#define  _CRT_SECURE_NO_WARNINGS 1

//函数指针数组
//数组每个元素是一个函数指针类型；
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main() {
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pf3)(int, int) = Mul;
//	int (*pf4)(int, int) = Div;
//
//	//函数指针数组
//	int(*pfArr[4])(int, int) = {Add, Sub, Mul, Div};
//	return 0;
//
//}
//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu() {
//	printf("*****************************\n");
//	printf("*****************************\n");
//	printf("*******1. Add    2.Sub*******\n");
//	printf("*******3. Mul    4.Div*******\n");
//	printf("*******0. Exit***************\n");
//	printf("*****************************\n");
//
//}
//
//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	do {
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input) {
//					
//		case 1:
//			printf("请输入两个操作时：");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作时：");
//			scanf("%d %d", &x, &y);
//			ret = Sub (x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作时：");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作时：");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误重新选择\n");
//			break;
//
//		}
//	} while (input);
//
//
//	return 0;
//}


//
////函数指针的方式
//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu() {
//	printf("*****************************\n");
//	printf("*****************************\n");
//	printf("*******1. Add    2.Sub*******\n");
//	printf("*******3. Mul    4.Div*******\n");
//	printf("*******0. Exit***************\n");
//	printf("*****************************\n");
//
//}
//
//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//函数指针数组的使用 - 转移表
//	int(*pfArr[5])(int, int) = {NULL, Add, Sub, Mul, Div };
//	do {
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("请输入两个操作时：");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0) {
//			printf("退出计算器\n");
//
//		}
//		else {
//			printf("选择错误\n");
//		}
//		
//	} while (input);
//
//
//	return 0;
//}

//int main() {
//
//	int* p;
//	//函数指针的写法不同
//	int (*p)(int, int);
//
//	return 0;
//}


//指向函数种子很数组的指针
//int(*pfArr[4])(int, int);
//int(*(*p)[4])(int, int) = &pfArr;


//函数指针有一个用途就是实现回调函数


//
//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu() {
//	printf("*****************************\n");
//	printf("*****************************\n");
//	printf("*******1. Add    2.Sub*******\n");
//	printf("*******3. Mul    4.Div*******\n");
//	printf("*******0. Exit***************\n");
//	printf("*****************************\n");
//
//}
//void Calc(int (*pf)(int x, int y)) {
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作时：");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//
//
//int main() {
//	int input = 0;
//
//	do {
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input) {
//					
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误重新选择\n");
//			break;
//
//		}
//	} while (input);
//
//
//	return 0;
//}


//qSort函数特点：
//1.快速排序方法
//2.

//void qsort(void* base, size_t num, size_t size, 
//				int(*compar)(const void*, const void*)); -这个函数指针指向的函数，能够比较base指向数组中的两个元素
//
//
////当前只适合整型方式
//
//void bubble_sort(int arr[], int sz) {
//
//	for (int i = 0; i < sz - 1; i++) {
//
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
////冒泡排序
#include <stdio.h>
#include <stdlib.h>

//int main() {
//
//	int arr[10] = { 10,3,4,9,8,7,6,5,1,2};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}

//int cmp_int(const void* p1, const void* p2) {
//	return (*(int*)p1 - *(int*)p2);
//}
//
//void print(int arr[], int sz) {
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
////测试qsot排序整型数据
//test1() {
//	int arr[10] = { 10,3,4,9,8,7,6,5,1,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//默认是升序的
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//
//
//}
//
////测试qsort排序结构体数据
//struct Stu {
//	char name[20];
//	int age;
//
//};
//
//int cmp_stu_by_age(const void* p1, const void* p2) {
//	return (((struct Stu*)p1)->age - ((struct Stu*)p2)->age);
//
//
//}
//int cmp_stu_by_name(const void* p1, const void* p2) {
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//
//
//}
//
//void test2() {
//	struct Stu arr[] = { {"zhangsan", 20},{"lisi", 50},{"wangwu", 15} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//
//}
//void test3() {
//	struct Stu arr[] = { {"zhangsan", 20},{"lisi", 50},{"wangwu", 15} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//
//}
//
//
//
//int main() {
//
//	//test2();
//	test3();
//	return 0;
//}

//vvoid* 指针可以接受任意指针类型
//void* 指针- 无具体类型的指针
//这种类型的指针是不能直接解引用操作的
//也不能直接进行指针运算
//int main() {
//
//	int a = 10;
//	float f = 3.14f;
//	int* pa = &a;
//	//char* pc = &a;//error
//	void* pv = &a;
//	pv = &f;
//	*pv;//error,不知道指针类型
//	pv++;//无法运算
//	return 0;
//}

void print(int arr[], int sz) {
	for (int i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
}

void Swap(char* buf1, char* buf2, int size) {//交换两个元素
	int i = 0;
	char tmp = 0;
	for (int i = 0; i < size; i++) {
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;

	}
}

//使用冒泡排序的思想，实现一个功能类似于qsort的函数
void bubble_sort(void* base,int num, int size, int(*cmp)(const void*, const void* )) {
	int i = 0;
	for (i = 0; i < num - 1; i++) {
		int j = 0;
		for (j = 0; j < num - 1-i; j++) {
			//假设需要升序，cmp>0;交换
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size)>0)//需要把arr[j]和arr[j+1]的地址写进去
			{
				Swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}


		}
	}
}

struct Stu {
	char name[20];
	int age;

};
int cmp_int(const void* p1, const void* p2) {
	return (*(int*)p1 - *(int*)p2);
}
int cmp_stu_by_age(const void* p1, const void* p2) {
	return (((struct Stu*)p1)->age - ((struct Stu*)p2)->age);


}

int cmp_stu_by_name(const void* p1, const void* p2) {
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);


}

void test1() {
	int arr[10] = { 10,3,4,9,8,7,6,5,1,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//默认是升序的
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);


}
void test2() {
	struct Stu arr[] = { {"zhangsan", 20},{"lisi", 50},{"wangwu", 15} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
}

void test3() {
	struct Stu arr[] = { {"zhangsan", 20},{"lisi", 50},{"wangwu", 15} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);

}

int main() {
	//test1();
	//test2();

	test3();
	return 0;
}

//写一个关于函数指针的方式，模拟qsort，用冒泡排序

