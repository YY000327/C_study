#define  _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"


void PrintArray(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

}

void InsertSort(int* a, int n)
{

	//[0,end]有序，把end+1位置的插入到前序序列
	//控制[0,end+1]有序
	for (size_t i = 0; i < n-1 ; i++) {
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0) {
			if (tmp < a[end]) {
				a[end + 1] = a[end];
			}
			else {
				break;
			}
			--end;
		}
		a[end + 1] = tmp;

	}

}

//void ShellSort(int* a, int n) {
//
//	int gap = 3;
//	for (int j = 0; j < gap; j++) {
//		for (int i = j; i < n - gap; i += gap) {
//			int end = i;
//			int tmp = a[end + gap];
//			while (end >= 0) {
//				if (tmp < a[end]) {
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else {
//					break;
//				}
//
//			}
//			a[end + gap] = tmp;
//		}
//
//	}
//
//}
//
//void ShellSort(int* a, int n) {
//
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 2;
//		for (int i = 0; i < n - gap; ++i) {
//			int end = i;
//			int tmp = a[end + gap];
//			while (end >= 0) {
//				if (tmp < a[end]) {
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else {
//					break;
//				}
//
//			}
//			a[end + gap] = tmp;
//		}
//	}
//	
//
//
//}

void ShellSort(int* a, int n) {

	int gap = n;
	while (gap > 1)
	{
		//gap = gap / 2;
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; ++i) {
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0) {
				if (tmp < a[end]) {
					a[end + gap] = a[end];
					end -= gap;
				}
				else {
					break;
				}

			}
			a[end + gap] = tmp;
		}
	}



}

void Swap(int* x , int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void BubbleSort(int* a, int n) {
	for (size_t j = 0; j < n; j++) {
		int exchange = 0;
		for (size_t i = 0; i < n - j; i++) {
			if (a[i - 1] > a[i]) {
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}
		if (exchange == 0) {
			break;
		}
	}
}



void AdjustDown(int* a, int n, int parent) {
	int child = parent * 2 + 1;
	while (child < n) {

		//找出小的那个孩子
		if ((child + 1 < n) && (a[child + 1] > a[child])) {
			++child;
		}
		if (a[child] > a[parent]) {
			Swap(&a[child], &a[parent]);
			//继续往下调整
			parent = child;
			child = parent * 2 + 1;
		}
		else {
			break;
		}
	}
}


void HeapSort(int* a, int size) {

	for (int i = (size - 1 - 1) / 2; i >= 0; i--) {
		AdjustDown(a, size, i);
	}
	int end = size - 1;
	//向下调整建堆
	//时间复杂度是O（n)
	while (end > 0) {
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;

	}
}

void SelectSort(int* a, int n) {
	int begin = 0, end = n - 1;
	while (begin < end) {

		//[begin,end]
		int mini = begin, maxi = begin;
		for (int i = begin+1; i <= end; i++) {
			if (a[i] > a[maxi]) {
				maxi = i;
			}
			if (a[i] < a[mini]) {
				mini = i;
			}
		}
		Swap(&a[begin], &a[mini]);

		//修正一下max的值
		if (maxi == begin) {
			maxi = mini;
		}
		Swap(&a[end], &a[maxi]);

		++begin;
		--end;

	}
	



	
}