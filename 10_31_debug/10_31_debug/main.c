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
////F10�����������ã�ֱ�Ӿ�ִ�����
////F11����ϸ�£�����뺯���۲캯��ִ�еĹ���

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
////ջ���Ƚ����


//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
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


//ģ��ʵ�ֿ⺯�� strcpy

#include <string.h>
#include <assert.h>
//void my_strcpy(char* dest, char* src) {
//	//����
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


////�������ص���Ŀ���ַ����ʼ��ַ
//char*  my_strcpy(char* dest, const char* src) {
//	char* ret = dest;
//	//����
//	assert(dest != NULL);
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//		;//�����
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
//	*pa = 20;//���error
//	printf("%d\n", n);
//
//
//
//	return 0;
//}

//��const����*��ߵ�ʱ�����Ƶ���ָ��ָ������ݣ�����ͨ��ָ������ı�ָ������ı��٣�����ָ������ǿ��Ըı��
//��const����*�ұߵ�ʱ�����Ƶ���ָ�뱾��ָ�������ʡ���ܸı䣬��ָ��ָ������ݿ���ͨ��ָ�����ı�

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
//	//p = &n;//���߶���������
//	printf("%d\n", m);
//
//
//	return 0;
//}
//
//


//ģ��ʵ��һ��strlen
//
//size_t my_strlen(const char* const arr) {
//	assert(arr != NULL);
//	if (*arr =='\0')
//		return 0;
//	else
//		return 1+ my_strlen(arr+1);//arr+1������ǽ�arrָ������ƶ�һ��
//
//}
//������Լ򵥣����ǵݹ麯�������ڴ���ջ�Ŀ����ϴ����ײ�����������������ַ��������϶�

//size_t my_strlen(const char* arr) {
//	char* start = arr;
//	while (*arr) {
//		arr++;
//	}
//	return arr - start;
//}
//���ֻ������һ���ַ��������ڽ�����ʱ�������ĵ�ַ��ȥ��ʼ��ַ�����ܵõ��ַ����ĳ��ȣ�

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


//size_t��ר��Ϊsizeof��Ƶ�һ������
//size_tһ���� usigned int/ unsigned long


 





