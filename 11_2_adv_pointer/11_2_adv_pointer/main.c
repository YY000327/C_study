#define  _CRT_SECURE_NO_WARNINGS 1

//��ַ������ĵ��߲�����
//32λ���� - 32����ַ�� - 1/0
//�����32��0/1��ɵĶ�����������Ϊ��ַ��������Ҫ32��bitλ���ܴ洢��ַ
//��Ҫ4���ֽ�
//�����64λ�Ļ���������Ҫ8���ֽ�
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

//ָ������ - ���ָ�������
//�������� - ������͵�����

//int main() {
//	int* arr[10];
//
//	return 0;
//}

//ʹ��ָ��ģ���ά����

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

//����ָ�� - ָ�������ָ�룬�������ĵ�ַ��ָ�����
//����ָ�� - ָ�����ͱ�����ָ�룬������ͱ����ĵ�ַ��ָ�����
// int (*p2)[10];


//��������������Ԫ�صĵ�ַ
//���������⣺
//1. sizeof����������������������������������Ԫ�صĵ�ַ����������ʾ�������飬sizeof�������������������������Ĵ�С����λ���ֽ�
//2. &���������������������ʾ�������飬&��������ȡ��������ĵ�ַ
//����֮�⣬���еĵط���������������Ԫ�صĵ�ַ
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
//������������˵��&�������õ���������ĵ�ַ


//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int[10] * p = &arr;//err
//	int (*p)[10] = &arr;
//
//	return 0;
//}

//����ָ���ʹ��

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
//����ָ��ʹ���ڶ�ά����ȽϷ���


//��ά���鴫�Σ��β���ָ�����ʽ

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
//	//��ά�����ÿһ�п������Ϊ��ά�����һ��Ԫ��
//	// ÿһ������һ��һά����
//	// ��ά������ʵ��һά���������
//	// ��ά�������������Ҳ��������������������������Ԫ�صĵ�ַ
//	// arr=��Ԫ�صĵ�ַ
//	//	  = ��һ�еĵ�ַ
//	//	  = һά����ĵ�ַ-����ĵ�ַ
//	//arr������������������ʾ��Ԫ�صĵ�ַ
//	Print(arr, 3, 5);
//
//	return 0;
//}
//һά���鴫�Σ��βεĲ��ֿ��������飬Ҳ������ָ��

//��ά���鴫�Σ��β���ָ�����ʽ
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
//	//arr ������������������ʾ������Ԫ�صĵ�ַ
//
//	Print(arr, 3, 5);
//		
//	return 0;
//}
//



//����ָ�� - ָ������ָ��
//

//int Add(int x, int y) {
//	return x+y;
//}
//int main() {
//
//	//int arr[10]
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//�������Ǻ����ĵ�ַ
//	//&������Ҳ�Ǻ����ĵ�ַ
//
//	int (*pf)(int, int) = &Add; //pf�Ǻ���ָ�����
//	//int (*)(int, int) �Ǻ���ָ������
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

////void (*p)() -p��һ������ָ��
////void (*)() �Ǻ���ָ������
//int main() {
//
//	//����0��ַ���ĺ���
//	//1.��0ǿ������ת��λvoid(*)()
//	//2.����0��ַ�����������
//	(*(void(*)())0)();
//
//	return 0;
//}


//
//int main() {
//
//	void(*signal(int, void(*)(int)))(int);
//	//signal��һ����������
//	//signal������������������һ��������������int���ڶ���������������void��*��(int)����ָ������
//	//�ú���ָ��ָ��ĺ�����һ��int�Ĳ���������������void
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