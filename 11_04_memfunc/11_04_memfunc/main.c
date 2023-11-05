#define  _CRT_SECURE_NO_WARNINGS 1



//内存函数

//memcpy是内存拷贝
//memcpy(void*dest,void* src, size_t num);
//拷贝字符串
//拷贝整型数组
//拷贝结构体数据

#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	memcpy(arr2, arr1, 40);
//	int i = 0;
//	for (i = 0; i < 20; i++) {
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//
//}


//int main() {
//	float arr1[] = { 1.0,2.0,3.0,4.0,5.0 };
//	float arr2[20] = { 0 };
//
//	memcpy(arr2, arr1, 40);
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		printf("%lf ", arr2[i]);
//	}
//	return 0;
//
//}


//函数拷贝结束后，会返回目标空间的起始地址
//void* my_memcpy(void* dest, const void* src, size_t num) {
//	void* ret = dest;
//	assert(src && dest);
//	while (num--) {
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		//dest = (char*)dest++; 强制类型转换是一时的
//		src = (char*)src + 1;
//	}
//
//	return ret;
//
//
//}

//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 06 
//
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 21);
//	int i = 0;
//	for (i = 0; i < 20; i++) {
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 06 
//memcpy函数是用来处理不重叠的内存拷贝
//因为前面的地址在cpy以后，就被新的数值覆盖了
//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int arr2[20] = { 0 };
//	my_memcpy(arr1+2, arr1, 21);
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//
//void* my_memmove(void* dest, const void* src, size_t num) {
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src) {
//		//前->后
//		while (num--) {
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else {
//		//后->前
//		while (num--)//20
//		{
//			*((char*)dest + num) = *((char*)src + num);
//
//
//		}
//	}
//	return ret;
//}
////vs 上memcpy可以实现重叠拷贝
//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	my_memmove((arr1 + 2), arr1, 20);//重叠使用，使用memmove
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//int main() {
//	int arr1[] = { 1,2,1,4,5,6 };
//	int arr2[] = { 1,2,257 };
//	int ret = memcmp(arr1, arr2, 10);
//
//	printf("%d", ret);
//
//
//	return 0;
//}


//memset//内存设置，把指向内存的地址后的n个字节，转换成我们想要的内容


//int main() {
//	char arr[] = "hello world";
//	memset(arr + 1, 'x', 4);//以字节为单位
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main() {
//	int arr[10] = {0};
//	memset(arr, 1, 10);
//
//	return 0;
//}

//杨氏矩阵
//矩阵 -- 二维数组
//矩阵从左到右，从上到下都是递增，
//小于0（N），需要遍历数组每个数组，找到所需要的数字
//
//void yooung_search(int arr[3][3], int k, int* px, int* py) {
//
//	int x = 0;
//	int y = *py -1;
//	int flag = 0;
//	while (x <= *px-1 && *py >= 0) {
//		if (arr[x][y] < k) {
//			x++;
//		}
//		else if (arr[x][y] > k) {
//			y--;
//		}
//		else {
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	*px = -1;
//	*py = -1;
//}
//
//
//int main() {
//
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//	yooung_search(arr, k, &x, &y);
//	if (x == -1 && y == -1) {
//		printf("can't find\n");
//	}
//	else {
//		printf("find, subscript is %d %d\n", x, y);
//	}
//	return 0;
//
//
//}

//字符串左旋
//abcdef
//左旋1 bcdefa
//左旋2 cdefab

#include <string.h>

//void left_move(char* str, int k) {
//	int j = 0;
//	for (j = 0; j < k; j++) {
//		char tmp = *str;
//		int len = strlen(str);
//		int i = 0;
//		for (i = 0; i < len - 1; i++) {
//			*(str + i) = *(str + i + 1);
//
//		}
//		*(str + len - 1) = tmp;
//	}
//
//}
//
//int main() {
//
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//
//	printf("%s\n", arr);
//
//}

//void reverse(char* left, char* right) {
//	assert(left && right);
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* str, int k) {
//	int len = strlen(str);
//	k %= len;
//	//左边逆序
//
//	reverse(str, str + k - 1);
//	//右边逆序
//	reverse(str + k, str + len - 1);
//	//整体逆序
//	reverse(str, str + len - 1);
//
//}
//
//int main() {
//
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//
//	printf("%s\n", arr);
//
//}

