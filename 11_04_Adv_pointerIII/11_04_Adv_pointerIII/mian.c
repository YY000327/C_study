#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//数组名的理解
//数组首元素的地址
// 但是有两个例外
//1.sizeof（数组名），表示的是整个数组的大小
//2.&数字名，表示的是整个数组的地址


//int main() {
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));
//	//16
//	printf("%d\n", sizeof(a + 0));//首元素的地址+0，还是首元素的地址，所以是4/8
//	printf("%d\n", sizeof(*a));//*a是首元素，大小是4个字节
//	printf("%d\n", sizeof(a + 1));//首元素的地址+1，是第二个元素的地址，所以是4/8
//	printf("%d\n", sizeof(a[1]));//第二个元素的大小是4个字节
//	printf("%d\n", sizeof(&a));//整个数组的地址，但还是地址，所以还是4/8
//	printf("%d\n", sizeof(*&a));//解引用整个数组，就是4个元素的整个大小，是16
//	//sizeof(*&a) --> sizeof(a) -- 16
//	// &a --> int(*)[4]
//	// *&a 
//	printf("%d\n", sizeof(&a + 1));//&a+1相对于&a是跳过了整个数组，即使跳过了整个数组，&a+1依然是地址
//	printf("%d\n", sizeof(&a[0]));//&a[0]是首元素的地址，4/8个字节
//	printf("%d\n", sizeof(&a[0] + 1)); //&a[0]+1代表的是第二个元素的地址，4/8个字节
//	//字符数组
//
//
//
//
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr)); //数组名单独放在sizeof内部，计算真个数组的带下，6个字节
//	//char [6];
//	printf("%d\n", sizeof(arr + 0));//表示数组首页还俗的地址，4/8，地址永远都是4/8个字节
//	// char*
//	printf("%d\n", sizeof(*arr));//arr表示首元素的地址，*arr就是首元素，大小1个字节
//	printf("%d\n", sizeof(arr[1]));//表示第二个元素，大小一个字节
//	printf("%d\n", sizeof(&arr));//取得是整个数组的地址，地址就是4/8
//	printf("%d\n", sizeof(&arr + 1));//跳过了整个数组的地址，还是地址，地址就是4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址，还是4
//	
//	
//	//strlen 是库函数
//	//求字符串长度，统计的是再字符串\0之前的字符的个数
//	//如果没有\0就会一直寻找
//	printf("%d\n", strlen(arr));//因为字符数组arr中没有\0,所以会一直向后找
//	printf("%d\n", strlen(arr + 0));//arr+0还是首元素的地址，和第一个一样
//	//printf("%d\n", strlen(*arr));//arr是数组首元素的地址，*arr就是数组首元素，就是‘a’ - 97
//	//strlen函数参数的部分需要传一个地址，当我们传递的是‘a'时，’a'的ASCII码值是97，再97作为地址传参
//	//strlen就会从97 这个地址开始统计字符串长度
//	//printf("%d\n", strlen(arr[1])); error
//	printf("%d\n", strlen(&arr));//还是随机值数组的地址和数组首元素的地址值是一样的，那么传递strlen函数后，还是一直会向后走
//	printf("%d\n", strlen(&arr + 1));//还是随机值
//	printf("%d\n", strlen(&arr[0] + 1));//是第二个元素的地址，结果也是随机值
//
//
//
//	return 0;
//}

//int main() {
//
//	char arr[] = "abcdef";//[a b c d e f \0]
//
//	printf("%d\n", sizeof(arr));//7个字节
//	printf("%d\n", sizeof(arr + 0)); //首元素的地址
//	printf("%d\n", sizeof(*arr));//1个字节，首元素
//	//*arr --> *(arr+0) --> arr[0]
//	printf("%d\n", sizeof(arr[1]));//第二个元素，1个字节
//	printf("%d\n", sizeof(&arr));//&arr是数组的地址，地址是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//还是一个地址，是4/8个字节
//	printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址 4/8
//
//
//	printf("%d\n", strlen(arr));// 6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//error
//	//printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//
//	return 0;
//}

//int main() {
//
//	char* p = "abcdef";//把a的地址存到了p里面
//
//	printf("%d\n", sizeof(p));//4/8，p是一个指针变量
//	printf("%d\n", sizeof(p + 1));// 还是指针变量，指向下一个元素的地址，4/8个字节
//	printf("%d\n", sizeof(*p));//*p是首元素，就是一个字节
//	printf("%d\n", sizeof(p[0]));//p[0] -->*(p+0) 1个字节
//	printf("%d\n", sizeof(&p));//4/8个字节。二级指针 &p--char**
//	printf("%d\n", sizeof(&p + 1));//4/8 个字节，指向p的地址+1
//	printf("%d\n", sizeof(&p[0] + 1));//4/8个字节，得到的是b的地址
//
//
//	printf("%d\n", strlen(p));//6个字符
//	printf("%d\n", strlen(p + 1));//5个字符
//	//printf("%d\n", strlen(*p));//error
//	//printf("%d\n", strlen(p[0]));//error
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}

//int main() {
//
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//3*4*4 =48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//4*4 =16 第一行这个一维数组的数组名
//	//数组名算是单独放在了sizeof内部了，计算的是整个数组的大小了，大小就是16个字节
//	printf("%d\n", sizeof(a[0] + 1));
//	//a[0]作为第一行的数组名没有单独放在sizeof内部没有&
//	//a[0]代表的是首元素的地址，也就是a[0][0]的地址
//	//所以a[0]+1是第一行第二个元素的地址，这个地址就是4/8个字节
//	printf("%d\n", sizeof(*(a[0] + 1)));//计算的是第一行第二个元素的大小
//	printf("%d\n", sizeof(a + 1));//a是首元素的地址，第一行的地址，a+1是第二行的地址，大小是4/8个字节
//	printf("%d\n", sizeof(*(a + 1))); 
//	//*（a+1) --> a[1] -->sizeof(*(a+1),计算的是第二行的大小
//	//a+1 -->第二行的地址，int(*)[4]
//	printf("%d\n", sizeof(&a[0] + 1));//&a[0]+1,是第二行的地址，4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 计算的是第二行的大小
//	printf("%d\n", sizeof(*a));//a是数组首元素的地址。就是第一行的地址，解引用就是第一行的大小 -16
//	//*a --> *(a+1) -->a[0]
// 	printf("%d\n", sizeof(a[3]));//16
//
//
//
//	return 0;
//}


//编译+链接 --> 可执行程序 --> 运行 --> 结果

//任何一个表达式都有两个属性：
//		1.值属性
//		2.类型属性
//int main() {
//
//	int a = 7;
//	short s = 4;
//	printf("%d\n", sizeof(s = a + 2));//short 2
//
//	return 0;
//}

//二维数组每行都能看成一个一维数组！！！！


//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//
//}


////由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//跳过一个结构体，0x100000+20-->0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x10000+1 --> 0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//强转成int*， 就加4个字节
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//
//	//%x，16进制打印
//	return 0;
//}
////小端存储
////01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//里面没有用大括号，所以是逗号表达式，输出最右侧的值
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}
//



//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}
