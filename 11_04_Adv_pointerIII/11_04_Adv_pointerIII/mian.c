#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//�����������
//������Ԫ�صĵ�ַ
// ��������������
//1.sizeof��������������ʾ������������Ĵ�С
//2.&����������ʾ������������ĵ�ַ


//int main() {
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));
//	//16
//	printf("%d\n", sizeof(a + 0));//��Ԫ�صĵ�ַ+0��������Ԫ�صĵ�ַ��������4/8
//	printf("%d\n", sizeof(*a));//*a����Ԫ�أ���С��4���ֽ�
//	printf("%d\n", sizeof(a + 1));//��Ԫ�صĵ�ַ+1���ǵڶ���Ԫ�صĵ�ַ��������4/8
//	printf("%d\n", sizeof(a[1]));//�ڶ���Ԫ�صĴ�С��4���ֽ�
//	printf("%d\n", sizeof(&a));//��������ĵ�ַ�������ǵ�ַ�����Ի���4/8
//	printf("%d\n", sizeof(*&a));//�������������飬����4��Ԫ�ص�������С����16
//	//sizeof(*&a) --> sizeof(a) -- 16
//	// &a --> int(*)[4]
//	// *&a 
//	printf("%d\n", sizeof(&a + 1));//&a+1�����&a���������������飬��ʹ�������������飬&a+1��Ȼ�ǵ�ַ
//	printf("%d\n", sizeof(&a[0]));//&a[0]����Ԫ�صĵ�ַ��4/8���ֽ�
//	printf("%d\n", sizeof(&a[0] + 1)); //&a[0]+1������ǵڶ���Ԫ�صĵ�ַ��4/8���ֽ�
//	//�ַ�����
//
//
//
//
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr)); //��������������sizeof�ڲ��������������Ĵ��£�6���ֽ�
//	//char [6];
//	printf("%d\n", sizeof(arr + 0));//��ʾ������ҳ���׵ĵ�ַ��4/8����ַ��Զ����4/8���ֽ�
//	// char*
//	printf("%d\n", sizeof(*arr));//arr��ʾ��Ԫ�صĵ�ַ��*arr������Ԫ�أ���С1���ֽ�
//	printf("%d\n", sizeof(arr[1]));//��ʾ�ڶ���Ԫ�أ���Сһ���ֽ�
//	printf("%d\n", sizeof(&arr));//ȡ������������ĵ�ַ����ַ����4/8
//	printf("%d\n", sizeof(&arr + 1));//��������������ĵ�ַ�����ǵ�ַ����ַ����4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ������4
//	
//	
//	//strlen �ǿ⺯��
//	//���ַ������ȣ�ͳ�Ƶ������ַ���\0֮ǰ���ַ��ĸ���
//	//���û��\0�ͻ�һֱѰ��
//	printf("%d\n", strlen(arr));//��Ϊ�ַ�����arr��û��\0,���Ի�һֱ�����
//	printf("%d\n", strlen(arr + 0));//arr+0������Ԫ�صĵ�ַ���͵�һ��һ��
//	//printf("%d\n", strlen(*arr));//arr��������Ԫ�صĵ�ַ��*arr����������Ԫ�أ����ǡ�a�� - 97
//	//strlen���������Ĳ�����Ҫ��һ����ַ�������Ǵ��ݵ��ǡ�a'ʱ����a'��ASCII��ֵ��97����97��Ϊ��ַ����
//	//strlen�ͻ��97 �����ַ��ʼͳ���ַ�������
//	//printf("%d\n", strlen(arr[1])); error
//	printf("%d\n", strlen(&arr));//�������ֵ����ĵ�ַ��������Ԫ�صĵ�ֵַ��һ���ģ���ô����strlen�����󣬻���һֱ�������
//	printf("%d\n", strlen(&arr + 1));//�������ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//�ǵڶ���Ԫ�صĵ�ַ�����Ҳ�����ֵ
//
//
//
//	return 0;
//}

//int main() {
//
//	char arr[] = "abcdef";//[a b c d e f \0]
//
//	printf("%d\n", sizeof(arr));//7���ֽ�
//	printf("%d\n", sizeof(arr + 0)); //��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));//1���ֽڣ���Ԫ��
//	//*arr --> *(arr+0) --> arr[0]
//	printf("%d\n", sizeof(arr[1]));//�ڶ���Ԫ�أ�1���ֽ�
//	printf("%d\n", sizeof(&arr));//&arr������ĵ�ַ����ַ��4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));//����һ����ַ����4/8���ֽ�
//	printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ 4/8
//
//
//	printf("%d\n", strlen(arr));// 6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//error
//	//printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//
//	return 0;
//}

//int main() {
//
//	char* p = "abcdef";//��a�ĵ�ַ�浽��p����
//
//	printf("%d\n", sizeof(p));//4/8��p��һ��ָ�����
//	printf("%d\n", sizeof(p + 1));// ����ָ�������ָ����һ��Ԫ�صĵ�ַ��4/8���ֽ�
//	printf("%d\n", sizeof(*p));//*p����Ԫ�أ�����һ���ֽ�
//	printf("%d\n", sizeof(p[0]));//p[0] -->*(p+0) 1���ֽ�
//	printf("%d\n", sizeof(&p));//4/8���ֽڡ�����ָ�� &p--char**
//	printf("%d\n", sizeof(&p + 1));//4/8 ���ֽڣ�ָ��p�ĵ�ַ+1
//	printf("%d\n", sizeof(&p[0] + 1));//4/8���ֽڣ��õ�����b�ĵ�ַ
//
//
//	printf("%d\n", strlen(p));//6���ַ�
//	printf("%d\n", strlen(p + 1));//5���ַ�
//	//printf("%d\n", strlen(*p));//error
//	//printf("%d\n", strlen(p[0]));//error
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}

//int main() {
//
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//3*4*4 =48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//4*4 =16 ��һ�����һά�����������
//	//���������ǵ���������sizeof�ڲ��ˣ����������������Ĵ�С�ˣ���С����16���ֽ�
//	printf("%d\n", sizeof(a[0] + 1));
//	//a[0]��Ϊ��һ�е�������û�е�������sizeof�ڲ�û��&
//	//a[0]���������Ԫ�صĵ�ַ��Ҳ����a[0][0]�ĵ�ַ
//	//����a[0]+1�ǵ�һ�еڶ���Ԫ�صĵ�ַ�������ַ����4/8���ֽ�
//	printf("%d\n", sizeof(*(a[0] + 1)));//������ǵ�һ�еڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(a + 1));//a����Ԫ�صĵ�ַ����һ�еĵ�ַ��a+1�ǵڶ��еĵ�ַ����С��4/8���ֽ�
//	printf("%d\n", sizeof(*(a + 1))); 
//	//*��a+1) --> a[1] -->sizeof(*(a+1),������ǵڶ��еĴ�С
//	//a+1 -->�ڶ��еĵ�ַ��int(*)[4]
//	printf("%d\n", sizeof(&a[0] + 1));//&a[0]+1,�ǵڶ��еĵ�ַ��4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16 ������ǵڶ��еĴ�С
//	printf("%d\n", sizeof(*a));//a��������Ԫ�صĵ�ַ�����ǵ�һ�еĵ�ַ�������þ��ǵ�һ�еĴ�С -16
//	//*a --> *(a+1) -->a[0]
// 	printf("%d\n", sizeof(a[3]));//16
//
//
//
//	return 0;
//}


//����+���� --> ��ִ�г��� --> ���� --> ���

//�κ�һ�����ʽ�����������ԣ�
//		1.ֵ����
//		2.��������
//int main() {
//
//	int a = 7;
//	short s = 4;
//	printf("%d\n", sizeof(s = a + 2));//short 2
//
//	return 0;
//}

//��ά����ÿ�ж��ܿ���һ��һά���飡������


//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//
//}


////���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);//����һ���ṹ�壬0x100000+20-->0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x10000+1 --> 0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//ǿת��int*�� �ͼ�4���ֽ�
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//
//	//%x��16���ƴ�ӡ
//	return 0;
//}
////С�˴洢
////01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//����û���ô����ţ������Ƕ��ű��ʽ��������Ҳ��ֵ
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
