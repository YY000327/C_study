#define  _CRT_SECURE_NO_WARNINGS 1

//���ļ��ϵõ��ļ���Ϣ
//�ļ�·��+�ļ�������+�ļ���׺
//�����Ǵ����дһ���ļ���ʱ��
//1. ���ļ�
//2. ���򿪵��ļ���ά����һ���ļ���Ϣ�����ļ����Զ�����һ��FILE�ļ���Ϣ������һ��ʹ��FILE��ָ����ָ���ļ�

#include <stdio.h>

//int main() {
//
//	//FILE* pf = fopen("data.txt", "w");//���·��
//
//	//FILE* pf = fopen("..\\x64\\data.txt", "w");
//
//	//����·��
//	//G:\����\data.txt
//	//FILE* pf = fopen("G:\\����\\data.txt", "w");
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL) {
//		perror("fopen");
//
//		return 1;
//	}
//	//д�ļ�
//	/*fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);*/
//	int i = 0;
//	for (i = 0; i < 26; i++) {
//		fputc('a' + i, pf);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//��д�ļ���ʱ����Ҫ
//���ļ�
//��д�ļ�
//�ر��ļ�
//c���Գ���ֻҪ����������Ĭ�ϴ�3����
//1.��׼������ stdin FILE*
//2.��׼����� stdout FILE*
//3.��׼������ stderr FILE*
//����һ������ĸ���
//ˮ�����������ݿ��Գ�Ϊ���������������ʵĸ��������


//int main() {
//
//	//FILE* pf = fopen("data.txt", "w");//���·��
//
//	//FILE* pf = fopen("..\\x64\\data.txt", "w");
//
//	//����·��
//	//G:\����\data.txt
//	//FILE* pf = fopen("G:\\����\\data.txt", "w");
//
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//
//		return 1;
//	}
//	//���ļ�
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
//	//�ر��ļ�
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
//	//д�ļ�- дһ��
//	fputs("hello world\n", stdout);
//	fputs("hello life", stdout);
//
//
//	//�ر��ļ�
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
//	//��һ��.ֻ��һ��
//	char arr[10] = { 0 };
//	fgets(arr,10, pf);
//	printf("%s\n", arr);
//	fgets(arr, 10, pf);
//	printf("%s", arr);
//
//
//	//�ر��ļ�
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
//	//�ر��ļ�
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
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//scanf �ӱ�׼��������ȡ��ʽ��������
//printf �ӱ�׼������

//fscanf ʹ�������������ĸ�ʽ���뺯��
//fprintf ʹ������������ĸ�ʽ�������

//sscanf ���ַ����ж�ȡ��ʽ��������
//sprintf ����ʽ��������ת�����ַ���

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
//	//д�ļ�
//	fwrite(&s,sizeof(struct S),1,pf);
//
//	//�ر��ļ�
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
//	//���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//
//	printf("%d %f %s\n", s.a, s.s, s.str);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//5.�ļ��������д
//5.1 fseek

//int main() {
//
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf) {
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
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
//	//�ر��ļ�
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
//	//���ļ�
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
//	//�ر��ļ�
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
//	//���ļ�
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
//	//�ر��ļ�
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


//�����ļ�
//����data1.txt������һ���µ��ļ�data2.txt
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
//	//��д�ļ�
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


//�ļ�������
//�������������Ƚ�����д������������ڣ��ٽ��������ڵ����ݣ�д��Ӳ����
//Ӳ���ڵ����ݣ��ȷŽ��������ڣ�Ȼ����д��������������


#include <stdio.h>
#include <windows.h>
//VS2013 WIN10��������
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ�����������������
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);
	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;
	return 0;
}
