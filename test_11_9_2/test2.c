//��һ����ά���飬����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ����ģ��������������в���һ�������Ƿ����
//���Ͼ���
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void find(int **arr,int row,int col,int k,int *px, int*py){
	//���½ǿ�ʼ���ң������ row-1��0��
	int startx = row - 1;
	int starty = 0;
	while (startx>=0&&starty<col)
	if (arr[startx][starty] == k){
		*px = startx;
		*py = starty;
		return;
	}
	else if (arr[startx][starty] > k){
		--startx;
	}
	else{
		++starty;
	}
	//�Ҳ���
	*px = -1;
	*py = -1;
	return;

}
int find_r(int ** arr, int row, int col, int key, int *px, int *py, int curx, int cury){
	//���Ͻǿ�ʼ����
	printf("%d %d\n", curx, cury);
	if (curx >= row || cury < 0){
		return -1;
	}
	if (arr[curx][cury] == key){
		*px = curx;
		*py = cury;
		return 1;
	}
	else if (arr[curx][cury] > key){
		return find_r(arr, row, col, key, px, py, curx, cury - 1);
	}
	else{
		return find_r(arr, row, col, key, px, py, curx + 1, cury);
	}
}


int main(){
	int row, col,key;
	int px, py;
	printf("row col\n");
	scanf("%d%d", &row, &col);
	printf("input element\n");
	int **arr = (int**)malloc(sizeof(int*)*row);
	for (int i = 0; i < row; ++i){
		arr[i] = (int**)malloc(sizeof(int*)*row);
		for (int j = 0; j < col; ++j){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("key\n");
	scanf("%d", &key);
	find(arr, row, col, key, &px, &py);
	printf("%d %d\n", px, py);

	printf("find_r\n");
	find_r(arr, row, col, key, &px, &py, 0, col - 1);
	return 0;
}