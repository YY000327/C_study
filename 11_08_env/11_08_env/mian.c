#define  _CRT_SECURE_NO_WARNINGS 1

//������ܹ�ִ�ж�����ָ��
//��������д����C���Դ������ı���Ϣ�����������ֱ�����
//���뻷����c���ԵĴ��� �������������������Ƶ�ָ��

//vs ����
#include <stdio.h> 

//extern int Add(int, int);
//
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = Add(a, b);
//	printf("%d", c);
//
//	return 0;
//
//}
//����Ա����������

//Ԥ�������
//
//int main() {
//
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	//printf("%s\n", __STDC__);//��ǰvs��֧��ANSI C
//
//
//	return 0;
//}

//
//#include <stdio.h>
//#define M 100
//#define STR "abc"
//#define FOR for(;;)
//
//int main() {
//
//	printf("%d\n", M);
//	printf("%s\n", STR);
//	FOR;
//
//	return 0;
//}

//#define CASE break;case
//
//int main() {
//	int d = 0;
//	switch (d) {
//	case 1:
//		break;
//	case 2:
//		break;
//	case 3:
//		break;
//	}
//	return 0;
//}
//
//int main() {
//	int d = 0;
//	switch (d) {
//	case 1:
//	CASE 2:
//	CASE 3:
//	}
//	return 0;
//}

//��һ�е�ĩβ����\��һ�����з���\��ֱ�ӻ���

//#define�����

//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int main() {
//	int a = 2;
//	int b = -2;
//	int c = MAX(a, b);
//	printf("c=%d\n", c);
//
//	return 0;
//}

////#define SQUARE(x) ((x)*(x))//����һ��Ҫ�ӣ���
//#define DOUBLE(x) ((x)+(x))//����ҲҪ�ӣ���
////��Ĳ������滻��ȥ��
//
//int main() {
//	int a = 3;
//	int r =10* DOUBLE(a);
//	printf("r=%d\n", r);
//
//
//	return 0;
//}

//#define SQUARE(x) ((x)*(x))
//#define M 3//����ҲҪ�ӣ���
////��Ĳ������滻��ȥ��
//
//int main() {
//	int a = 3;
//	int r =SQUARE(M+2);
//	printf("M=%d\n", M);//�ַ�����ĺ겻�ᱻ�滻
//	printf("r=%d\n", r);
//
//
//	return 0;
//}
//

//int main() {
//
//	printf("hello world\n");
//	printf("hello" "world\n");
//
//}

//#define PRINT(n, format) printf("the value of " #n " is " format "\n", n)
////#,��һ���������ɶ�Ӧ���ַ���
//
//int main()
//{
//	int a = 20;
//	//printf("the value of a is %d\n", a);
//	PRINT(a,"%d");
//
//	int b = 15;
//	//printf("the value of b is %d\n", b);
//	PRINT(b, "%d");
//
//	float f = 4.5f;
//	PRINT(f,"%lf");
//
//}

//#define CAT(x,y) x##y
//int main() {
//	int Class110 = 2024;
//	printf("%d\n", CAT(Class, 110));
//	printf("%d\n", Class110);
//	return 0;
//}

//int main() {
//
//	int a = 10;
//	//int b = a + 1; //b =11. a = 10
//	//int b = ++a; // b=11, a=11//a�ڽ���ӷ����Լ�Ҳ���ˣ�����Ǹ�����
//
//
//	return 0;
//}

//#define MAX(a,b)((a)>(b)?(a):(b))//���������޹ص�
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 5;
//	int b = 6;
//	int c = MAX(a++, b++);
//	//int c = ((a++) > (b++) ? (a++) : (b++));//��ĸ����ã�
//
//	printf("c = %d\n", c);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//
//}


////��������Ǻ�������û�е�
//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//int main() {
//	int* p = (int*)malloc(126 * sizeof(int));
//	int* p = MALLOC(126, int);
//
//	return 0;
//}

//inline - ����
//�������������к��������ƣ�Ҳ���к�ĺ�