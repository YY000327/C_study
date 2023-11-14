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

//´øÉÚ±øÎ»

#include<stdio.h>
struct ListNode* removeElements(struct ListNode* head, int val) {
	struct ListNode* newhead = NULL, * tail = NULL;
	struct ListNode* cur = head;
	newhead = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
	while (cur) {

		if (cur->val != val) {
	

			tail->next = cur;
			tail = tail->next;
			cur = cur->next;
		}
		else {
			struct ListNode* tmp = cur;
			cur = cur->next;
			free(tmp);
		}
	}
	tail->next = NULL;

	struct ListNode* tmp = newhead;
	newhead = newhead->next;
	free(tmp);

	return newhead->next;
}