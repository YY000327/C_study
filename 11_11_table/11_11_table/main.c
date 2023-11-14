


#include "SeqList.h"

//顺序表和链表


//顺序表
//本质是数组，但是他要求所有的数据都是连续的
//静态顺序表，长度固定的顺序表
//动态顺序表，长度是可以调节，用malloc和realloc去开辟空间


void TestSL1() {
	SL s1;
	SLInit(&s1);//形参是实参的拷贝，所以不能直接使用
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
	SLInit(&s1);//形参是实参的拷贝，所以不能直接使用
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
	SLInit(&s1);//形参是实参的拷贝，所以不能直接使用
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
	SLInit(&s1);//形参是实参的拷贝，所以不能直接使用
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
//	// //当malloc后面的内空间不够时，就会异地扩容
//	//int* p1 = (int*)malloc(80);
//
//	//printf("%p\n", p1);
//	//int* p2 = realloc(p1, 160);
//	//printf("%p", p2);
//
//	//越界一定会报错吗？
//
//	//int a[10];
//	////越界读一般不会报错
//	//printf("%d\n", a[11]);
//	//printf("%d\n", a[12]);
//
//	////越界写可能会报错
//	////越界写是抽查可能查不到
//	////a[11] = 1;
//	////a[12] = 3;
//
//	return 0;
//}

void menu() {
	printf("*************************************\n");
	printf("*****1. 尾插数据   2.尾删数据********\n");
	printf("*****3. 头插数据   4.头删数据********\n");
	printf("*****5. 显示数据   0.退出应用********\n");
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
		printf("请输入你的选择>:");
		scanf("%d", &option);
		if (option == 1) {
			printf("请输入你要尾插的数据个数和数据：>");
			int n = 0;
			int x = 0;
			scanf("%d", &n);

			for (int i = 0; i < n; i++) {
				scanf("%d", &x);

				SLPushBack(&s, x);

			}

		}
		else if (option == 2) {
			printf("请输入你要尾删的数据个数和数据：>");
			int n = 0;
			int x = 0;
			scanf("%d", &n);

			for (int i = 0; i < n; i++) {
				scanf("%d", &x);

				SLPushBack(&s, x);

			}
		}
		else if (option == 3) {
			printf("请输入你要头插的数据个数和数据：>");
			int n = 0;
			int x = 0;
			scanf("%d", &n);

			for (int i = 0; i < n; i++) {
				scanf("%d", &x);

				SLPushBack(&s, x);

			}

		}
		else if (option == 4) {
			printf("请输入你要头删的数据个数和数据：>");
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