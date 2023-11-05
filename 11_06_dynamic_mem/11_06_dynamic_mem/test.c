#define  _CRT_SECURE_NO_WARNINGS 1

//动态内存分配
//malloc
//free
//calloc
//realloc

#include <stdio.h>
#include <stdlib.h>
//
//int main() {
//	//int arr[10];
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		perror("malloc");
//		return 1;
//	}
//	//开辟成功
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	
//	return 0;
//}
//malloc申请到空间后直接返回这块空间的其实地址，不会初始化内容
//malloc申请的内存空间，当程序退出时，还给操作系统
//当程序不退出，动态申请的内存，不会主动释放
//需要使用free函数来释放


//int main() {
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL) {
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d\n", *(p + i));
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main() {
//	int* p = (int*)malloc(40);
//	if (p == NULL) {
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		p[i] = i + 1;
//
//	}
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr != NULL) {
//		p = ptr;
//		ptr = NULL;
//	}
//	else {
//		perror("realloc");
//		return 1;
//	}
//	for (i = 0; i < 20; i++) {
//		printf("%d\n", p[i]);
//
//	}
//	free(p);
//	p = NULL;
//
//
//	return 0;
//
//}

//reallo函数分析
//情况1：后面有足够的空间，是原来的地址
//情况2：后面的空间不够，会寻找一个新的空间，然后返回一个新的空间地址
//情况3：返回NULL，内存泄露了

//int main() {
//	//int arr[10];
//	int* p = (int*)malloc(40);
//	if (p == null) {
//		perror("malloc");
//		return 1;
//	}
//	//开辟成功
//	int i = 0;
//
//	//对动态开辟空间的越界访问
//	for (i = 0; i < 20; i++) {
//		printf("%d\n", *(p + i));//越界访问
//	}
//	free(p);
//	p = null;
//
//	
//	return 0;
//}

