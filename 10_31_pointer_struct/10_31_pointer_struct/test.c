#define  _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//
////ָ�������
////�����У���������������Ԫ�صĵ�ַ��������==��ַ==ָ��
//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//
//	for (i = 0; i < sz; i++) {
//		printf("%p == %p\n", p + i, &arr[i]);
//
//		printf("%d \n", *(p + i));
//	}
//
//	return 0;
//}

//
//
//int main() {
//	int a = 10;
//	int* p = &a;
//	//p��һ��ָ�������ָ�����Ҳ�Ǳ���������ʵ���ڴ��п���һ���ռ�
//	int* * pp = &p;
//	//pp���Ƕ���ָ�����������ָ��������Ǵ洢һ��ָ��ĵ�ַ
//	//int*��˵��ppָ�����p��Ϊһ��ָ�����
//	*(*pp) = 100;
//	printf("%d\n", a);
//
//	int** * ppp = &pp;
//	return 0;
//}

////����ָ��
//int main() {
//
//	char arr1[] = "abcdef";
//	char arr2[] = "hello world";
//	char arr3[] = "caihua";
//	char* parr[] = { arr1,arr2, arr3 };
//	char** p = parr;
//
//
//	return 0;
//}
////ָ������:���ָ�������

//int main() {
//
//	char arr1[] = "abcdef";
//	char arr2[] = "hello world";
//	char arr3[] = "caihua";
//	char* parr[] = { arr1,arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%s\n", parr[i]);
//	}
//
//
//	return 0;
//}


//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 5; j++) {
//			//printf("%d ", parr[i][j]);
//			printf("%d ", *(parr[i] + j));
//
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}



//Struct
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��ÿ����Ա�����ǲ�ͬ���͵ı���
//����һ��ѧ��
//����+����+�Ա�

//�����ṹ������
//struct Stu
//{
//	//��Ա�����������������ṹ������������
//	char name[20];
//	int age;
//	char sex[5];
//
//}s2,s3,s4;//�ṹ�����-ȫ�ֱ���
//
//int main()
//{
//
//	struct Stu s1;//�ֲ�����
//
//
//
//	return 0;
//}


//typedef struct Stu
//{
//	//��Ա�����������������ṹ������������
//	char name[20];
//	int age;
//	char sex[5];
//
//}Stu;//�ṹ�����-ȫ�ֱ���
//
//int main()
//{
//
//	struct Stu s1;//�ֲ�����
//	Stu s2;//��c�����У�û�жԽṹ������typedef��struct����ʡ��
//
//	return 0;
//}

//�ṹ���Ա�����Ǳ��������������ṹ�屾��
//struct S {
//	int a;
//	char arr[5];
//	int* p;
//
//}s1 = { 100,"bit",NULL };
//
//struct S s2 = { 98, "hehe", NULL };
//
//struct B
//{
//	char ch[10];
//	struct S s;
//	double d;
//};
//
//int main() {
//
//	struct S s3 = { .arr = "abc", .p = NULL, .a = 1 };
//	printf("%d %s %p\n", s3.a, s3.arr, s3.p);//�ṹ��Ա���ʲ�����
//	struct B sb = { "hello", {20, "qqq", NULL},3.14 };
//	printf("%s %d %s %p %.2lf\n", sb.ch, sb.s.a, sb.s.arr, sb.s.p, sb.d);
//	return 0;
//}
////.���������ó���Ա�ı���

//#include <string.h>
//
//struct Stu {
//	char name[20];
//	int age;
//};
//set_stu(struct Stu* ps) {
//	ps->age = 20;//�ṹ��ָ��->�ṹ���Ա
//	strcpy(ps->name, "zhangsan");
//
//
//
//}
//void print_stu(struct Stu t) {
//	printf("%s %d\n", t.name, t.age);
//}
//
//
//int main() {
//
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//
//	return 0;
//}//�ṹ�崫�Σ��������ṹ��ĵ�ַ



//n = n&(n-1)�У�����n�Ķ��������ұߵ�1��ʧ