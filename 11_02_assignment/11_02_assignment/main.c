#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main() {
//
//	int line = 0;
//	scanf("%d", &line);//7
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++) {
//
//		int j = 0;
//		for (j = 0; j < line - 1 - i;j++) {
//
//			printf(" ");
//		}
//		//��ӡ
//		for (j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//
//		}
//		printf("\n");
//	}
//
//
//	//��
//
//	for (i = 0; i < line - 1; i++) {
//
//		int j = 0;
//		for (j = 0; j <= i; j++) {
//
//			printf(" ");
//		}
//		//��ӡ
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++) {
//			printf("*");
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//ˮ�ɻ��� -- ������

//#include <math.h>
//int main() {
//	
//	int i = 0;
//	for (i = 0; i <= 100000; i++) {
//		//�ж�i�Ƿ�������������
//		//1. ����i��λ��
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10) {
//			n++;
//		}
//		
//		//2. ��ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3. �ж�
//		if (sum == i) {
//			
//			printf("%d ", i);
//		}
//
//	}
//
//	return 0;
//
//
//
//}

//��Sn = a + aa + aaa...

//int main() {
//	
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++) {
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//
//}

//����ˮ�� 1ƿ��ˮ1Ԫ��2ƿ��ƿ�ܻ�1ƿ��ˮ��20�����������ˮ

//
//int main() {
//
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total += money;
//	empty += money;
//
//	//while (empty >= 2) {
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty%2;
//	//}
//	if (money >  0)
//		total = 2 * money - 1;
//
//	printf("%d\n", total);
//
//	return 0;
//
//}

//int main() {
//
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int l = 0;
//	int r = sz - 1;
//
//	while (l < r) {
//
//		while ((l < r) && arr[l] % 2 == 1) {
//
//			l++;
//		}
//		//�Ӻ���ǰ��һ������
//		while ((l < r) && arr[r] % 2 == 0) {
//
//			r--;
//
//		}
//
//		if (l < r)
//		{
//			int tmp = arr[l];
//			arr[l] = arr[r];
//			arr[r] = tmp;
//			l++;
//			r--;
//		}
//	}
//
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main() {
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++) {
//		for (b = 1; b <= 5; b++) {
//			for (c = 1; c  <= 5; c++) {
//				for (d = 1; d <= 5; d++) {
//					for (e = 1; e <= 5; e++) {
//						if (((b == 2)+(a == 3) == 1)&&
//							((b == 2)+(e == 4) == 1)&&
//							((c == 1)+(d == 2) == 1)&&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1)){
//							if(a*b*c*d*e == 120)
//							printf("a=%d, b=%d, c=%d, d=%d, e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//
//	}
//
//	return 0;
//}




