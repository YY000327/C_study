#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


//不是增删查改，学习二叉树的结构

typedef struct BinaryTreeNode {
	
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	int val;


}BTNode;


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
	if (root == NULL) {
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
		return 1;


	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}

int TreeKlevel(BTNode* root, int level);

int main() {

	//手动构建一个二叉树
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);

	node1->left = node2;
	node2->left = node3;
	node1->right = node4;
	node4->left = node5;
	node4->right = node6;

	PrevOrder(node1);
	printf("\n");

	InerOrder(node1);
	printf("\n");

	PostOrder(node1);
	printf("\n");

	printf("%d\n", TreeSize(node1));

	//size = 0;
	printf("%d\n", TreeLeafSize(node1));


	return 0;

}