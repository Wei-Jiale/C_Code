//冒泡排序升级
#include<stdio.h>
int int_cmp_greater(int a,int b){//a大于b返回大于0
	return a - b;
}

int int_cmp_less(int a, int b){//a小于b返回大于0
	return b - a;
}

void bubble_sort(int*arr, int sz,int(*pf_com)(int,int)){

	for (int end = sz; end > 0; --end){
		int exchange = 0;
		for (int i = 1; i < end; ++i){
			if (pf_com(arr[i - 1],arr[i]) > 0){//第一个大于第二个返回大于0
				int temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
				exchange = 1;
			}
		}
		if (exchange == 0){
			break;
		}
	}
	
}

int main(){
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int i = 0;
	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]),int_cmp_less);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
		printf("%d ", arr[i]);
	}
	printf("\0");
	return 0;
}