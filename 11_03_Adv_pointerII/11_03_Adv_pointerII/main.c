#define  _CRT_SECURE_NO_WARNINGS 1

//����ָ������
//����ÿ��Ԫ����һ������ָ�����ͣ�
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
//	//����ָ������
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input) {
//					
//		case 1:
//			printf("��������������ʱ��");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("��������������ʱ��");
//			scanf("%d %d", &x, &y);
//			ret = Sub (x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("��������������ʱ��");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("��������������ʱ��");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//
//		}
//	} while (input);
//
//
//	return 0;
//}


//
////����ָ��ķ�ʽ
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
//	//����ָ�������ʹ�� - ת�Ʊ�
//	int(*pfArr[5])(int, int) = {NULL, Add, Sub, Mul, Div };
//	do {
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("��������������ʱ��");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0) {
//			printf("�˳�������\n");
//
//		}
//		else {
//			printf("ѡ�����\n");
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
//	//����ָ���д����ͬ
//	int (*p)(int, int);
//
//	return 0;
//}


//ָ�������Ӻ������ָ��
//int(*pfArr[4])(int, int);
//int(*(*p)[4])(int, int) = &pfArr;


//����ָ����һ����;����ʵ�ֻص�����


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
//	printf("��������������ʱ��");
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
//		printf("��ѡ��:>");
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
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//
//		}
//	} while (input);
//
//
//	return 0;
//}


//qSort�����ص㣺
//1.�������򷽷�
//2.

//void qsort(void* base, size_t num, size_t size, 
//				int(*compar)(const void*, const void*)); -�������ָ��ָ��ĺ������ܹ��Ƚ�baseָ�������е�����Ԫ��
//
//
////��ǰֻ�ʺ����ͷ�ʽ
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
////ð������
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
////����qsot������������
//test1() {
//	int arr[10] = { 10,3,4,9,8,7,6,5,1,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Ĭ���������
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//
//
//}
//
////����qsort����ṹ������
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

//vvoid* ָ����Խ�������ָ������
//void* ָ��- �޾������͵�ָ��
//�������͵�ָ���ǲ���ֱ�ӽ����ò�����
//Ҳ����ֱ�ӽ���ָ������
//int main() {
//
//	int a = 10;
//	float f = 3.14f;
//	int* pa = &a;
//	//char* pc = &a;//error
//	void* pv = &a;
//	pv = &f;
//	*pv;//error,��֪��ָ������
//	pv++;//�޷�����
//	return 0;
//}

void print(int arr[], int sz) {
	for (int i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
}

void Swap(char* buf1, char* buf2, int size) {//��������Ԫ��
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

//ʹ��ð�������˼�룬ʵ��һ������������qsort�ĺ���
void bubble_sort(void* base,int num, int size, int(*cmp)(const void*, const void* )) {
	int i = 0;
	for (i = 0; i < num - 1; i++) {
		int j = 0;
		for (j = 0; j < num - 1-i; j++) {
			//������Ҫ����cmp>0;����
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size)>0)//��Ҫ��arr[j]��arr[j+1]�ĵ�ַд��ȥ
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
	//Ĭ���������
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

//дһ�����ں���ָ��ķ�ʽ��ģ��qsort����ð������

