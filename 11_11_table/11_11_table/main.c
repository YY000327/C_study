


#include "SeqList.h"

//˳��������


//˳���
//���������飬������Ҫ�����е����ݶ���������
//��̬˳������ȹ̶���˳���
//��̬˳��������ǿ��Ե��ڣ���malloc��reallocȥ���ٿռ�


void TestSL1() {
	SL s1;
	SLInit(&s1);//�β���ʵ�εĿ��������Բ���ֱ��ʹ��
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPushBack(&s1, 5);
	SLPushBack(&s1, 6);
	SLPushBack(&s1, 7);
	SLPushBack(&s1, 8);
	SLPushBack(&s1, 9);

	SLPushFront(&s1, 10);
	SLPushFront(&s1, 11);
	SLPushFront(&s1, 12);
	SLPushFront(&s1, 13);
	SLPushFront(&s1, 14);
	SLPushFront(&s1, 15);




	SLPrint(&s1);
	SLDestroy(&s1);


}

void TestSL2() {
	SL s1;
	SLInit(&s1);//�β���ʵ�εĿ��������Բ���ֱ��ʹ��
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPushBack(&s1, 5);
	SLPushBack(&s1, 6);
	SLPushBack(&s1, 7);
	SLPushBack(&s1, 8);
	SLPushBack(&s1, 9);

	SLPushFront(&s1, 10);
	SLPushFront(&s1, 11);
	SLPushFront(&s1, 12);
	SLPushFront(&s1, 13);
	SLPushFront(&s1, 14);
	SLPushFront(&s1, 15);

	SLPopBack(&s1);


	SLPrint(&s1);
	

	SLPopfront(&s1);
	SLPopfront(&s1);
	SLPopfront(&s1);
	SLPrint(&s1);


	SLPopfront(&s1);
	SLPrint(&s1);

	SLPopfront(&s1);
	SLPopfront(&s1);
	SLPopfront(&s1);
	SLPopfront(&s1);
	SLPopfront(&s1);
	SLPopfront(&s1);
	SLPopfront(&s1);
	SLPopfront(&s1);
	SLPopfront(&s1);
	SLPopfront(&s1);
	SLPrint(&s1);


	//SLPopfront(&s1);

	SLDestroy(&s1);


}

void TestSL4() {
	//SL* pl = NULL; 
	//SLInit(&pl);
	SL s1;
	SLInit(&s1);//�β���ʵ�εĿ��������Բ���ֱ��ʹ��
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPrint(&s1);

	SLInsert(&s1, 2, 30);
	SLPrint(&s1);
	SLDestroy(&s1);
}void TestSL5() {
	//SL* pl = NULL; 
	//SLInit(&pl);
	SL s1;
	SLInit(&s1);//�β���ʵ�εĿ��������Բ���ֱ��ʹ��
	SLPushBack(&s1, 1);
	SLPushBack(&s1, 2);
	SLPushBack(&s1, 3);
	SLPushBack(&s1, 4);
	SLPrint(&s1);

	SLInsert(&s1, 2, 30);
	SLErase(&s1, 1);
	SLPrint(&s1);

	int pos = SLFind(&s1, 2);
	if (pos != -1) {

		SLErase(&s1, pos);
	}


	SLDestroy(&s1);
}


//int main()
//{
//	TestSL5();
//
//
//	//TestSL1();
//	//TestSL2();
//	// 
//	// //��malloc������ڿռ䲻��ʱ���ͻ��������
//	//int* p1 = (int*)malloc(80);
//
//	//printf("%p\n", p1);
//	//int* p2 = realloc(p1, 160);
//	//printf("%p", p2);
//
//	//Խ��һ���ᱨ����
//
//	//int a[10];
//	////Խ���һ�㲻�ᱨ��
//	//printf("%d\n", a[11]);
//	//printf("%d\n", a[12]);
//
//	////Խ��д���ܻᱨ��
//	////Խ��д�ǳ����ܲ鲻��
//	////a[11] = 1;
//	////a[12] = 3;
//
//	return 0;
//}

void menu() {
	printf("*************************************\n");
	printf("*****1. β������   2.βɾ����********\n");
	printf("*****3. ͷ������   4.ͷɾ����********\n");
	printf("*****5. ��ʾ����   0.�˳�Ӧ��********\n");
	printf("*************************************\n");
	printf("*************************************\n");

}

int main()
{
	SL s;
	SLInit(&s);
	int option = 0;
	do {
		menu();
		printf("���������ѡ��>:");
		scanf("%d", &option);
		if (option == 1) {
			printf("��������Ҫβ������ݸ��������ݣ�>");
			int n = 0;
			int x = 0;
			scanf("%d", &n);

			for (int i = 0; i < n; i++) {
				scanf("%d", &x);

				SLPushBack(&s, x);

			}

		}
		else if (option == 2) {
			printf("��������Ҫβɾ�����ݸ��������ݣ�>");
			int n = 0;
			int x = 0;
			scanf("%d", &n);

			for (int i = 0; i < n; i++) {
				scanf("%d", &x);

				SLPushBack(&s, x);

			}
		}
		else if (option == 3) {
			printf("��������Ҫͷ������ݸ��������ݣ�>");
			int n = 0;
			int x = 0;
			scanf("%d", &n);

			for (int i = 0; i < n; i++) {
				scanf("%d", &x);

				SLPushBack(&s, x);

			}

		}
		else if (option == 4) {
			printf("��������Ҫͷɾ�����ݸ��������ݣ�>");
			int n = 0;
			int x = 0;
			scanf("%d", &n);

			for (int i = 0; i < n; i++) {
				scanf("%d", &x);

				SLPushBack(&s, x);

			}

		}
		else if (option == 5) {
			SLPrint(&s);
		}

	} while (option);

	SLDestroy(&s);
	return 0;
}