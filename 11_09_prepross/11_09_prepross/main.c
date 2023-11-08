#define  _CRT_SECURE_NO_WARNINGS 1

//#define MAX(x,y) ((x)>(y)?(x):(y))
////命名约定
////把宏名全部大写
////函数名正常写
//
//int main() {
//
//	int c = MAX(3, 5);
//	printf("%d\n", c);
//#undef MAX
//	c = MAX(5, -5);
//	printf("%d\n", c);
//
//	return 0;
//}

//在命令行里面定义符号，用于启动编码


//条件编译
#include <stdio.h>
//
//#define M 0
//int main()
//{
//#if M==1
//	printf("hehe\n");
//#elif M == 2
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//	
//	return 0;
//}


//#define WIN 0

//int main() {
//
////#if defined(WIN)
////	printf("window");
////#endif
//
//#ifdef WIN
//	printf("windows");
//#endif
//
//	return 0;
//}
//
//int main() {
//
//#if !defined(WIN)
//	printf("windows");
//#endif
//
//#ifndef WIN
//	printf("windows");
//#endif
//
//	return 0;
//}


//C语言中头文件包含有2种形式：
//#include “” ---》本地包含，在源文件的所在目录上找，如果没有找到，就去库文件的头文件目录下找
//#include 《》 ---》直接区库文件的标准路径下查找