#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//��Ŀ������
//exp1?exp2:exp3
//���exp1Ϊ�棬exp2ִ�У����exp1Ϊ�٣�exp3ִ��

//int main() {
//
//	int a = 0;
//	int b = 0;
//	//if (a > 5) {
//	//	b = 3;
//
//	//}
//	//else
//	//	b = -3;
//
//	b = (a > 5) ? 3 : -3;
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d%d", &a, &b);
//
//	m = (a > b ? a : b);
//	printf("%d\n", m);
//
//	return 0;
//}

//���ű��ʽ���������Ҽ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
//
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//
//	return 0;
//
//}


////�±����ò�����
//
//int main() {
//	int arr[10] = { 1,2,3,4,5 };
//	//�������ʼ�����±��
//
//	printf("%d\n", arr[2]);//[]�±����ò�������arr��2��[]������������
//	return 0;
//}
//

////�������ò�����
//int main() {
//	int len = strlen("abc");//()�������ò�����
//	//strlen�͡�abc���ǲ������Ĳ�����
//
//	return 0;
//}

//�ɱ���������б�-�����������Ǳ仯��

//�ṹ��Ա������
//
//struct Book
//{
//	char name[30];
//	char aunthor[20];
//	float price;
//};
//int main() {
//
//	struct Book b1 = { "cll","mr.Li",65.5f };
//	struct Book b2 = { "c22","mr.Yang",165.5f };
//
//	printf("%s %s %f\n", b1.name, b1.aunthor, b1.price);
//
//	printf("%s %s %f\n", b2.name, b2.aunthor, b2.price);
//	return 0;
//}



//struct Book
//{
//	char name[30];
//	char aunthor[20];
//	float price;
//};
//Print(struct Book* p) {
//	printf("%s %s %f\n", (*p).name, (*p).aunthor, (*p).price);
//	printf("%s %s %f\n", p->name, p->aunthor, p->price);
//}
//int main() {
//
//	struct Book b1 = { "cll","mr.Li",65.5f };
//	struct Book b2 = { "c22","mr.Yang",165.5f };
//	Print(&b1);
//	Print(&b2);
//	
//	return 0;
//}
//
////��������
//int main() {
//	char c1 = 5;
//	//00000101 - c1
//	char c2 = 127;
//	//01111111 - c2
//	char c3 = c1 + c2;
//	//00000000000000000000000000000101
//	//00000000000000000000000001111111
//	//00000000000000000000000010000100
//	//10000100-c3
//	//%d -10���ƴ�ӡ�з��ŵ�����
//	//11111111111111111111111110000100-����
//	//11111111111111111111111110000011-����
//	//11000000000000000000000001111100-ԭ�� -->-124
//	printf("%d\n", c3);
//	return 0;
//
//
//}

//%u - 10���Ƶ���ʽ��ӡ�޷��ŵ�����
// ���ڲ��������ȼ��ߵ�����
//���ڲ����������ȼ���ͬ������£����������