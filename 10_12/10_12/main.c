#define  _CRT_SECURE_NO_WARNINGS 1

//�����==������

#include <stdio.h>
#include <math.h>

//int main()
//{
//	int a = 2 + 10;
//	int b = 10 - 2;
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//
//int main()
//{
//	int num = 5;
//	printf("%d\n", num * num);
//
//	printf("%d\n", 8 / 2);
//	printf("%d\n", 7 / 2);
//	printf("%d\n", 7 % 2);//ȡģֻ��ȡ����
//	printf("%lf\n", 7 / 2.0);
//	return 0;
//
//}

//��ֵ������

//int main()
//{
//	int a = 0;
//	int b = 0;
//	a = 200; //��ֵ����
//	//b = a = a + 3;
//
//	a += 3;
//	printf("a=%d, b=%d\n", a, b);
//	return 0;
//}

// ��Ŀ��������++��--��+��-


//ǿ������ת���������ͣ�

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//%c - �ַ�
//%hd - short
//%d - int
//%u - unsigned int
//%f - float
//%lf - double
//%s - �ַ���
//
//

//int main()
//{
//	printf("%d", 123);
//	printf("%5d", 123);
//	printf("%-8d", 123);
//	printf("%d", 111);
//	return 0;
//}


//����С��λ %.2f
//���ƿ��С��λ %6.2f
//������*��� printf("%*.*f",6,2,1.5)
//���ָ���������ַ�	%.7f


//scanf�ǲ���ȫ�ĺ���
// 
//int main()
//{
//	int a = 1;
//	char arr[5] = { 0 };
//	scanf("%s", arr);
//	scanf("%s", &a);
//	printf("%s\n", arr);
//
//	return 0;
//}
//



//scanf���з���ֵ�� ����һ��������������������������ֵ�����
//���һ�����ֶ�û�з��أ����᷵��ECF������-1��
//scanf �ֽں��Է� *

//if����Ƿ�֧��ѡ��

//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2 == 1)
//		printf("%d ������\n", num);
//	else
//		printf("%d ��ż��\n", num);
//
//
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	//����
//	scanf("%d", &age);
//	if (age >= 18) {
//		printf("����\n");
//		printf("̸����\n");
//	}
//	else
//		printf("δ����\n");
//	return 0;
//}
//


//int main() {
//	int a = 0;
//	for (int i = 1; i <= 100; i++) {
//		a = i;
//		if (a % 3 == 0) {
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}

//int main() {
//	int a, b, c;
//	while (scanf("%d %d %d", &a,&b,&c) != EOF) {
//		for (int i = 100; i >0; i--) {
//			if (i-a == 0)
//				printf("%d ", a);
//			if (i-b == 0)
//				printf("%d ", b);
//			if (i - c == 0)
//				printf("%d ", c);
//		}
//	}
//	return 0;
//}
