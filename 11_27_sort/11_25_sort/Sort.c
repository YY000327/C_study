#define  _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"
#include "Stack.h"


void PrintArray(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

}

void InsertSort(int* a, int n)
{

	//[0,end]���򣬰�end+1λ�õĲ��뵽ǰ������
	//����[0,end+1]����
	for (int i = 0; i < n-1 ; i++) {
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
	for (int j = 0; j < n; j++) {
		int exchange = 0;
		for (int i = 0; i < n - j; i++) {
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

		//�ҳ�С���Ǹ�����
		if ((child + 1 < n) && (a[child + 1] > a[child])) {
			++child;
		}
		if (a[child] > a[parent]) {
			Swap(&a[child], &a[parent]);
			//�������µ���
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
	//���µ�������
	//ʱ�临�Ӷ���O��n)
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

		//����һ��max��ֵ
		if (maxi == begin) {
			maxi = mini;
		}
		Swap(&a[end], &a[maxi]);

		++begin;
		--end;

	}
	
}
//����ȡ��

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

//ǰ��ָ��

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


//�ڿӷ�
//int PartSort2(int* a, int left, int right) {
//
//	int midi = GetMidi(a, left, right);
//	Swap(&a[left], &a[midi]);
//
//	int key = a[left];
//	//����keyֵ������γɵ�һ����
//	int hole = left;
//	while (left < right)
//	{
//		// �ұ����ߣ���С�� ���ߵĿӣ��ұ��γ��µĿ�λ
//		while ( left < right &&a[right] >= key) {
//			--right;
//		}
//		a[hole] = a[right];
//		
//		hole = right;
//
//		// ������ߣ��Ҵ���ұߵĿ�λ������γ��µĿ�λ
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
int PartSort1(int* a, int left, int right) {

	//int midi = GetMidi(a, left, right);
	//Swap(&a[left], &a[midi]);

	int keyi = left;
	while (left < right)
	{
		while ( left < right &&a[right] >= a[keyi]) {
			--right;
		}
		while ( left < right && a[left] <= a[keyi]) {
			++left;
		}
		Swap(&a[left], &a[right]);
	}
	Swap(&a[keyi], &a[left]);
	return left;
}

// [begin, end]
// ����ҿ�


void QuickSort(int* a, int begin, int end) {

	if (begin >= end)
		return;

	//С�����Ż���С���䲻�ٵݹ�ָ����򣬽��͵ݹ��ʱ
	if (end - begin + 1 > 10) {

		int keyi = PartSort3(a, begin, end);
		//[begin, keyi - 1] keyi [keyi + 1, end]

		QuickSort(a, begin, keyi - 1);
		QuickSort(a, keyi + 1, end);
	}
	else {
		InsertSort(a + begin, end - begin + 1);
	}



}

void QuickSortNonR(int* a, int begin, int end) {
	ST st;
	STInit(&st);
	STPush(&st, end);
	STPush(&st, begin);
	while (!STEmpty(&st))
	{
		int left = STTop(&st);
		STPop(&st);

		int right = STTop(&st);
		STPop(&st);
		int keyi = PartSort1(a, left, right);
		//[left, keyi-1] keyi [keyi+1, right]

		if (keyi + 1 < right) {
			STPush(&st, end);
			STPush(&st, keyi+1);
		}
		if (left < keyi - 1) {
			STPush(&st, keyi-1);
			STPush(&st, left);
		}

	}


	STDestroy(&st);

}
void _MergeSort(int* a, int* tmp, int begin, int end)
{
	if (end <= begin)
		return;
	
	int mid = (end + begin) / 2;
	// [begin, mid] [mid+1,end]
	_MergeSort(a, tmp, begin, mid);
	_MergeSort(a, tmp, mid+1, end);

	//�鲢��tmp�����飬�ٿ�����ȥ
	// a->[begin,mid][mid+1 end] ->tmp
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int index = begin;
	while (begin1 <= end1 && begin2 <= end2) {
		if (a[begin1] <= a[begin2]) 
		{

			tmp[index++] = a[begin1++];
		}
		else
		{
			tmp[index++] = a[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[index++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[index++] = a[begin2++];
	}

	//������ԭ����
	memcpy(a + begin, tmp + begin, (end - begin + 1) * sizeof(int));
}



void MergeSort(int* a, int n) {

	int* tmp =(int*) malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;

	}

	_MergeSort(a, tmp, 0, n - 1);

	free(tmp);


}


void MergeSortNonR(int* a, int n) {

	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		return;

	}

	int gap = 1;
	while (gap < n)
	{


		for (int i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			//[begin1,end1] [begin2,end2] �鲢
			// printf("[%d , %d], [%d , %d]", begin1, end1, begin2, end2);


			//����ڶ��鲻���ڣ���һ��Ͳ��ù鲢��
			if (begin2 >= n)
			{
				break;
			}

			//����ڶ�������ұ߽�Խ�磬����һ��
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			int index = i;
			while (begin1 <= end1 && begin2 <= end2) {
				if (a[begin1] < a[begin2])
				{

					tmp[index++] = a[begin1++];
				}
				else
				{
					tmp[index++] = a[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[index++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[index++] = a[begin2++];
			}
			memcpy(a + i, tmp + i, (end2 - i + 1) * sizeof(int));

		}
		//printf("\n");
		gap *= 2;
	}

	free(tmp);
}

//ʱ�临�Ӷȣ�O(N+range)
//�ռ临�Ӷȣ�O(range)
//�ʺϷ�Χ���е�����
//ֻ�ʺ�����
void CountSort(int* a, int n) {
	int min = a[0], max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < min)
			min = a[i];

		if (a[i] > max)
			max = a[i];
	}

	int range = max - min + 1;
	int* count = (int*)malloc(sizeof(int) * range);
	if (count == NULL) {

	}
	memset(count, 0, sizeof(int) * range);

	//ͳ�����ݳ��ֵĴ���
	for (int i = 0; i < n; i++) {
		count[a[i] - min]++;
	}

	//����
	int j = 0;
	for (int i = 0; i < range; i++) {
		while (count[i]--) {
			a[j++] = i + min;
		}
	}
}




