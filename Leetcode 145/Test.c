//�������ĺ������
#include<stdio.h>
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

//����ȫ�ֱ���
int *array;
int size;

//�������
void postorder(struct TreeNode *root){
	if (root != NULL){
		postorder(root->left);
		postorder(root->right);
		array[size++] = root->val;
	}
}

int* postorderTraversal(struct TreeNode* root, int* returnSize){
	//��������
	array = (int*)malloc(sizeof(int)* 100 * 1000);
	size = 0;

	postorder(root);

	*returnSize = size;

	return array;
}