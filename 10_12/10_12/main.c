#define  _CRT_SECURE_NO_WARNINGS 1

//运算符==操作符

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
//	printf("%d\n", 7 % 2);//取模只能取整数
//	printf("%lf\n", 7 / 2.0);
//	return 0;
//
//}

//赋值操作符

//int main()
//{
//	int a = 0;
//	int b = 0;
//	a = 200; //赋值操作
//	//b = a = a + 3;
//
//	a += 3;
//	printf("a=%d, b=%d\n", a, b);
//	return 0;
//}

// 单目操作符：++、--、+、-


//强制类型转换，（类型）

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//%c - 字符
//%hd - short
//%d - int
//%u - unsigned int
//%f - float
//%lf - double
//%s - 字符串
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


//限制小数位 %.2f
//限制宽度小数位 %6.2f
//可以用*替代 printf("%*.*f",6,2,1.5)
//输出指定数量的字符	%.7f


//scanf是不安全的函数
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



//scanf会有返回值： 返回一个整数，整数代表的是输入数字的数量
//如果一个数字都没有返回，他会返回ECF，就是-1；
//scanf 字节忽略符 *

//if语句是分支（选择）

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num % 2 == 1)
//		printf("%d 是奇数\n", num);
//	else
//		printf("%d 是偶数\n", num);
//
//
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	//输入
//	scanf("%d", &age);
//	if (age >= 18) {
//		printf("成年\n");
//		printf("谈恋爱\n");
//	}
//	else
//		printf("未成年\n");
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
