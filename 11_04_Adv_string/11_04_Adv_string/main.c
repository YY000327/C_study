#define  _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include <string.h>


//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}


//strlen��������޷��ŵ���
//int main() {
//
//	if (strlen("abc") - strlen("abcdef") > 0) {
//		printf("����\n");
//
//	}
//	else {
//		printf("С�ڵ���\n");
//	}
//
//	return 0;
//}




//size_t my_strlen(const char* str) {
//
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main() {
//
//	size_t sz = my_strlen("abc");
//
//	printf("%u\n", sz);
//
//	return 0;
//}


//char* strcpy


//int main() {
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "hello world";
//	char* arr1 = "xxxxxxxx";
//	char arr2[5] = { 'a', 'b', 'c', 'd', '\0' };
//
//	strcpy(arr1, arr2);//Դ�ַ�����Ҫ��\0,��Ŀ��ռ��㹻��,�����ǿɱ�ռ�
//	printf("%s\n", arr1);
//
//
//	return 0;
//}

#include <assert.h>


//char* my_strcpy(char* dest, const char* src) {
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*src != '\0') {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//
//	return ret;
//}

//char* my_strcpy(char* dest, const char* src) {
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++) {
//		;
//	}
//	*dest = *src;
//
//	return ret;
//}
//
//
//int main() {
//
//	char arr1[20] = { 0 };
//	//char arr2[] = "hello world";
//	char arr2[5] = { 'a', 'b', 'c', 'd', '\0' };
//
//	my_strcpy(arr1, arr2);//Դ�ַ�����Ҫ��\0,��Ŀ��ռ��㹻��,�����ǿɱ�ռ�
//	printf("%s\n", arr1);
//
//
//	return 0;
//}

//
//void my_strcat(char* dest, const char* src) {
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//
//	while (*dest != '\0') {
//		dest++;
//	}
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}
//
////stract,��Դͷ���ַ���׷�ӵ�Ŀ��
//int main() {
//
//	char arr1[20] = "hello ";
//	char arr2[] = "world";//strcat��ò�Ҫ�Լ����Լ�׷��
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2) {
//	assert(str1 && str2);
//	while (*str1 == *str2) {
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//
//	return (*str1 - *str2);
//	//if (*str1 > *str2)
//	//	return 1;
//	//else
//	//	return -1;
//}
//
//int main() {
//	int ret = my_strcmp("abq", "abcedf");
//	printf("%d\n", ret);
//	return 0;
//}
//
//int main() {
//	char arr1[20] = "abcdef";
//	char arr2[] = "abcdhhh";
//	//strncpy(arr1, arr2, 5);//���������������Դͷ�ַ������ͻᲹ\0
//	//strncat(arr1, arr2, 5);//���׷����������Դͷ�ַ����Ĵ�С���Ǿ�ֹͣ׷��
//	printf("%d\n", strncmp(arr1, arr2, 4));
//// ��n���ַ����������г������޵��ַ��������������յ����ƣ���԰�ȫ
//	printf("%s\n", arr1);
//
//	return 0;
//}
//
//char* my_strstr(char* str1, char* str2) {
//
//	char* cp = str1;
//	char* s1 = cp;
//	char* s2 = str2;
//
//	if (*str == '\0')
//		return str1;
//
//	while (&cp) {
//		//��ʼƥ��
//		s1 = cp;
//		s2 = str2;
//		while (*s1&& *s2&&*s1 == *s2) {
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cp;
//		cp++;
//	}
//	return NULL;
//}
//
//
//int main() {
//
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "def";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("can't find\n");
//
//	return 0;
//
//}


//strtok,�ָ��
//
//int main() {
//
//	char arr[] = "dorianli@hotmail.com#7777";
//	char  copy[30];
//	strcpy(copy, arr);
//
//
//	char sep[] = "@.#";
//	//char* ret = strtok(copy, sep);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//
//	char* ret = NULL;
//	for (ret = strtok(copy, sep); ret != NULL; ret = strtok(NULL, sep)) {
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//strerror, �⺯����ִ�е�ʱ�򣬷����˴�λ���Ὣһ����������errno��������У�errno��c�ṩ������Ϣ

//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d: %s\n", i, strerror(i));
//	}
//
//
//	return 0;
//}


//int main() {
//
//	//c�����п��Բ����ļ�
//	//�����ļ��Ĳ���
//	//1. ���ļ�
//	//2. ��/д
//	//3. �ر��ļ�
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL) {
//		printf("fopen: %s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//		
//	}
//	//���ļ�
//	//..
//
//	//�ر��ļ�
//	fclose(pf);
//
//	return 0;
//
//
//}
//#include <ctype.h>
//
//
//int main() {
//
//	/*printf("%d\n", isupper('A'));
//
//	printf("%d\n", isdigit('a'));
//	printf("%c\n", tolower('A'));*/
//
//	char arr[20] = { 0 };
//	gets(arr);//���Խ��ܿո�
//	printf("%s\n", arr);
//	char* p = arr;
//	while (*p) {
//		if (islower(*p)) {
//			*p = toupper(*p);
//		}
//		p++;
//	}
//	printf("%s\n", arr);
//
//	return 0;




