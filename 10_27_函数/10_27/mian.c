#define  _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
#include <math.h>

//c���Խ����õĹ��ܷ�װ����һ��������������Ϊ�⺯��

//IO���� �������
//�ַ�����������
//�ڴ��������
//ʱ��/���ں���
//���ֺ���
//��������...
//char * strcpy ( char * destination, const char * source );
// return destination

//int main() {
//
//	char arr1[] = "hello";
//	char arr2[20] ="xxxxxxxxx";//�������飬������������ĵ�һ��Ԫ�صĵ�ַ��Ҳ������ʼ��ַ
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


//�Զ��庯��
//
//int get_max(int x, int y) {
//	int z = (x > y ? x : y);//���x����y��ѡ��x��������Ǿ�ѡ��y
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
//	printf("�ϴ�ֵ��%d\n",m);
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

//�����������͵ı���

//void swap(int *pa, int *pb/*��ʽ���� - �β�*/) {
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
//	//ʵ�ʲ��� - ʵ��
//	//��ʵ�δ��ݵ��βε�ʱ��
//	//�β���ʵ�ε�һ����ʱ����
//	//���Զ��βε��޸Ĳ���Ӱ��ʵ��
//	swap(&a, &b);
//	printf("after a= %d b= %d\n", a, b);
//
//	return 0;
//}
//

//int get_max(int x, int y) {
//	int z = (x > y ? x : y);//���x����y��ѡ��x��������Ǿ�ѡ��y
//	return z;
//}//�β�ֻ���ٺ������õ�ʱ��Ż�ʵ��������������Զ�����
//
//int main() {
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int m = get_max(a, b);//����
//	m = get_max(a, 7);//����
//	m = get_max(a, get_max(4, 8));//�����Ĳ����Ǻ����ĵ���
//	printf("�ϴ�ֵ��%d\n",m);
//
//	return 0;
//}

//ʲôʱ�򴫵�ַʲôʱ�򴫱�����
//��Ҫ�ı�ʵ�ε����ݵ�ʱ����Ҫ����ַ������ֱ�ӿ��Դ�����
//


//�ڴ��Ϊ��ջ������������̬��
//ջ�����ֲ��������β�
//��������̬�ڴ����malloc��realloc��calloc��free
//��̬������̬������ȫ�ֱ���
//int a = 10;
//����a����һ����ַ�����������ǳ���Ա�Լ����ģ�����������ʱֻ����ַ

//�������ã���ֵ���úʹ�ַ����

//��ֵ�������βζ���ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ��
//��ַ�����Ǻ����ⲿ�����ı������ڴ��ַ���ݣ����ÿ���ֱ��Ӱ�쵽ʵ��


//������������� 1

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
//		//�ж�i�Ƿ�Ϊ����
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

////1. ������ôʹ��
////2. ʵ�ֺ���
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
//	//���ֲ���
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






















//���� 2



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


//Ƕ�׵��ã�����֮��Ļ������


//����Ƕ�׵��ã����ǲ���Ƕ�׶��壬һ�������ﲻ�ܶ���һ��������ÿһ���������Ƕ�����



//int main()
//{
//	int len = strlen("abcdef");
//
//	printf("%d", len);
//
//	printf("%d", strlen("abcdef");//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
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



//��������Ҫ�������ٵ���
//�������������������βε����ֿ���ʡ��
//#include "add.h"
//#pragma comment(lib,"add.lib")//���뾲̬��
////,lib-��̬��
//int main() {
//
//	int num = 0;
//	num = test(num);//�����ĵ���
//	num = test(num);
//	printf("%d\n", num);
//
//	return 0;
//}



//�����������Ͷ��岻������ʹ�õ�
//����������Ҫ����ͷ�ļ���




//�����ݹ�

//�����������ļ��ɾ��ǵݹ�
//���ܻ����ݹ����ջ���
//�ݹ����Ҫ˼����ʽ�Ǵ��»�С
//int main() {
//	printf("HH\n");
//	main();
//	return 0;
//}

//�����ĵ��ö�ջ
//����ջ֡������ջ֡������ջ����洢��ÿһ�κ������ö�Ҫ��ջ���ڷ���һ��ռ������溯���ڵ��ù����е���������Ϣ
//���ں�����ջ֡�Ĵ���������
//�ݹ����������������Ȼ�����ջ
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
//	//����һ�������֣�
//	scanf("%d", &num);
//	print(num);
//	return 0;
//
//}


//��д��������������ʱ���������ַ������ȣ�
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
////my_strlen(abc),һ��ʼ��ָ��ָ��a��a����\0�����1����1
////1+my_strlen(bc)����ָ��ָ����һ������...
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



//�ݹ������


//n�Ľ׳�
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

//���n��쳲�������
//ǰ�������ĺ��ǵ�������

//int Fib(int n) {
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//
//}

//����д��
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




