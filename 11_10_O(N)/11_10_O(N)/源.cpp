#define  _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <assert.h>


//// 计算BinarySearch的时间复杂度？
//int BinarySearch(int* a, int n, int x)
//{
//	assert(a);
//	int begin = 0;
//	int end = n - 1;
//	// [begin, end]：begin和end是左闭右闭区间，因此有=号
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
//二分查找的时间复杂度是O(logN)
//二分查找一共要经历的处理次数是，N,N/2,N/(2^2),N/(2^3).......1
//N+N/2+N/(2^2)+N/(2^3)...+3+2+1
//假设x是次数
//N(2^x)=1
//N=2^x
// log_2(N) =x
//简写就是 O(logN)


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

//斐波那契递归， O(2^N)
//	分裂，如果N会分成 N-1和N-2， N-1会分成N-2和N-3， N-2会分成N-3和N-4
// 每一项就会有 2^（N)个项,一共有多少项呢
// 等比数列 F(N) = 2^(N-2) +2^(N-3)+...2^3+2^2+2^1
// 2F(N)= 2^(N-1) +2^(N-2)+...2^2+2^1+2^0
// 2*F（N)-F(N)
// F(N)= 2^(N-1) - 2^0
// 

//但是斐波那契递归并没有实用价值
//O(2^N)
//如果N=30，如果有三十个
//10亿
//如果N=40
//1万亿
//时间复杂度过高
//用其他方式
//int n1 n2 n3

//
//long long Fac(size_t N)
//{
//	if (0 == N)
//		return 1;
//
//	return Fac(N - 1) * N;
//}
//单次递归，O(N^2)
//单次递归需要经历的次数是， N，N-1;N-2;N-3....1
// N+N-1+N-2+N-3...+3+2+1
//等差数列算法
//（N+1）^2/2
//简化就是N^2


//空间复杂度，空间复杂度是变量的个数
//也使用大O渐进表示法

// 计算BubbleSort的空间复杂度？
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
//增加了额外申请的变量个数// O(1)



// 计算Fibonacci的空间复杂度？
// 返回斐波那契数列的前n项
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
//空间复杂度是 O(N);


//右轮转k的位置
//思路1：
//将第一个数提出来，后面的往前移动一格
//这种时间复杂度， O(N*K)
//再次简化
//k的最好情况， K % N = 0;
//k是N的倍数，不需要旋转
//最坏 k%N== N-1时
//N*(N-1) -> O(N^2)
//第一个N是每次右旋的消耗
//N-1是最多右旋的数量

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

//思路2：
//三度旋转，前一半旋转， 后一半旋转，再整体旋转
//

//思路3： 空间换时间， 时间复杂度 O(N) 空间复杂度 O(N)
// 开辟两个数组，第一个数组不变arr1，新开辟的数组arr2，把需要旋转的后面的数组拷贝到arr2
// 举例 arr[i]需要右轮转3
// arr1[i-3]的后面所有内容复制到arr2
// arr1前面的内容复制到arr2后处
// 然后把整个arr2整个覆盖掉arr1
// 
//

//void rotate(int* nums, int numsSize, int k) {
//
//    k %= numsSize;
//    // 变长数组
//    int tmp[numsSize];
//    int j = k;//拷贝前n-k个
//    for (int i = 0; i < numsSize - k; ++i) {
//        tmp[j++] = nums[i];
//
//    }
//    //拷贝后k个数
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

// 计算阶乘递归Fac的空间复杂度？
// 递归空间复杂度计算，也是空间累加，但不同的是空间可以重复利用
long long Fac(size_t N)
{
	if (N == 0)
		return 1;

	return Fac(N - 1) * N;
}

