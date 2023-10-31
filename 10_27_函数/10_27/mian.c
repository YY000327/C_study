#define  _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
#include <math.h>

//c语言将常用的功能分装成了一个个函数，被称为库函数

//IO函数 输入输出
//字符串操作函数
//内存操作函数
//时间/日期函数
//数字函数
//其他函数...
//char * strcpy ( char * destination, const char * source );
// return destination

//int main() {
//
//	char arr1[] = "hello";
//	char arr2[20] ="xxxxxxxxx";//对于数组，数组名是数组的第一个元素的地址，也就是起始地址
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}


//void * memset ( void * ptr, int value, size_t num);
// return ptr

//int main() {
//
//	char arr[] = "hello world";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}
//

//
//int main() {
//	int len = strlen("abcdef");
//
//	printf("%d", len);
//
//	return 0;
//
//}


//自定义函数
//
//int get_max(int x, int y) {
//	int z = (x > y ? x : y);//如果x大于y就选择x，如果不是就选择y
//	return z;
//}
//
//int main() {
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int m = get_max(a, b);
//	printf("较大值是%d\n",m);
//
//	return 0;
//}

//int main() {
//	int num = 0;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);
//
//	return 0;
//}

//交换两个整型的变量

//void swap(int *pa, int *pb/*形式参数 - 形参*/) {
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("before a= %d b= %d\n", a, b);
//	//实际参数 - 实参
//	//当实参传递到形参的时候
//	//形参是实参的一个临时拷贝
//	//所以对形参的修改不会影响实参
//	swap(&a, &b);
//	printf("after a= %d b= %d\n", a, b);
//
//	return 0;
//}
//

//int get_max(int x, int y) {
//	int z = (x > y ? x : y);//如果x大于y就选择x，如果不是就选择y
//	return z;
//}//形参只有再函数调用的时候才会实例化，结束后会自动销毁
//
//int main() {
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int m = get_max(a, b);//变量
//	m = get_max(a, 7);//常量
//	m = get_max(a, get_max(4, 8));//函数的参数是函数的调用
//	printf("较大值是%d\n",m);
//
//	return 0;
//}

//什么时候传地址什么时候传变量？
//想要改变实参的数据的时候，需要传地址，其他直接可以传变量
//


//内存分为：栈区、堆区、静态区
//栈区：局部变量、形参
//堆区：动态内存管理：malloc、realloc、calloc、free
//静态区：静态变量、全局变量
//int a = 10;
//变量a会有一个地址，而变量名是程序员自己看的，机器看变量时只看地址

//函数调用：传值调用和传址调用

//传值调用是形参对于实参的一份临时拷贝，对形参的修改不会影响实参
//传址调用是函数外部创建的变量的内存地址传递，调用可以直接影响到实参


//如果是素数返回 1

//int is_prime(int n) {
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++) {
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main() {
//
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++) {
//		//判断i是否为素数
//		if (is_prime(i)) {
//			printf("%d ", i);
//			count++; 
//		}
//		
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}

////1. 函数怎么使用
////2. 实现函数
//int binary_search(int arr[], int k, int sz) {
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right) {
//		// int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main() {
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//二分查找
//	//find: return order
//	//failed: return -1
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1) {
//		printf("can't find");
//	}
//	else {
//		printf("find, the number order is %d\n", ret);
//	}
//	return 0;
//}
//






















//函数 2



//void test (int* p) {
//
//	(*p)++;
//}
//
//int main() {
//
//	int num = 0;
//	test(&num);
//	test(&num);
//	printf("%d\n", num);
//
//	return 0;
//}
//

//int test (int n) {
//
//	return (n + 1);
//}
//
//int main() {
//
//	int num = 0;
//	num = test(num);
//	num = test(num);
//	printf("%d\n", num);
//
//	return 0;
//}


//嵌套调用：函数之间的互相调用


//可以嵌套调用，但是不能嵌套定义，一个函数里不能定义一个函数，每一个函数都是独立的



//int main()
//{
//	int len = strlen("abcdef");
//
//	printf("%d", len);
//
//	printf("%d", strlen("abcdef");//链式访问，把一个函数的返回值作为另一个函数的参数
//
//	return 0;
//}

//
//int main() {
//
//	printf("%d ", printf("%d ", printf("%d ", 43)));
//	//43 3 2
//	return 0;
//}



//函数必须要先声明再调用
//函数的声明，声明中形参的名字可以省略
//#include "add.h"
//#pragma comment(lib,"add.lib")//导入静态库
////,lib-静态库
//int main() {
//
//	int num = 0;
//	num = test(num);//函数的调用
//	num = test(num);
//	printf("%d\n", num);
//
//	return 0;
//}



//函数的声明和定义不是这样使用的
//函数声明需要放在头文件中




//函数递归

//程序调用自身的技巧就是递归
//可能会死递归最后栈溢出
//递归的主要思考方式是大事化小
//int main() {
//	printf("HH\n");
//	main();
//	return 0;
//}

//函数的调用堆栈
//函数栈帧，函数栈帧都是在栈区里存储，每一次函数调用都要在栈区内分配一块空间来保存函数在调用过程中的上下文信息
//关于函数的栈帧的创建和销毁
//递归存在限制条件，不然会溢出栈
//void print(unsigned int n) {
//
//	if (n > 9) {
//		print(n / 10);
//
//	}
//	printf("%d ", n % 10);
//}
//
//
//int main() {
//
//	unsigned int num = 0;
//	//输入一个是数字；
//	scanf("%d", &num);
//	print(num);
//	return 0;
//
//}


//编写函数不允许创建临时变量，求字符串长度；
//int my_strlen(char* s) {
//
//	int count = 0;
//
//	while (*s != '\0') {
//		count++;
//		s++;
//	}
//	return count;
//
//}
//
//int my_strlen(char* s) {
//	
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(s + 1);
//}
////my_strlen(abc),一开始的指针指向a，a不是\0，输出1代表1
////1+my_strlen(bc)，将指针指向下一个数字...
////1+1+my_strlen(c)
////1+1+1+0
//
//int main() {
//	char arr[] = "abc";
//	
//	int len= my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}



//递归与迭代


//n的阶乘
//
//int Fac(int n) {
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//求第n个斐波那契数
//前两个数的和是第三个数

//int Fib(int n) {
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//
//}

//迭代写法
//int Fib(int n) {
//	
//	int a = 1, b = 1, c = 1;
//
//	while (n >= 3) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//
//	return c;
//}
//
//int main() {
//	int n = 0;
//
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}
//




