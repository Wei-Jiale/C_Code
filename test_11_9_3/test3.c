#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//void leftRotate(char *arr, int k){
//	k %= strlen(arr);
//	//ÔªËØÒÆ¶¯
//	while (k--){
//		char start = 0;
//		char tmp = arr[start];
//		while (arr[start + 1] != '\0'){
//			arr[start] = arr[start + 1];
//			++start;
//		}
//
//		arr[start] = tmp;
//	}
//}

void reverseString(char *left, char *right){
	while (left < right){
		char tmp = *left;
		*left = *right;
		*right = tmp;
		++left;
		--right;
	}
}
void leftRotate(char *arr, int k){
	int len = strlen(arr);
	k %= len;
	//{0,k-1}
	reverseString(arr, arr + k - 1);
	//{k,len-1}
	reverseString(arr + k, arr + len - 1);
	//{0,len-1}
	reverseString(arr, arr + len - 1);
}

int main()
{
	char arr[] = "ABCD";
	int k;
	scanf("%d", &k);
	printf("%s\n", arr);
	for (int i = 1; i <= k; ++i){
		leftRotate(arr, i);
		printf("%s\n", arr);
	}
	
	return 0;
}