#define  _CRT_SECURE_NO_WARNINGS 1

//���飺һ����ͬ���͵ļ���

//�ṹ�������
// struct tag
// {
//	member-list; ��Ա�б�
// }variable-list; �����б�
//
//
//struct S {
//	int a;
//	char c;
//	float f;
//};
//
//struct  {
//	int a;
//	char c;
//	float f;
//}x;
//
//struct  {
//	int a;
//	char c;
//	float f;
//}* p;
//

//struct Node {
//	int data;
//	struct Node* next;
//};


//typedef struct Node {
//	int data;
//	struct Node* next;
//}Node;
//
//
//int main() {
//
//	//struct S s;
//	//p = &x;//error
//	Node n = { 1 };
//	Node x = { 1,1,2,2,3,3 };
//	return 0;
//}
//
//


#include <stdio.h>


//struct SN {
//	char c;
//	int i;
//
//}sn1 = { 'q',100 }, sn2 = { .i = 200, .c = 'w' };//ȫ�ֱ���
//
//struct S {
//	double d;
//	struct SN sn;
//	int arr[10];
//};
//
//int main() {
//
//	//struct SN sn3,  sn4;
//
//	//printf("%c %d\n", sn2.c, sn2.i);
//
//	struct S s = { 3.14, {'a', 99},{1,2,3} };
//	printf("%lf %c %d\n", s.d, s.sn.c,s.sn.i);
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//
//		printf("%d ", s.arr[i]);
//	}
//
//	return 0;
//}


////�ṹ���ڴ���룬����ṹ���С
//#include <stddef.h>
//struct S1 {
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2 {
//	int i;
//	char c1;
//	char c2;
//};
//
//int main() {
//
//	//printf("%d\n", sizeof(struct S1));
//	//printf("%d\n", sizeof(struct S2));
//	printf("%d\n", offsetof(struct S1, c1)); //���Լ���ṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//
//	return 0;
//}
//�ṹ��Ķ�����򣬽ṹ���Ա���ǰ���˳�����ڴ���������ŵģ������ж������
//	1.�ṹ��ĵ�һ����Ա��Զ��������ڽṹ�����ʼλ��ƫ����Ϊ0��λ��
//	2.�ڶ�����Ա��ʼ�������ÿ����Ա��Ҫ���䵽ĳ������������������
//		���������ṹ���Ա�����С��Ĭ�϶������Ľ�Сֵ
//		vs��Ĭ�϶�������8
//		gcc û��Ĭ�϶������𣬶��������ǽṹ���Ա�������С
//	3.�ṹ����ܴ�С����������������������
//		���������ǣ����г�Ա�Ķ����������ֵ
//	4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ��Ķ����������������������ṹ��������С������������������������

//struct S3 {
//	double d;
//	char c;
//	int i;
//
//};
//
//int main() {
//
//	printf("%d\n", sizeof(struct S3));
//
//	return 0;
//}

//�޸�Ĭ�϶�����

#include <stdio.h>
//#pragma pack(1)
//
//struct S {
//	char c1;
//	int a;
//	char c2;
//
//};
//
//
//int main() {
//
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}


//�ṹ�崫��


//struct S
//{
//	int data[100];
//	int num;
//
//};
//
//void print1(struct S tmp) {
//	printf("%d\n", tmp.num);
//}
//
//void print2(const struct S* ps) {
//	printf("%d\n", ps->num);
//}
//
//int main() {
//	struct S s = { {1,2,3},100 };
//
//	print1(s);
//	print2(&s);
//
//
//	return 0;
//}


//λ�Σ�λ��


//struct A
//{
//	int _a : 2; //������λ
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main() {
//
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}

//struct S
//{
//	char a : 3; //������λ
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main() {
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}


//ö�٣� һһ�о�

//enum day{
// a;
//
//
//enum Color {
//	RED = 1,
//	GREEN = 2,
//	BLUE = 8
//};
//
//int main() {
//
//	enum Color c = GREEN;
//
//	printf("%d\n", c);
//
//
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n",BLUE);
//
//
//}

//���ϣ������壩
//
//union Un {
//	char c;
//	int i;
//
//};
//
//int main() {
//
//	printf("%d\n", sizeof(union Un));
//	union Un un = { 0 };
//
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%p\n", &un);
//	printf("%p\n", &un.i);
//	printf("%p\n", &un.c);
//
//
//
//	return 0;
//}


//
//int check_sys() {
//	union Un
//	{
//		int i;
//		char c;
//
//	}un = { .i = 1 }; 
//		return un.c;
//}
//int main() {
//	int ret = check_sys();
//
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//
//
//	return 0;
//}


union Un1 {
	char c[5];
	int i;

};
union Un2 {
	short c[7];
	int i;
};

int main() {
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));


}