#define  _CRT_SECURE_NO_WARNINGS 1



//�ڴ溯��

//memcpy���ڴ濽��
//memcpy(void*dest,void* src, size_t num);
//�����ַ���
//������������
//�����ṹ������

#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	memcpy(arr2, arr1, 40);
//	int i = 0;
//	for (i = 0; i < 20; i++) {
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//
//}


//int main() {
//	float arr1[] = { 1.0,2.0,3.0,4.0,5.0 };
//	float arr2[20] = { 0 };
//
//	memcpy(arr2, arr1, 40);
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		printf("%lf ", arr2[i]);
//	}
//	return 0;
//
//}


//�������������󣬻᷵��Ŀ��ռ����ʼ��ַ
//void* my_memcpy(void* dest, const void* src, size_t num) {
//	void* ret = dest;
//	assert(src && dest);
//	while (num--) {
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		//dest = (char*)dest++; ǿ������ת����һʱ��
//		src = (char*)src + 1;
//	}
//
//	return ret;
//
//
//}

//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 06 
//
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 21);
//	int i = 0;
//	for (i = 0; i < 20; i++) {
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 06 
//memcpy���������������ص����ڴ濽��
//��Ϊǰ��ĵ�ַ��cpy�Ժ󣬾ͱ��µ���ֵ������
//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int arr2[20] = { 0 };
//	my_memcpy(arr1+2, arr1, 21);
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//
//void* my_memmove(void* dest, const void* src, size_t num) {
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src) {
//		//ǰ->��
//		while (num--) {
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else {
//		//��->ǰ
//		while (num--)//20
//		{
//			*((char*)dest + num) = *((char*)src + num);
//
//
//		}
//	}
//	return ret;
//}
////vs ��memcpy����ʵ���ص�����
//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	my_memmove((arr1 + 2), arr1, 20);//�ص�ʹ�ã�ʹ��memmove
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//int main() {
//	int arr1[] = { 1,2,1,4,5,6 };
//	int arr2[] = { 1,2,257 };
//	int ret = memcmp(arr1, arr2, 10);
//
//	printf("%d", ret);
//
//
//	return 0;
//}


//memset//�ڴ����ã���ָ���ڴ�ĵ�ַ���n���ֽڣ�ת����������Ҫ������


//int main() {
//	char arr[] = "hello world";
//	memset(arr + 1, 'x', 4);//���ֽ�Ϊ��λ
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main() {
//	int arr[10] = {0};
//	memset(arr, 1, 10);
//
//	return 0;
//}

//���Ͼ���
//���� -- ��ά����
//��������ң����ϵ��¶��ǵ�����
//С��0��N������Ҫ��������ÿ�����飬�ҵ�����Ҫ������
//
//void yooung_search(int arr[3][3], int k, int* px, int* py) {
//
//	int x = 0;
//	int y = *py -1;
//	int flag = 0;
//	while (x <= *px-1 && *py >= 0) {
//		if (arr[x][y] < k) {
//			x++;
//		}
//		else if (arr[x][y] > k) {
//			y--;
//		}
//		else {
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	*px = -1;
//	*py = -1;
//}
//
//
//int main() {
//
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//	yooung_search(arr, k, &x, &y);
//	if (x == -1 && y == -1) {
//		printf("can't find\n");
//	}
//	else {
//		printf("find, subscript is %d %d\n", x, y);
//	}
//	return 0;
//
//
//}

//�ַ�������
//abcdef
//����1 bcdefa
//����2 cdefab

#include <string.h>

//void left_move(char* str, int k) {
//	int j = 0;
//	for (j = 0; j < k; j++) {
//		char tmp = *str;
//		int len = strlen(str);
//		int i = 0;
//		for (i = 0; i < len - 1; i++) {
//			*(str + i) = *(str + i + 1);
//
//		}
//		*(str + len - 1) = tmp;
//	}
//
//}
//
//int main() {
//
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//
//	printf("%s\n", arr);
//
//}

//void reverse(char* left, char* right) {
//	assert(left && right);
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* str, int k) {
//	int len = strlen(str);
//	k %= len;
//	//�������
//
//	reverse(str, str + k - 1);
//	//�ұ�����
//	reverse(str + k, str + len - 1);
//	//��������
//	reverse(str, str + len - 1);
//
//}
//
//int main() {
//
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//
//	printf("%s\n", arr);
//
//}

