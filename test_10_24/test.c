//打印杨辉三角
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[100][100] = { 0 };
	int n = 0;
	int i = 0;
	int j = 0;
	printf("请输入杨辉三角的行数：\n");
	scanf("%d", &n);
	while (n<1 || n>100)
	{
		printf("输入非法，请重新输入：\n");
		scanf("%d", &n);
	}
	for (i = 0; i < n; i++)
	{
		arr[i][0] = 1;
	}
	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	printf("杨辉三角如下：\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-5d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}