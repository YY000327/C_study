#define  _CRT_SECURE_NO_WARNINGS 1

//��̬�ڴ����
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
//	//���ٳɹ�
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
//malloc���뵽�ռ��ֱ�ӷ������ռ����ʵ��ַ�������ʼ������
//malloc������ڴ�ռ䣬�������˳�ʱ����������ϵͳ
//�������˳�����̬������ڴ棬���������ͷ�
//��Ҫʹ��free�������ͷ�


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

//reallo��������
//���1���������㹻�Ŀռ䣬��ԭ���ĵ�ַ
//���2������Ŀռ䲻������Ѱ��һ���µĿռ䣬Ȼ�󷵻�һ���µĿռ��ַ
//���3������NULL���ڴ�й¶��

//int main() {
//	//int arr[10];
//	int* p = (int*)malloc(40);
//	if (p == null) {
//		perror("malloc");
//		return 1;
//	}
//	//���ٳɹ�
//	int i = 0;
//
//	//�Զ�̬���ٿռ��Խ�����
//	for (i = 0; i < 20; i++) {
//		printf("%d\n", *(p + i));//Խ�����
//	}
//	free(p);
//	p = null;
//
//	
//	return 0;
//}

