//十个整数输出最大值(创建数组+循环）
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("请输入十个数\n");
	int arr[10] = { 0 };
	int i = 0;
	int max =0 ;//存放最大值,
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)//录入十个数
	{
		scanf("%d", &arr[i]);
	}
	max = arr[0];//不能定义max为0，max应为输入中的其中一个数，假设第一个元素最大。
	for (i = 1; i < sz; i++)//找最大值，从第二个数开始循环。
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("最大值=%d\n", max);
	return 0;
}





