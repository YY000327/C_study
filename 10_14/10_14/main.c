#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//if 语句可以嵌套

//int main() {
//	int num = 0;
//
//	scanf("%d", &num);
//	if (num = 0)
//		printf("输入的数值是0");
//	else {
//		if (num > 0)
//			printf("输入的数值是正数");
//		else
//			printf("输入的数值是负数");
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
//			printf("偶数\n");
//		else
//			printf("奇数\n");
//	}
//	else
//	{
//		printf("非正数\n");
//	}
//	return 0;
//}


////关系表达式输出的是0或者1；
//int main() {
//
//	int a = 3;
//	int r = (a == 5);
//	printf("%d", r);
//	return 0;
//}
//如果一个变量和一个常量比较相等，建议将常量放在==左边
//&&并且
//||其中


//条件操作符 三目操作符
// exp1?exp2:exp3
// 先执行exp1，如果exp1为真，输出exp2，如果exp1为假，输出exp3

//int main()
//{
//	int a = 0;
//	int b = 0;
//	b = (a > 5 ? 3 : -3);
//	printf("%d", b);
//
//	return 0;
//}


// ！：逻辑取反运算符
//int main() {
//	int flag = 0;
//	if (!flag) {
//		printf("h\n");
//
//	}
//	return 0;
//
//}
// &&：与操作符,两边的表达式都是真是，表达式才为真
// ||：或操作符，两边的表示只要一个为真就为真

//逻辑运算符先对左侧表达式求值，再对右边表达式求值
//对于&&来说，左边操作符结果是0，右边操作符就不会开始计算
//对于||来说，左边操作符结果为1，右边操作符就不会开始计算


//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3) {
//	case 1 :
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	case 0:
//		printf("余数是0\n");
//		break;
//	
//	}
//	return 0;
//}
//switch 判断必须是整型
//字符是属于整型家族
// case之后必须是一个整型常量表达式
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//
//}

//循环语句 while（表达式），表达式为真会一直循环

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
//for （exp1，exp2，exp4）
//exp1 表达循环变量的初始化
//exp2 表达循环结束的条件
//exp3 表达循环变量的调整


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

