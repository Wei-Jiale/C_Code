//���������������
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
void Inorder(struct TreeNode *root){
	if (root != NULL){
		Inorder(root->left);
		array[size++] = root->val;
		Inorder(root->right);
	}
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
	//��������
	array = (int*)malloc(sizeof(int)* 100 * 1000);
	size = 0;

	//�������
	Inorder(root);

	*returnSize = size;

	return array;
}