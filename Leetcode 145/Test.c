//二叉树的后序遍历
#include<stdio.h>
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

//定义全局变量
int *array;
int size;

//后序遍历
void postorder(struct TreeNode *root){
	if (root != NULL){
		postorder(root->left);
		postorder(root->right);
		array[size++] = root->val;
	}
}

int* postorderTraversal(struct TreeNode* root, int* returnSize){
	//开辟数组
	array = (int*)malloc(sizeof(int)* 100 * 1000);
	size = 0;

	postorder(root);

	*returnSize = size;

	return array;
}