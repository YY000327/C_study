//#define _CRT_SECURE_NO_WARNINGS 1

//ɾ�����ϸ�������ظ���
//ȥ���㷨
//˫ָ��
//��һ��ָ��srcָ���һ�������ڶ���ָ��dstָ��ڶ������������һ�������ڵڶ��������Ͱѵڶ���ָ�����ָ����һ�����������һ������Ⱦͼ���
//�������ȣ��Ͱ�src�ƶ�����һ���������Ұ�dst�����ݸ���src����
//�����ǣ�dst������srcλ�ò���ȵ���ֵ��������ǰ����ֵ
//ȥ���㷨��ǰ��������
//void fun1(int* nums, int numsSize) {
//	int dst = 1;
//	int src = 0;
//	while(dst < numsSize) {
//		if (nums[dst] != nums[src]) {
//			nums[++src] = nums[dst++];//src���ڸ�ֵǰ���ӣ�������ǰ��++�� dst��ÿ�����������1
//			dst++;
//		}
//		dst++;
//
//	}
//
//	return src+1;//��Ϊsrc�����û���ƶ���dst�ߵ�����ʱ��
//}
//
//
////��һ��ָ��srcָ��ڶ��������ڶ���ָ��dstָ��ڶ�����������ڶ��������ڵ�һ�������Ͱ�dst���ָ����һ�����������һ������Ⱦͼ���
////�������ȣ��Ͱ�src�ڵ�����dst��������ǵ�
////�����ǣ�dst��ǰ��һ������src�Ƚϣ��������Ⱦ�����������ǰ����ֵ
//
//int removeDuplicates(int* nums, int numsSize) {
//	if (numsSize == 0)
//		return 0;
//
//	int dst = 1;
//	int src = 1;
//	while (dst < numsSize) {
//		if (nums[dst] != nums[dst - 1]) {
//			nums[src++] = nums[dst];//�ٵ�������num[src]����ʡʱ��
//
//		}
//		dst++;
//
//	}
//
//	return src;
//}

//�ϲ�һ���������飬
//���αȽ�ȡ��Ȼ��Ӻ���ǰ��


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

//˳��������
//1. β������Ч�ʻ�����ͷ�������м����ɾ������ҪŲ�����ݣ�Ч�ʵ���
//2.�����Ժ�ֻ�����ݡ���������һ�������ĵģ�����һ�����һ���Ŀռ��˷ѣ�����ռ���100���ˣ����ݵ�200��ֻ��Ҫ����120�����ݣ���80�����˷��ˣ�
//һ������Խ�࣬�����˷ѵ�Խ��
//һ�������٣���ô���ܻ�Ƶ������

//������С��С��ÿռ�ȥ����
//�����ò�ͬ�ý�������ӳɱ�
//ÿ�����õ�ַû�й�����������ã���һ������һ��
//��һ�����ָ��ڶ������ĵ�ַ�������������һ�����ָ���
//�����Ҫ���룬ֱ�Ӱѽ��ָ���¼���Ľ�㣬Ȼ���¼���Ľ��ָ����һ�����



//876. ������м���
//�ҵ��м�Ľ�㣬Ȼ��phead�Ƶ��м������Ҫ������
//д����ָ�룬һ��slow��һ��fast��slow��һ��fast�����񣬵�fast�����ˣ�slowҲ�ߵ�һ����


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
////����һ�������ͷ�ڵ� head ��һ������ val ������ɾ���������������� Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ� ��
//struct ListNode {
//	
//	int val;
//
//	struct ListNode* next;
//	//�ṹ�岻��Ƕ�׽ṹ�壬�����ָ����ָ����һ������
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