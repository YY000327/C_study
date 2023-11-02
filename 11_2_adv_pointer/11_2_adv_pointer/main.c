#define  _CRT_SECURE_NO_WARNINGS 1

//地址是物理的电线产生的
//32位机器 - 32根地址线 - 1/0
//把这个32个0/1组成的二进制序列作为地址，所以需要32个bit位才能存储地址
//需要4个字节
//如果是64位的机器，就需要8个字节
#include <stdio.h>

//int main() {
//
//	char ch = 'w';
//
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c", ch);
//
//	return 0;
//}
//
//
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//指针数组 - 存放指针的数组
//整型数组 - 存放整型的数组

//int main() {
//	int* arr[10];
//
//	return 0;
//}

//使用指针模拟二维数组

//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 5; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//数组指针 - 指向数组的指针，存放数组的地址的指针变量
//整型指针 - 指向整型变量的指针，存放整型变量的地址的指针变量
// int (*p2)[10];


//数组名是数组首元素的地址
//有两个例外：
//1. sizeof（数组名），这里的数组名不是数组的首元素的地址，数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节
//2. &数组名，这里的数组名表示整个数组，&数组名是取整个数组的地址
//除此之外，所有的地方的数组名都是首元素的地址
//int main() {
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	printf("%d\n", sizeof(arr));
//
//
//	return 0;
//}
//对于数组名来说，&数组名得到的是数组的地址


//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int[10] * p = &arr;//err
//	int (*p)[10] = &arr;
//
//	return 0;
//}

//数组指针的使用

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//
//		printf("%d ", *(p+i));
//
//	}
//	return 0;
//
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p) [10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//
//		printf("%d ", *((*p)+i));
//		printf("%d ", (*p)[i]);
//
//
//	}
//	return 0;
//
//}
//数组指针使用在二维数组比较方便


//二维数组传参，形参是指针的形式

//void Print(int (*p) arr[3][5], int r, int c) {
//	int i = 0;
//	for (i = 0; i < r; i++) {
//		int j = 0;
//		for (j = 0; j < c; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//
//	}
//}
//void Print(int(*p)[5], int r, int c) {
//	int i = 0;
//	for (i = 0; i < r; i++) {
//		int j = 0;
//		for (j = 0; j < c; j++) {
//			printf("%d ", *(*(p+i)+j));
//		}
//		printf("\n");
//
//	}
//}
//
//int main() {
//
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	//二维数组的每一行可以理解为二维数组的一个元素
//	// 每一行又是一个一维数组
//	// 二维数组其实是一维数组的数字
//	// 二维数组的数组名，也是数组名，数组名就是数组首元素的地址
//	// arr=首元素的地址
//	//	  = 第一行的地址
//	//	  = 一维数组的地址-数组的地址
//	//arr是数组名，数组名表示首元素的地址
//	Print(arr, 3, 5);
//
//	return 0;
//}
//一维数组传参，形参的部分可以是数组，也可以是指针

//二维数组传参，形参是指针的形式
//
//void Print(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//
//	//arr 是数组名，数组名表示数组首元素的地址
//
//	Print(arr, 3, 5);
//		
//	return 0;
//}
//



//函数指针 - 指向函数的指针
//

//int Add(int x, int y) {
//	return x+y;
//}
//int main() {
//
//	//int arr[10]
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//函数名是函数的地址
//	//&函数名也是函数的地址
//
//	int (*pf)(int, int) = &Add; //pf是函数指针变量
//	//int (*)(int, int) 是函数指针类型
//
//	int m = (*pf)(4, 5);
//	printf("%d\n", m);
//
//	m = pf(3, 5);
//	printf("%d\n", m);
//	return 0;
//}



//void test(char* pc, int arr[10]) {
//
//}
//
//int main() {
//	void (*pf)(char *, int *) = test;
//	void (*pf)(char*, int*) = &test;
//
//
//	return 0;
//}

// 0 - int
//	 - int*

////void (*p)() -p是一个函数指针
////void (*)() 是函数指针类型
//int main() {
//
//	//调用0地址出的函数
//	//1.将0强制类型转换位void(*)()
//	//2.调用0地址出的这个函数
//	(*(void(*)())0)();
//
//	return 0;
//}


//
//int main() {
//
//	void(*signal(int, void(*)(int)))(int);
//	//signal是一个函数声明
//	//signal函数有两个参数，第一个参数的类型是int，第二个参数的类型是void（*）(int)函数指针类型
//	//该函数指针指向的函数有一个int的参数，返回类型是void
//	//
//
//	return 0;
//}

//typedef unsigned int uint;
//typedef int* ptr_t;
//
//typedef int(*parr_t)[10];
//typedef int(*pf_t)(int, int);


//int main() {
//
//
//	typedef void(*pf_t)(int);
//	pf_t signal(int, pf_t);
//
//
//	//void(*signal(int, void(*)(int)))(int);
//
//	return 0;
//}

int countGoodTriplets(int* arr, int arrSize, int a, int b, int c) {
    int count = 0;
    int left = 0;
    int mid = 1;
    int right = 2;
    for (int i = 2; i < arrSize; i++) {
        if (arr[left] - arr[right] <= a && arr[mid] - arr[right] <= b && arr[left] - arr[right] <= c) {
            count++;
        }
    }
}