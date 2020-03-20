//二叉树的中序遍历
#include<stdio.h>
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

//定义全局变量
int *array;
int size;

//中序遍历 
void Inorder(struct TreeNode *root){
	if (root != NULL){
		Inorder(root->left);
		array[size++] = root->val;
		Inorder(root->right);
	}
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
	//开辟数组
	array = (int*)malloc(sizeof(int)* 100 * 1000);
	size = 0;

	//中序遍历
	Inorder(root);

	*returnSize = size;

	return array;
}