#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
////指针是内存中一个最小单元的编号，也就是地址
////
//int main() {
//
//	int a = 100;
//	int* pa = &a;//pa是专门用来储存变量的，这里的pa就是指针变量
//	//指针就是地址
//
//	//指针变量在32位的平台下是4个字节
//	//指针变量在64位的平台下是8个字节
//	int arr[100];
//	printf("%p\n", &a);
//
//
//	return 0;
//}


////指针类型的意义
//int main() {
//	
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//
//
//	return 0;
//}
////指针类型决定了指针解引用操作的权限

//int main() {
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc + 1);
//	return 0;
//}
////指针类型决定指针+/-1操作时的步长
////整型指针+1跳过4个字节
////字符指针+1跳过1个字节

////野指针
//int main() {
//	int* pa;//局部变量不初始化的时候，内容是随机值
//	//指针未初始化就会
//	//指针越界也会野指针
//	*pa = 20;
//	printf("%d\n", *pa);
//	return 0;
//}

//如何规避野指针
//1.指针初始化
//		如果不知道初始化内容，可以初始化NULL
//		空指针：没有指向任何有效的空间，指针不能直接使用
//2.小心指针越界
//3.指针指向的空间释放，即使指向NULL
//4.避免返回局部变量的地址
//5.指针使用之前检查有效性
//
//int main() {
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		*p = i;
//		p++;
//	}
//	p = arr;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p+i));
//	}
//
//	//for (i = 0; i < 10; i++) {
//	//	printf("%d ", arr[i]);
//	//}
//
//	return 0;
//
//}
//arr[i]==*[arr+i]=*[i+arr]=*i[arr];
//int main() {
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//指针和指针相减的前提是：两个指针指向了相同的空间
//	return 0;
//}

//int my_strlen(char* s) {
//	int count = 0;
//	while (*s != '\0') {
//		count++;
//		s++;
//	}
//	return 0;
//}

//int my_strlen(char* s) {
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(s + 1);
//}
//int my_strlen(char* s) {
//	char* start = s;
//	while (*s) {
//		s++;
//	}
//	return s - start;
//}
//
//
//int main() {
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//
//	return 0;
//}

//指针的关系运算就是比较指针的大小
