#define  _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//struct ListNode* removeElements(struct ListNode* head, int val) {
//	struct ListNode* newhead = NULL, * tail = NULL;
//	struct ListNode* cur = head;
//
//	while (cur) {
//
//		if (cur->val != val) {
//			if (tail == NULL) {
//				newhead = tail = cur;
//			}
//			else {
//				tail->next = cur;
//				tail = tail->next;
//			}
//			cur = cur->next;
//		}
//		else {
//			struct ListNode* tmp = cur;
//			cur = cur->next;
//			free(tmp);
//		}
//	}
//	if (tail)
//		tail->next = NULL;
//
//	return newhead;
//}

//���ڱ�λ

//#include<stdio.h>
//struct ListNode* removeElements(struct ListNode* head, int val) {
//	struct ListNode* newhead = NULL, * tail = NULL;
//	struct ListNode* cur = head;
//	newhead = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
//	while (cur) {
//
//		if (cur->val != val) {
//	
//
//			tail->next = cur;
//			tail = tail->next;
//			cur = cur->next;
//		}
//		else {
//			struct ListNode* tmp = cur;
//			cur = cur->next;
//			free(tmp);
//		}
//	}
//	tail->next = NULL;
//
//	struct ListNode* tmp = newhead;
//	newhead = newhead->next;
//	free(tmp);
//
//	return newhead->next;
//}

//��ת����
//struct ListNode* reverseList(struct ListNode* head) {
//    if (head == NULL)
//        return NULL;
//    struct ListNode* n1, * n2, * n3;
//    n1 = NULL;
//    n2 = head;
//    n3 = head->next;
//
//    while (n2) {
//
//        n2->next = n1;
//        n1 = n2;
//        n2 = n3;
//        if (n3)
//            n3 = n3->next;
//    }
//    return n1;
//}
////������
//struct ListNode* reverseList(struct ListNode* head) {
//    struct ListNode* cur = head;
//    struct ListNOde* newhead = NULL;
//    while (cur) {
//        struct Listnode* next = cur->next;
//        cur->next = newhead;
//        newhead = cur;
//        cur = next;
//    }
//    return newhead;
//}


//�����е�����k�����
// 
//

//    struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    struct ListNode* slow = pListHead, * fast = pListHead;
//    while (k--) {
//        if (fast == NULL)
//            return NULL;
//        fast = fast->next;
//    }
//    while (fast) {
//        slow = slow->next;
//        fast = fast->next;
//    }
//
//    return slow;
//    // write code here
//}


////�ཻ����
//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
//    struct ListNode* curA = headA, * curB = headB;
//    int lenA = 1;
//    int lenB = 1;
//
//    //��β��㣬˳���Ҳ�ֵ
//    while (curA->next) {
//        lenA++;
//        curA = curA->next;
//
//
//    }
//    while (curB->next) {
//        lenB++;
//        curB = curB->next;
//
//
//    }
//    if (curA != curB) {
//        return NULL;
//    }
//
//    int n = abs(lenA - lenB);
//    struct ListNode* longlist = headA, * shortlist = headB;
//    if (lenB > lenA) {
//        longlist = headB;
//        shortlist = headA;
//    }
//
//    //�������߲�ಽ
//    while (n--) {
//        longlist = longlist->next;
//
//    }
//    while (longlist != shortlist) {
//        longlist = longlist->next;
//        shortlist = shortlist->next;
//    }
//
//    return longlist;
//
//}

//��������
//struct ListNode* detectCycle(struct ListNode* head) {
//    struct ListNode* fast = head, * slow = head;
//    while (fast && fast->next) {
//        slow = slow->next;
//        fast = fast->next->next;
//
//        if (slow == fast) {
//            struct ListNode* meet = slow;
//            while (head != meet) {
//                head = head->next;
//                meet = meet->next;
//            }
//            return meet;
//        }
//
//    }
//    return false;
//}