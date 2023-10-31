#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//int main() {
//
//	int data[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//完全初始化
//	int data2[10] = { 1,2,3,4,5 };
//	//不完全初始化，剩余的元素默认初始化为0
//
//
//	int data5[] = { 1,2,3,4,5 };//数组如果没有确定大小，数组会根基数组的初始化内容确定数组的大小
//
//	return 0;
//}
//
//int main() {
//
//	int arr[4];//int[4]
//	char ch[5];//char [5]
//	//数组有自己的类型
//
//
//
//	return 0;
//
//}

//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d", arr[6]);
//	printf("%d", 3 << 2 | 3);
//	return 0;
//}


//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		scanf("%d ", &arr[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//	
//}



//int main() {
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%p\n",& arr[i]);//&取地址操作符
//	}
//	return 0;
//
//}
//


//二维数组

//type arr_name[常量值1][常量值2]
//常量值1是行
//常量值2是列

//二维数组的初始化
//
//int main() {
//	int arr1[3][5] = { 1,2,3,4,5,6,7 };//不完全初始化
//	//依次初始化每一行，当不够的时候再初始化下一行，剩余的元素初始化为0
//
//	int arr2[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 7,8,9,1,0 };
//	int arrr3[3][5] = { {1,2},{3,4},{5,6} };
//
//	//二维数组如果初始化，行可以省略，但列不能省略
//	int arr4[][5] = { 1,2,3,4,5 };
//
//
//
//
//	return 0;
//}


////二维数组的输入输出
//int main() {
//
//	int arr[3][5] = { 0 };
//
//	//输入数组
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			scanf("%d ", &arr[i][j]);
//		}
//	}
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}

//C99之后，引入变长数组的概念，可以使用变量来指定数组的大小
//但是vs不支持C99中的变长数组
//gcc编译器可以测试变长数组

//int main() {
//
//	int n = 10;
//	int arr1[n];
//
//	return 0;
//
//}
//
//int main() {
//
//	char arr1[] = "welcome to bit !!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = strlen(arr1) - 1;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int right = sz - 2;
//
//
//	while (left<=right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1000ms
//		system("cls");//system函数是库函数，执行系统指令，cls是清空控制台屏幕信息
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//
//	return 0;
//}
//
//
//
//



//int main() {
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		if (arr[i] == k) {
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//	}
//	if (i == sz) {
//		printf("找不到");
//	}
//	return 0;
//
//}
//

//二分查找
//
//int main() {
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	scanf("%d", &k);
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] == k) {
//			printf("找到了，下标是：%d", mid);
//			break;
//
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1;
//
//		}
//		else {
//			right = mid - 1;
//
//		}
//	}
//	if (left > right) {
//		printf("can't find\n");
//	}
//
//	return 0;
//}
//
//

//int main() {
//	int arr[10] = {0};
//	int i = 0;
//	double sum = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= 9; i++) {
//		scanf("%d", &arr[i]);
//
//	}
//	for (i = 0; i < 10; i++) {
//		sum += arr[i];
//
//
//	}
//	printf("%lf\n", sum / sz);
//	return 0;
//
//}

//
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
//        int arr[][a] = {0};
//        int left = 0;
//        int sz = sizeof(arr) / sizeof(arr[0][0]);
//        int right = a - 1;
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < a; i++) {
//
//            for (j = 0; j < a; j++) {
//                if (j == left) {
//                    printf("*");
//                    left++;
//                }
//                else if (j == right) {
//                    printf("*");
//                    right++;
//                }
//                else {
//
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}

//int main() {
//	int arr1[5];
//	int arr2[5];
//	int arr3[5];
//
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr1[i]);
//
//
//	}
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr2[i]);
//
//	}
//	for (int i = 0; i < 5; i++) {
//		arr3[i] = arr1[i];
//		arr1[i] = arr2[i];
//	}
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr3[i]);
//	}
//	printf("\n");
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//
//}

#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        int arr1[a];
        int arr2[b];

        for (int i = 0; i < a; i++) {
            scanf("%d", &arr1[i]);
        }
        for (int i = 0; i < b; i++) {
            scanf("%d", &arr2[i]);
        }

        int left1 = 0, left2 = 0;
        while (left1 < a && left2 < b) {
            if (arr1[left1] < arr2[left2]) {
                printf("%d ", arr1[left1]);
                left1++;
            }
            else {
                printf("%d ", arr2[left2]);
                left2++;
            }
        }

        // Print remaining elements from arr1 (if any)
        while (left1 < a) {
            printf("%d ", arr1[left1]);
            left1++;
        }

        // Print remaining elements from arr2 (if any)
        while (left2 < b) {
            printf("%d ", arr2[left2]);
            left2++;
        }

        printf("\n");
    }
    return 0;
}

