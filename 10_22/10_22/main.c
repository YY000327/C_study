#define  _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

//
//int main() {
//	int i = 1;
//
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}
//
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//
//	int cnt = 0;
//	do {
//		cnt++;
//		num = num / 10;
//
//	} while (num);
//	printf("%d", cnt);
//
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//
//	while (i <= 10) {
//		if (i == 5)
//			continue;//����-continue����������������ѭ��continue��ߵĴ���
//			//break;
//
//		printf("%d ", i);
//
//		i++;
//
//	}
//
//	return 0;
//}


//forѭ���ĳ�ʼ�����жϡ�ѭ���������ʽ������ʡ��
//�����жϱ��ʽʡ�ԵĻ�����ʾѭ�����ж���Ϊ��


//�ҳ�100-200������
//int main() {
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2) {
//		int flag = 1;
//		//����i����100-200������
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++) {
//			if (i % j == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount:%d", count);
//
//	return 0;
//}
//

//
//int main() {
//
//	printf("hehe\n");
//	goto flag;
//	printf("haha\n");
//flag:
//	printf("heihei\n");
//
//
//	return 0;
//}

//void menu() {
//	printf("**********************\n");
//	printf("****** 1. play *******\n");
//	printf("*******2. exit *******\n");
//	printf("**********************\n");
//}
//
//void game() {
//	//1.random number
//	int ret=rand()%100+1; //1~100
//	//2.guess number
//	int guess = 0;
//	int count=5;
//	while (count) {
//		printf("guess:>");
//		scanf("%d", & guess);
//		if (guess > ret) {
//			printf("too big\n");
//
//		}
//		else if(guess<ret){
//			printf("too small\n");
//		}
//		else {
//			printf("you are right\n");
//			break;
//		}
//		count--;
//
//	}
//	if (count == 0) {
//		printf("failed game, the right num is %d\n", ret);
//	}
//}
//
//
//int main()
//{
//
//	srand((unsigned int)time(NULL));
//
//	int input = 0;
//	
//
//	do {
//		menu();
//		
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("exiting\n");
//			break;
//		default:
//			printf("wrong choice\n");
//			break;
//
//		}
//
//
//	} while (input);
//	return 0;
//}
//


int main() {
	int num1;
	int num2;
	scanf("%d %d", &num1, &num2);
	int gdf = 0;
	for (int i = 1; i <= num1 || i <= num2; i++) {
		if ((num1 % i == 0) && (num2 % i == 0)) {
			gdf = i;
			printf("%d\n", gdf);

		}
		
	}
	printf("���Լ��%d", gdf);

	return 0;

}
