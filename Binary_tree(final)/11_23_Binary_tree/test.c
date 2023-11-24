#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>


//不是增删查改，学习二叉树的结构

typedef struct BinaryTreeNode {
	
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	int val;


}BTNode;

#include "queue.h"

BTNode* BuyNode(int x) {
	
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));

	if (node == NULL) {

		perror("malloc fail");
		exit(-1);
	}

	node->val = x;
	node->left = NULL;
	node->right = NULL;

	return node;
}

void PrevOrder(BTNode* root) {

	if (root == NULL) {
		printf("NULL ");
		return;
	}

	printf("%d ", root->val);
	PrevOrder(root->left);
	PrevOrder(root->right);
}


void InerOrder(BTNode* root) {

	if (root == NULL) {
		printf("NULL ");
		return;
	}
	

	
	InerOrder(root->left);
	printf("%d ", root->val);
	InerOrder(root->right);
}


void PostOrder(BTNode* root) {

	if (root == NULL) {
		printf("NULL ");
		return;
	}



	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->val);
	
}

//int TreeSize(BTNode* root) {
//	static int size = 0;//static只有在第一次调用会初始化
//	if (root == NULL)
//		return 0;
//	else
//		++size;
//
//	TreeSize(root->left);
//	TreeSize(root->right);
//
//	return size;
//}

//int size = 0;
//
//int TreeSize(BTNode* root) {
//	if (root == NULL)
//		return 0;
//	else
//		++size;
//
//	TreeSize(root->left);
//	TreeSize(root->right);
//
//	return size;
//}


int TreeSize(BTNode* root) {
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}

int TreeLeafSize(BTNode* root) {
	if (root == NULL)
		return 0;
	
	if (root->left == NULL && root->right == NULL)
		return 1;


	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}

int TreeKlevel(BTNode* root, int k) {

	assert(k > 0);
	if (root == NULL)
		return 0;
	if (k == 1)
	{
		return 1;
	}

	return TreeKlevel(root->left, k - 1)+ TreeKlevel(root->right, k - 1);

}

void TreeDestroy(BTNode* root) {
	if (root == NULL) {
		return;
	}
	TreeDestroy(root->left);
	TreeDestroy(root->right);
	free(root);
	//root = NULL;


}

//BTNode* TreeFind(BTNode* root, int x) {
//	if (root == NULL) {
//		return NULL;
//	}
//	if (root->val == x)
//		return root;
//
//	return TreeFind(root->left, x) == NULL ? root :TreeFind(root->right, x);
//	
//
//}

BTNode* TreeFind(BTNode* root, int x) {
	if (root == NULL) {
		return NULL;
	}
	if (root->val == x)
		return root;

	BTNode* ret = TreeFind(root->left,x);
	if (ret)
		return ret;

	ret = TreeFind(root->right, x);
	if (ret)
		return ret;
	return NULL;


}


//BTNode* TreeFind(BTNode* root, int x) {
//	if (root == NULL) {
//		return NULL;
//	}
//	if (root->val == x)
//		return root;
//
//	BTNode* ret = TreeFind(root->left, x);
//	if (ret)
//		return ret;
//
//	return TreeFind(root->right, x);
//
//
//}


void LevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);
	while (!QueueEmpty(&q)) {
		BTNode* front = QueueFront(&q);
		printf("%d", front->val);
		if (front->left)
			QueuePush(&q, front->left);
		if (front->right)
			QueuePush(&q, front->right);

		QueuePop(&q);
	}
	printf("\n");

	QueueDetroy(&q);
}


bool TreeComplete(BTNode* root) {
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);
	while (!QueueEmpty(&q)) {
		BTNode* front = QueueFront(&q);
		if (front == NULL)
			break;
		QueuePush(&q, front->left);
		QueuePush(&q, front->right);
		QueuePop(&q);
	}
	//已经遇到空节点，如果后面队列中后面的节点有非空，就不是完全二叉树

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front != NULL)
		{
			QueueDetroy(&q);
			return false;
		}
	}

	QueueDetroy(&q);
	return true;
}

//int TreeHeight(BTNode* root) {
//	if (root == NULL)
//		return 0;
//
//	int leftHeight = TreeHeight(root->left);
//	int rightHeight = TreeHeight(root->right);
//
//
//
//	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
//
//
//}

int TreeHeight(BTNode* root) {
	if (root == NULL)
		return 0;


	return fmax(TreeHeight(root->left), TreeHeight(root->right)) + 1;
}


//
//int main() {
//
//	//手动构建一个二叉树
//	BTNode* node1 = BuyNode(1);
//	BTNode* node2 = BuyNode(2);
//	BTNode* node3 = BuyNode(3);
//	BTNode* node4 = BuyNode(4);
//	BTNode* node5 = BuyNode(5);
//	BTNode* node6 = BuyNode(6);
//	BTNode* node7 = BuyNode(7);
//	BTNode* node8 = BuyNode(8);
//
//
//
//	node1->left = node2;
//	node2->left = node3;
//	node1->right = node4;
//	node4->left = node5;
//	node4->right = node6;
//	node2->right = node7;
//	node3->left = node8;
//
//	PrevOrder(node1);
//	printf("\n");
//
//	InerOrder(node1);
//	printf("\n");
//
//	PostOrder(node1);
//	printf("\n");
//
//	printf("%d\n", TreeSize(node1));
//
//	//size = 0;
//	printf("%d\n", TreeLeafSize(node1));
//
//	//TreeDestroy(node1);
//	//node1 == NULL;
//	LevelOrder(node1);
//	printf("TreeComplete: %d\n", TreeComplete(node1));
//
//	printf("Treeheight:%d\n", TreeHeight(node1));
//	return 0;
//
//}


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

int main() {

	int a[] = { 3, 4,32, 45, 2, 211, 9 };
	InsertSort(a, 7);

	return 0;
}