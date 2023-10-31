#define _CRT_SECURE_NO_WARNING


#include <stdio.h>

//转义字符

//int main() {
//
//	printf("are you ok \?\?)\n");
//	//在过去的一些编译器上支持三字母
//
//
//	return 0;
//}


//int main() {
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');
//	
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//
//	// \t 水平制表格，=tab
//	printf("C:\test\test.c");
//	//正确
//	printf("C:\\test\\test.c");
//
//	//发出预警声音
//	//printf("\a");
//
//	//\b 退格键
//	printf("abcde\bfghi");
//
//
//	return 0;
//}
//



//int main() {
//
//
//	// \数字代表, 八进制的数字
//	printf("%c\n", '\130');
//	// \130 换成十进制是88，代表了X的字符
//	printf("%c\n", '\x30');
//
//	printf("%d\n", strlen("abc"));
//
//	return 0;
//}


//c语言是一条一条的语句构成的
// 三种结构：顺序结构、选择结构、循环结构
//1. 空语句
//2. 表达式语句
//3. 函数调用语句
//4. 复合语句
//5. 控制语句 --》 1.条件判断语句：if  2.循环执行语句： do while、while 3. 转向语句：break、goto....

//int main()
//{
//	;//空语句
//	3 + 4;//表达式语句
//	int
//
//	printf("hehe\n");//函数调用语句
//	return 0;
//}//复合语句
//


//注释的形式： /**/和//
// /**/不支持嵌套注释


/*数据类型：
1. 字符型
	char
	[signed]char
	unsigned char
2. 整型	
	int
	[signed]int
	unsigned int
3. 浮点型
	float
	double
	long double
4. 布尔型
	_Bool


*/
//#include <stdbool.h>
//
//int main()
//{
//	if (5) {
//		printf("hehe\n");
//	}
//	_Bool flag =true;
//	//bool flag =true;
//	if (flag) {
//		printf("hehe\n");
//	}
//	return 0;
//}

/*数据的长度
1.sizeof 操作符，也是关键字,计算结果是size_t,一种无符号的整数，使用%zd
c语言规定：sizeof(long)>=sizeof(int)

*/
//
//int main() {
//	printf("%zd\n",sizeof(char));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//
//	return 0;
//}
//


//int main() {
//	int a = 10;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(3.14));//double
//	printf("%zd\n", sizeof(3.14f));//float
//
//
//
//
//	return 0;
//}

//int main() {
//	short s = 2;
//	int b = 10;
//	printf("%zd\n", sizeof(s = b + 1));
//	printf("%zd\n",s);
//
//	return 0;
//}



//变量和常量
// data_type data;
// 局部变量不写初始值，里面会是一个随机的值
//全局变量在大括号外
//局部变量先满足




