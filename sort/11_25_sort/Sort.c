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
//三数取中

int GetMidi(int* a, int left, int right) {
	int mid = (left + right) / 2;
	//left mid right
	if (a[left] < a[mid]) {

		if (a[right] < a[mid]) {
			return mid;
		}
		else if (a[left] > a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if (a[left] < a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}


}

//前后指针

int PartSort3(int* a, int left, int right) {

	int prev = left;
	int cur = prev + 1;
	int keyi = left;
	while (cur <= right) {
		if (a[cur] < a[keyi] /*&& ++prev != cur*/) {
			++prev;
			Swap(&a[cur], &a[prev]);
		}
		cur++;
	}
	Swap(&a[keyi], &a[prev]);
	return prev;

}


//挖坑法
//int PartSort2(int* a, int left, int right) {
//
//	int midi = GetMidi(a, left, right);
//	Swap(&a[left], &a[midi]);
//
//	int key = a[left];
//	//保存key值，左边形成第一个坑
//	int hole = left;
//	while (left < right)
//	{
//		// 右边先走，找小， 填到左边的坑，右边形成新的坑位
//		while ( left < right &&a[right] >= key) {
//			--right;
//		}
//		a[hole] = a[right];
//		
//		hole = right;
//
//		// 左边再走，找大，填到右边的坑位，左边形成新的坑位
//
//		while (left < right && a[left] <= key) {
//			++left;
//		}
//		a[hole] = a[left];
//
//		hole = left;
//		
//	}
//	a[hole] = key;
//	return hole;
//}


//// Hoare
//int PartSort1(int* a, int left, int right) {
//
//	int midi = GetMidi(a, left, right);
//	Swap(&a[left], &a[midi]);
//
//	int keyi = left;
//	while (left < right)
//	{
//		while ( left < right &&a[right] >= a[keyi]) {
//			--right;
//		}
//		while ( left < right && a[left] <= a[keyi]) {
//			++left;
//		}
//		Swap(&a[left], &a[right]);
//	}
//	Swap(&a[keyi], &a[left]);
//	return left;
//}

// [begin, end]
// 左闭右开
void QuickSort(int* a, int begin, int end) {

	if (begin >= end)
		return;

	int keyi = PartSort3(a, begin, end);
	//[begin, keyi - 1] keyi [keyi + 1, end]

	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1,end);


}
