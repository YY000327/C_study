#define  _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <assert.h>


//// ����BinarySearch��ʱ�临�Ӷȣ�
//int BinarySearch(int* a, int n, int x)
//{
//	assert(a);
//	int begin = 0;
//	int end = n - 1;
//	// [begin, end]��begin��end������ұ����䣬�����=��
//	while (begin <= end)
//	{
//		int mid = begin + ((end - begin) >> 1);
//		if (a[mid] < x)
//			begin = mid + 1;
//		else if (a[mid] > x)
//			end = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//���ֲ��ҵ�ʱ�临�Ӷ���O(logN)
//���ֲ���һ��Ҫ�����Ĵ�������ǣ�N,N/2,N/(2^2),N/(2^3).......1
//N+N/2+N/(2^2)+N/(2^3)...+3+2+1
//����x�Ǵ���
//N(2^x)=1
//N=2^x
// log_2(N) =x
//��д���� O(logN)


//long long Fib(size_t N) {
//	if (N < 3)
//		return 1;
//	return Fib(N - 1) + Fib(N - 2);
//}
//
//int main() {
//
//	printf("%lld\n", Fib(50));
//
//	return 0;
//}
//

//쳲������ݹ飬 O(2^N)
//	���ѣ����N��ֳ� N-1��N-2�� N-1��ֳ�N-2��N-3�� N-2��ֳ�N-3��N-4
// ÿһ��ͻ��� 2^��N)����,һ���ж�������
// �ȱ����� F(N) = 2^(N-2) +2^(N-3)+...2^3+2^2+2^1
// 2F(N)= 2^(N-1) +2^(N-2)+...2^2+2^1+2^0
// 2*F��N)-F(N)
// F(N)= 2^(N-1) - 2^0
// 

//����쳲������ݹ鲢û��ʵ�ü�ֵ
//O(2^N)
//���N=30���������ʮ��
//10��
//���N=40
//1����
//ʱ�临�Ӷȹ���
//��������ʽ
//int n1 n2 n3

//
//long long Fac(size_t N)
//{
//	if (0 == N)
//		return 1;
//
//	return Fac(N - 1) * N;
//}
//���εݹ飬O(N^2)
//���εݹ���Ҫ�����Ĵ����ǣ� N��N-1;N-2;N-3....1
// N+N-1+N-2+N-3...+3+2+1
//�Ȳ������㷨
//��N+1��^2/2
//�򻯾���N^2


//�ռ临�Ӷȣ��ռ临�Ӷ��Ǳ����ĸ���
//Ҳʹ�ô�O������ʾ��

// ����BubbleSort�Ŀռ临�Ӷȣ�
//void BubbleSort(int* a, int n)
//{
//	assert(a);
//	for (size_t end = n; end > 0; --end)
//	{
//		int exchange = 0;
//		for (size_t i = 1; i < end; ++i)
//		{
//			if (a[i - 1] > a[i])
//			{
//				Swap(&a[i - 1], &a[i]);
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//			break;
//	}
//}
//�����˶�������ı�������// O(1)



// ����Fibonacci�Ŀռ临�Ӷȣ�
// ����쳲��������е�ǰn��
//long long* Fibonacci(size_t n)
//{
//	if (n == 0)
//		return NULL;
//
//	long long* fibArray = (long long*)malloc((n + 1) * sizeof(long long));
//	fibArray[0] = 0;
//	fibArray[1] = 1;
//	for (int i = 2; i <= n; ++i)
//	{
//		fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
//	}
//	return fibArray;
//}
//�ռ临�Ӷ��� O(N);


//����תk��λ��
//˼·1��
//����һ������������������ǰ�ƶ�һ��
//����ʱ�临�Ӷȣ� O(N*K)
//�ٴμ�
//k���������� K % N = 0;
//k��N�ı���������Ҫ��ת
//� k%N== N-1ʱ
//N*(N-1) -> O(N^2)
//��һ��N��ÿ������������
//N-1���������������

//
//
//void swap(int* a, int* b) {
//    int t = *a;
//    *a = *b;
//    *b = t;
//}
//
//void reverse(int* nums, int start, int end) {
//    while (start < end) {
//        swap(&nums[start], &nums[end]);
//        start += 1;
//        end -= 1;
//    }
//}
//
//
//
//void rotate(int* nums, int numsSize, int k) {
//
//    k %= numsSize;
//    reverse(nums, 0, numsSize - 1);
//    reverse(nums, 0, k - 1);
//    reverse(nums, k, numsSize - 1);
//
//
//}

//˼·2��
//������ת��ǰһ����ת�� ��һ����ת����������ת
//

//˼·3�� �ռ任ʱ�䣬 ʱ�临�Ӷ� O(N) �ռ临�Ӷ� O(N)
// �����������飬��һ�����鲻��arr1���¿��ٵ�����arr2������Ҫ��ת�ĺ�������鿽����arr2
// ���� arr[i]��Ҫ����ת3
// arr1[i-3]�ĺ����������ݸ��Ƶ�arr2
// arr1ǰ������ݸ��Ƶ�arr2��
// Ȼ�������arr2�������ǵ�arr1
// 
//

//void rotate(int* nums, int numsSize, int k) {
//
//    k %= numsSize;
//    // �䳤����
//    int tmp[numsSize];
//    int j = k;//����ǰn-k��
//    for (int i = 0; i < numsSize - k; ++i) {
//        tmp[j++] = nums[i];
//
//    }
//    //������k����
//    j = 0;
//    for (int i = numsSize - k - 1; i < numsSize; ++i) {
//        tmp[j++] = nums[i];
//
//    }
//    for (int i = 0; i < numsSize; ++i) {
//        nums[i]= tmp[j++] ;
//
//    }
//
//}

// ����׳˵ݹ�Fac�Ŀռ临�Ӷȣ�
// �ݹ�ռ临�Ӷȼ��㣬Ҳ�ǿռ��ۼӣ�����ͬ���ǿռ�����ظ�����
long long Fac(size_t N)
{
	if (N == 0)
		return 1;

	return Fac(N - 1) * N;
}

