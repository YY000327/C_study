#define  _CRT_SECURE_NO_WARNINGS 1

//计算机能够执行二进制指令
//但是我们写出的C语言代码是文本信息，计算机不能直接理解
//翻译环境，c语言的代码 ——————》二进制的指令

//vs 集成
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
//程序员的自我修养

//预定义符号
//
//int main() {
//
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	//printf("%s\n", __STDC__);//当前vs不支持ANSI C
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

//在一行的末尾加上\是一个换行符，\后直接换行

//#define定义宏

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

////#define SQUARE(x) ((x)*(x))//参数一定要加（）
//#define DOUBLE(x) ((x)+(x))//整体也要加（）
////宏的参数是替换进去的
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
//#define M 3//整体也要加（）
////宏的参数是替换进去的
//
//int main() {
//	int a = 3;
//	int r =SQUARE(M+2);
//	printf("M=%d\n", M);//字符串里的宏不会被替换
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
////#,把一个宏参数变成对应的字符串
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
//	//int b = ++a; // b=11, a=11//a在进入加法后自己也变了，这就是副作用
//
//
//	return 0;
//}

//#define MAX(a,b)((a)>(b)?(a):(b))//宏是类型无关的
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 5;
//	int b = 6;
//	int c = MAX(a++, b++);
//	//int c = ((a++) > (b++) ? (a++) : (b++));//宏的副作用，
//
//	printf("c = %d\n", c);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//
//
//}


////宏的能力是函数绝对没有的
//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//int main() {
//	int* p = (int*)malloc(126 * sizeof(int));
//	int* p = MALLOC(126, int);
//
//	return 0;
//}

//inline - 内联
//内联函数，既有函数的优势，也具有宏的好