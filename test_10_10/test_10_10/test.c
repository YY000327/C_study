#define _CRT_SECURE_NO_WARNING


#include <stdio.h>

//ת���ַ�

//int main() {
//
//	printf("are you ok \?\?)\n");
//	//�ڹ�ȥ��һЩ��������֧������ĸ
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
//	// \t ˮƽ�Ʊ��=tab
//	printf("C:\test\test.c");
//	//��ȷ
//	printf("C:\\test\\test.c");
//
//	//����Ԥ������
//	//printf("\a");
//
//	//\b �˸��
//	printf("abcde\bfghi");
//
//
//	return 0;
//}
//



//int main() {
//
//
//	// \���ִ���, �˽��Ƶ�����
//	printf("%c\n", '\130');
//	// \130 ����ʮ������88��������X���ַ�
//	printf("%c\n", '\x30');
//
//	printf("%d\n", strlen("abc"));
//
//	return 0;
//}


//c������һ��һ������乹�ɵ�
// ���ֽṹ��˳��ṹ��ѡ��ṹ��ѭ���ṹ
//1. �����
//2. ���ʽ���
//3. �����������
//4. �������
//5. ������� --�� 1.�����ж���䣺if  2.ѭ��ִ����䣺 do while��while 3. ת����䣺break��goto....

//int main()
//{
//	;//�����
//	3 + 4;//���ʽ���
//	int
//
//	printf("hehe\n");//�����������
//	return 0;
//}//�������
//


//ע�͵���ʽ�� /**/��//
// /**/��֧��Ƕ��ע��


/*�������ͣ�
1. �ַ���
	char
	[signed]char
	unsigned char
2. ����	
	int
	[signed]int
	unsigned int
3. ������
	float
	double
	long double
4. ������
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

/*���ݵĳ���
1.sizeof ��������Ҳ�ǹؼ���,��������size_t,һ���޷��ŵ�������ʹ��%zd
c���Թ涨��sizeof(long)>=sizeof(int)

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



//�����ͳ���
// data_type data;
// �ֲ�������д��ʼֵ���������һ�������ֵ
//ȫ�ֱ����ڴ�������
//�ֲ�����������




