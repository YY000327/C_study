#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void test() {
//
//	printf("hehe\n");
//	printf("hehe\n");
//
//}
//
//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//	test();
//	for (i = 0; i < 10; i++) {
//
//		arr[i] = 10 - i;
//
//	}
//
//	for (i = 0; i < 10; i++) {
//
//		printf("%d ",arr[i]);
//
//	}
//
//	return 0;
//}
////F10遇到函数调用，直接就执行完成
////F11更加细致，会进入函数观察函数执行的过程

//
//void test2() {
//	printf("test2\n");
//
//}
//
//
//void test1() {
//	test2();
//
//}
//
//
//void test() {
//	test1();
//
//}
//
//int main() {
//	test();
//	return 0;
//}
////栈是先进后出


//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//
//	scanf("%d", &n);//3
//
//	for (i = 1; i <= n; i++)//1 2 3
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//1!+2!+3!


//
//int main() {
//
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &i);
//	printf("%p\n", arr[0]);
//
//	printf("%p\n", arr[9]);
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf("hehe\n");
//
//	}
//
//	return 0;
//
//}
//
//


//模拟实现库函数 strcpy

#include <string.h>
#include <assert.h>
//void my_strcpy(char* dest, char* src) {
//	//断言
//	assert(dest != NULL);
//	assert(dest != NULL);
//	while (*src) {
//
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//
//}


////函数返回的是目标地址的起始地址
//char*  my_strcpy(char* dest, const char* src) {
//	char* ret = dest;
//	//断言
//	assert(dest != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//		;//空语句
//	*dest = *src;
//
//	return ret;
//}
//
//
//int main() {
//
//	char arr1[] = "hello world";
//
//	char arr2[20] = {"xxxxxxxxxxxxxx"};
//	//char* p = NULL;
//	//strcpy(arr2, arr1);
//	//printf("%s\n", arr2);
//	printf("%s\n",my_strcpy(arr2, arr1));
//	return 0;
//}

//
//int main() {
//
//	int num = 10;
//	num = 20;
//	int* p = &num;
//	*p = 200;
//
//	const int n = 100;
//	//n = 200;//error
//
//	const int* pa = &n;
//	*pa = 20;//变成error
//	printf("%d\n", n);
//
//
//
//	return 0;
//}

//当const放在*左边的时候，限制的是指针指向的内容，不能通过指针变量改变指针变量的北荣，但是指针变量是可以改变的
//当const放在*右边的时候，限制的是指针本身，指针变量本省不能改变，但指针指向的内容可以通过指针来改变

//int main() {
//
//	int m = 10;
//	int n = 100;
//	//const int* p = &m;
//	////*p = 0;
//	//p = &n;
//
//	//int* const p = &m;
//	//*p = 0;
//	//p = &n;
//	// 
//	//const int* const p = &m;
//	//*p = 0;
//	//p = &n;//两者都不可以了
//	printf("%d\n", m);
//
//
//	return 0;
//}
//
//


//模拟实现一个strlen
//
//size_t my_strlen(const char* const arr) {
//	assert(arr != NULL);
//	if (*arr =='\0')
//		return 0;
//	else
//		return 1+ my_strlen(arr+1);//arr+1代表的是将arr指针向后移动一格
//
//}
//代码相对简单，但是递归函数对于内存里栈的开销较大，容易产生溢出的情况，如果字符的数量较多

//size_t my_strlen(const char* arr) {
//	char* start = arr;
//	while (*arr) {
//		arr++;
//	}
//	return arr - start;
//}
//这段只经过了一次字符串，并在结束的时候用最后的地址减去初始地址，就能得到字符串的长度，

//int main() {
//
//
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//
//	printf("%zd\n", len);
//
//	return 0;
//}


//size_t是专门为sizeof设计的一个类型
//size_t一般是 usigned int/ unsigned long


 





