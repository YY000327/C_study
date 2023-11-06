#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//void GetMemory(char* p)//�յ���һ����str�Ŀ�ָ��
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//p���βΣ����˺����Ͳ������ˣ����������ǿ�ָ��
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main() {
//	Test();//������һ����ָ�����˼
//
//	return 0;
//}
////1.��NULLָ������˽����ò�������������
////2.�ڴ�й©�����⣬û���ͷſռ�


//void GetMemory(char** p)//�յ���һ����str�Ŀ�ָ��
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//p���βΣ����˺����Ͳ������ˣ����������ǿ�ָ��
//	strcpy(str, "hello world");
//	printf(str);
//	//�ͷ�
//	free(str);
//	str = NULL;
//}
//
//int main() {
//	Test();//������һ����ָ�����˼
//
//	return 0;
//}

//char* GetMemory(void)
//{
//	static char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main() {
//
//	Test();
//
//
//	return 0;
//}

//int* test() {
//	int a = 10;
//	return &a;
//}
//
//int main() {
//
//	int* p= test();
//	printf("*p = ");
//
//
//	printf("%d\n", *p);
//	return 0;
//}



//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//�����ͷ�
//	free(str);
//	str = NULL;
//}
//
//int main() {
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main() {
//	Test();
//	return 0;
//}

//int d = 200;
//
//int main() {
//	int a = 10;
//	int b = 20;
//	static int c = 100;
//	printf("%p", &c);
//
//
//	return 0;
//}


//struct S {
//	int n;
//	int arr[];//��������
//};
//
//int main() {
//	//printf("%d\n", sizeof(struct S));
//	struct S* ps = malloc(sizeof(struct S) + 40);
//	if (ps == NULL) {
//		perror("malloc");
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		ps->arr[i] = i + 1;
//	}
//
//	//�ռ䲻���ˣ���Ҫ����
//	struct S* ptr = realloc(ps, sizeof(struct S) + 60);
//	if (ptr == NULL) {
//		perror("realloc");
//		return 1;
//	}
//	ps = ptr;
//	ps->n = 15;
//	for (i = 0; i < 15; i++) {
//		printf("%d\n", ps->arr[i]);
//	}
//
//	free(ps);
//	ps = NULL;
//	return 0;
//}

struct S {
	int n;
	int* arr;
};

int main() {
	struct S* ps = malloc(sizeof(struct S));
	if (ps == NULL) {
		perror("malloc->pc");
		return 1;
	}
	ps->n = 100;
	ps->arr = (int*)malloc(40);
	if (ps->arr == NULL) {
		perror("malloc->arr");
		return 1;
	}


	int i = 0;



	for (i = 0; i < 10; i++) {
		ps->arr[i] = i + 1;
	}

	int* ptr = (int*)realloc(ps->arr, 60);
	if (ptr != NULL) {
		ps->arr = ptr;
	}
	else {
		perror("realloc");
		return 1;
	}

	for (i = 0; i < 15; i++) {
		printf("%d\n", ps->arr[i]);
	}


	free(ps->arr);
	ps->arr = NULL;

	free(ps);
	ps = NULL;

	return 0;
}