//#define _CRT_SECURE_NO_WARNINGS 1

//删除非严格递增的重复项
//去重算法
//双指针
//第一个指针src指向第一个数，第二个指针dst指向第二个数，如果第一个数等于第二个数，就把第二个指针向后指向下一个数，如果下一个还想等就继续
//如果不相等，就把src移动到下一个数，并且把dst的内容赋到src里面
//本质是，dst依次找src位置不相等的数值，依次向前往后赋值
//去重算法，前提是排序
//void fun1(int* nums, int numsSize) {
//	int dst = 1;
//	int src = 0;
//	while(dst < numsSize) {
//		if (nums[dst] != nums[src]) {
//			nums[++src] = nums[dst++];//src是在赋值前增加，所以用前置++， dst是每次算完就增加1
//			dst++;
//		}
//		dst++;
//
//	}
//
//	return src+1;//因为src在最后并没有移动在dst走到最后的时候
//}
//
//
////第一个指针src指向第二个数，第二个指针dst指向第二个数，如果第二个数等于第一个数，就把dst向后指向下一个数，如果下一个还想等就继续
////如果不相等，就把src内的数用dst里的数覆盖掉
////本质是，dst往前找一个数和src比较，如果不相等就往后依次向前往后赋值
//
//int removeDuplicates(int* nums, int numsSize) {
//	if (numsSize == 0)
//		return 0;
//
//	int dst = 1;
//	int src = 1;
//	while (dst < numsSize) {
//		if (nums[dst] != nums[dst - 1]) {
//			nums[src++] = nums[dst];//少调用依次num[src]更加省时间
//
//		}
//		dst++;
//
//	}
//
//	return src;
//}

//合并一个有序数组，
//依次比较取大，然后从后往前放


//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//	int i1 = m - 1;
//	int i2 = n - 2;
//	int j = m + n - 1;
//	while (i1 >= 0 && i2 >= 0) {
//		if (nums1[i1] > nums2[i2]) {
//			nums1[j--] = nums1[i1--];
//		}
//		else {
//			nums1[j--] = nums2[i2--];
//		}
//	}
//	while (i2 >= 0) {
//		nums1[j--] = nums2[i2--];
//	}
//
//
//
//}

//顺序表的问题
//1. 尾部插入效率还不错，头部或者中间插入删除，需要挪动数据，效率低下
//2.满了以后只能扩容。扩容是有一定的消耗的；扩容一般存在一定的空间浪费（假设空间是100满了，扩容到200，只需要插入120个数据，有80个就浪费了）
//一次扩得越多，可能浪费得越多
//一次扩得少，那么可能会频繁扩容

//链表用小块小块得空间去管理
//链表用不同得结点来链接成表
//每个结点得地址没有关联，是随机得，东一个，西一个
//第一个结点指向第二个结点的地址，依次排序，最后一个结点指向空
//如果想要插入，直接把结点指向新加入的结点，然后新加入的结点指向下一个结点



//876. 链表的中间结点
//找到中间的结点，然后将phead移到中间输出需要的内容
//写两个指针，一个slow，一个fast，slow走一格，fast走两格，当fast走完了，slow也走到一半了


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//struct ListNode* middleNode(struct ListNode* head) {
//	struct ListNode* slow = head, * fast = head;
//	while (fast && fast->next) {
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	return slow;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
////给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
//struct ListNode {
//	
//	int val;
//
//	struct ListNode* next;
//	//结构体不能嵌套结构体，这里的指针是指向下一个结点的
//
//};
//
//struct ListNode* removeElements(struct ListNode* head, int val) {
//	struct ListNode* prev = NULL;
//	struct ListNode* cur = head;
//	while (cur) {
//		if (cur->val == val) {
//			struct ListNode* next = cur->next;
//			free(cur);
//			if (prev)
//				prev->next = next;
//			else
//				head = next;
//			cur = next;
//		}
//		else {
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//
//}
//int main() {
//	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	
//	n1->val = 7;
//	n2->val = 7;
//	n3->val = 7;
//	n4->val = 7;
//
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = NULL;
//
//	struct ListNode* head = removeElements(n1, 7);
//
//	return 0;
//
//
//
//}