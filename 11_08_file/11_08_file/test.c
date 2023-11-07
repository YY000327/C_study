#define  _CRT_SECURE_NO_WARNINGS 1

//从文件上得到文件信息
//文件路径+文件名主干+文件后缀
//当我们打算读写一个文件的时候
//1. 打开文件
//2. 被打开的文件就维护了一个文件信息区（文件会自动创建一个FILE文件信息区），一般使用FILE的指针来指向文件

#include <stdio.h>

//int main() {
//
//	//FILE* pf = fopen("data.txt", "w");//相对路径
//
//	//FILE* pf = fopen("..\\x64\\data.txt", "w");
//
//	//绝对路径
//	//G:\桌面\data.txt
//	//FILE* pf = fopen("G:\\桌面\\data.txt", "w");
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL) {
//		perror("fopen");
//
//		return 1;
//	}
//	//写文件
//	/*fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);*/
//	int i = 0;
//	for (i = 0; i < 26; i++) {
//		fputc('a' + i, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//读写文件的时候，需要
//打开文件
//读写文件
//关闭文件
//c语言程序只要运行起来就默认打开3个流
//1.标准输入流 stdin FILE*
//2.标准输出流 stdout FILE*
//3.标准错误流 stderr FILE*
//流是一个抽象的概念
//水流，所以数据可以成为数据流，数据流淌的概念，数据流


//int main() {
//
//	//FILE* pf = fopen("data.txt", "w");//相对路径
//
//	//FILE* pf = fopen("..\\x64\\data.txt", "w");
//
//	//绝对路径
//	//G:\桌面\data.txt
//	//FILE* pf = fopen("G:\\桌面\\data.txt", "w");
//
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//
//		return 1;
//	}
//	//读文件
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//ch = fgetc(pf);
//	//printf("%c\n", ch);
//	//for (i = 0; i < 26; i++) {
//	//	fputc('a' + i, pf);
//	//}
//
//	int ch = fgetc(stdin);
//	printf("%c\n", ch);
//	ch = fgetc(stdin);
//	printf("%c\n", ch);
//	ch = fgetc(stdin);
//	printf("%c\n", ch);
//	ch = fgetc(stdin);
//	printf("%c\n", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	FILE* pf = fopen("data.txt", "w");
//	if (NULL == pf) {
//		perror("fopen");
//		return 1;
//	}
//	//写文件- 写一行
//	fputs("hello world\n", stdout);
//	fputs("hello life", stdout);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf) {
//		perror("fopen");
//		return 1;
//	}
//	//读一行.只读一行
//	char arr[10] = { 0 };
//	fgets(arr,10, pf);
//	printf("%s\n", arr);
//	fgets(arr, 10, pf);
//	printf("%s", arr);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S {
//	int a;
//	float s;
//};
//
//int main() {
//	FILE* pf = fopen("data.txt", "w");
//	if (NULL == pf) {
//		perror("fopen");
//		return 1;
//	}
//	struct S s = { 100, 3.14f };
//	fprintf(pf,"%d %f", s.a, s.s);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//struct S {
//	int a;
//	float s;
//};
//
//int main() {
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf) {
//		perror("fopen");
//		return 1;
//	}
//	struct S s = { 0 };
//	fscanf(pf, "%d %f", &(s.a), &(s.s));
//
//	printf("%d %f", s.a, s.s);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//scanf 从标准输入流读取格式化的数据
//printf 从标准输入流

//fscanf 使用所有输入流的格式输入函数
//fprintf 使用所有输出流的格式输出函数

//sscanf 从字符串中读取格式化的数据
//sprintf 将格式化的数据转换成字符串

//struct S {
//	int a;
//	float s;
//	char str[10];
//};
//
//
//int main()
//{
//	char arr[30] = { 0 };
//	struct S s = { 100, 3.14f, "hehe" };
//	struct S tmp = { 0 };
//	sprintf(arr, "%d %f %s\n", s.a, s.s, s.str);
//	sscanf(arr, "%d %f %s", &(tmp.a), &(tmp.s), &(tmp.str));
//	printf("%d %f %s\n", tmp.a, tmp.s, tmp.str);
//
//
//
//	return 0;
//}



//struct S {
//	int a;
//	float s;
//	char str[10];
//};
//
//int main() {
//	struct S s = { 90, 6.18f, "hello" };
//	FILE* pf = fopen("data.txt", "wb");
//	if (NULL == pf) {
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fwrite(&s,sizeof(struct S),1,pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S {
//	int a;
//	float s;
//	char str[10];
//};
//
//int main() {
//	struct S s = { 0 };
//	FILE* pf = fopen("data.txt", "rb");
//	if (NULL == pf) {
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	fread(&s, sizeof(struct S), 1, pf);
//
//	printf("%d %f %s\n", s.a, s.s, s.str);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//5.文件的随机读写
//5.1 fseek

//int main() {
//
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf) {
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	// 
//
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//
//	fseek(pf, -3, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main() {
//
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf) {
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	// 
//
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	int pos = ftell(pf);
//	printf("%d", pos);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main() {
//
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf) {
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	// 
//
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	rewind(pf);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	int pos = ftell(pf);
//	printf("%d", pos);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	int a = 10000;
//	FILE* pf = fopen("data.txt", "wb");
//	if (NULL == pf) {
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//
//	pf = NULL;
//
//	return 0;
//}


//拷贝文件
//拷贝data1.txt，产生一个新的文件data2.txt
//
//int main() {
//	FILE* pfRead = fopen("data1.txt", "r");
//	if (pfRead == NULL) {
//		perror("open file for read");
//		return 1;
//		
//
//	}
//	FILE* pfWrite = fopen("data2.txt", "w");
//	if (pfWrite == NULL) {
//		perror("open file for write");
//		fclose(pfRead);
//		pfRead = NULL;
//		return 1;
//
//	}
//	//读写文件
//
//	int ch = 0;
//
//	while ((ch = fgetc(pfRead)) != EOF) {
//		fputc(ch, pfWrite);
//	}
//
//
//	fclose(pfRead);
//	pfRead = NULL;
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}


//文件缓存区
//程序数据区会先将数据写进输出缓冲区内，再将缓冲区内的数据，写道硬盘里
//硬盘内的数据，先放进缓冲区内，然后再写进程序数据区内


#include <stdio.h>
#include <windows.h>
//VS2013 WIN10环境测试
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
	//注：fflush 在高版本的VS上不能使用了
	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);
	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;
	return 0;
}
