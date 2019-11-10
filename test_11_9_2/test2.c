//有一个二维数组，数组每行从左到右是递增的，每列从上到下是递增的，在这样的数组中查找一个数字是否存在
//杨氏矩阵
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void find(int **arr,int row,int col,int k,int *px, int*py){
	//左下角开始查找（行最大 row-1，0）
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
	//找不到
	*px = -1;
	*py = -1;
	return;

}
int find_r(int ** arr, int row, int col, int key, int *px, int *py, int curx, int cury){
	//左上角开始查找
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