#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
////ָ�����ڴ���һ����С��Ԫ�ı�ţ�Ҳ���ǵ�ַ
////
//int main() {
//
//	int a = 100;
//	int* pa = &a;//pa��ר��������������ģ������pa����ָ�����
//	//ָ����ǵ�ַ
//
//	//ָ�������32λ��ƽ̨����4���ֽ�
//	//ָ�������64λ��ƽ̨����8���ֽ�
//	int arr[100];
//	printf("%p\n", &a);
//
//
//	return 0;
//}


////ָ�����͵�����
//int main() {
//	
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//
//
//	return 0;
//}
////ָ�����;�����ָ������ò�����Ȩ��

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
////ָ�����;���ָ��+/-1����ʱ�Ĳ���
////����ָ��+1����4���ֽ�
////�ַ�ָ��+1����1���ֽ�

////Ұָ��
//int main() {
//	int* pa;//�ֲ���������ʼ����ʱ�����������ֵ
//	//ָ��δ��ʼ���ͻ�
//	//ָ��Խ��Ҳ��Ұָ��
//	*pa = 20;
//	printf("%d\n", *pa);
//	return 0;
//}

//��ι��Ұָ��
//1.ָ���ʼ��
//		�����֪����ʼ�����ݣ����Գ�ʼ��NULL
//		��ָ�룺û��ָ���κ���Ч�Ŀռ䣬ָ�벻��ֱ��ʹ��
//2.С��ָ��Խ��
//3.ָ��ָ��Ŀռ��ͷţ���ʹָ��NULL
//4.���ⷵ�ؾֲ������ĵ�ַ
//5.ָ��ʹ��֮ǰ�����Ч��
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
//	//ָ���ָ�������ǰ���ǣ�����ָ��ָ������ͬ�Ŀռ�
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

//ָ��Ĺ�ϵ������ǱȽ�ָ��Ĵ�С
