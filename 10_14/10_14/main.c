#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//if ������Ƕ��

//int main() {
//	int num = 0;
//
//	scanf("%d", &num);
//	if (num = 0)
//		printf("�������ֵ��0");
//	else {
//		if (num > 0)
//			printf("�������ֵ������");
//		else
//			printf("�������ֵ�Ǹ���");
//	}
//	return 0;
//}

//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		if (num % 2 == 0)
//			printf("ż��\n");
//		else
//			printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}


////��ϵ���ʽ�������0����1��
//int main() {
//
//	int a = 3;
//	int r = (a == 5);
//	printf("%d", r);
//	return 0;
//}
//���һ��������һ�������Ƚ���ȣ����齫��������==���
//&&����
//||����


//���������� ��Ŀ������
// exp1?exp2:exp3
// ��ִ��exp1�����exp1Ϊ�棬���exp2�����exp1Ϊ�٣����exp3

//int main()
//{
//	int a = 0;
//	int b = 0;
//	b = (a > 5 ? 3 : -3);
//	printf("%d", b);
//
//	return 0;
//}


// �����߼�ȡ�������
//int main() {
//	int flag = 0;
//	if (!flag) {
//		printf("h\n");
//
//	}
//	return 0;
//
//}
// &&���������,���ߵı��ʽ�������ǣ����ʽ��Ϊ��
// ||��������������ߵı�ʾֻҪһ��Ϊ���Ϊ��

//�߼�������ȶ������ʽ��ֵ���ٶ��ұ߱��ʽ��ֵ
//����&&��˵����߲����������0���ұ߲������Ͳ��Ὺʼ����
//����||��˵����߲��������Ϊ1���ұ߲������Ͳ��Ὺʼ����


//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3) {
//	case 1 :
//		printf("������1\n");
//		break;
//	case 2:
//		printf("������2\n");
//		break;
//	case 0:
//		printf("������0\n");
//		break;
//	
//	}
//	return 0;
//}
//switch �жϱ���������
//�ַ����������ͼ���
// case֮�������һ�����ͳ������ʽ
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//
//	switch (n){
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//
//	return 0;
//
//}

//ѭ����� while�����ʽ�������ʽΪ���һֱѭ��

//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	while (n) {
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//
//	return 0;
//}
//for ��exp1��exp2��exp4��
//exp1 ���ѭ�������ĳ�ʼ��
//exp2 ���ѭ������������
//exp3 ���ѭ�������ĵ���


//int main() {
//
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= 9; j++) {
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}
//
//
//int main() {
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int j = 0;
//	int a = 0;
//	while (j < 10) {
//		if (arr[j] >a ) {
//			a = arr[j];
//		}
//		
//		j++;
//	}
//	printf("%d", a);
//	return 0;
//
//}

//int main() {
//	double a = 0;
//	for (int i = 1; i <= 100; i++) {
//		if (i % 2 == 0) {
//			a =a - (1.0 / i);
//		}
//		else {
//			a =a+ (1.0 / i);
//		}
//	}
//	printf("%lf ", a);
//	return 0;
//}
//
//
//int main() {
//
//	for (int i =1000; i <= 2000; i++) {
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0)) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

int main() {
	int a = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 10 == 9) {
			a++;
		}
		if ((i / 10) == 9) {
			a++;
		}

	}
	printf("%d", a);
	return 0;
}

