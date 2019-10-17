//用C语言实现在屏幕上打印一个菱形
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;//i表示行数
	int line = 0;
	printf("请输入打印菱形上半部分的行数\n");
	scanf("%d", &line);
	printf("菱形如下：\n");
	for (i = 1; i <= line; i++)//打印菱形的上半部分,先打印空格再打印*
	{
		int j = 0;//j表示从左往右的位置
		for (j = 0; j < line - i; j++)
		{
			printf(" ");//将*推向中间
		}
		for (j = 0; j < 2 * i - 1; j++)//主体部分的打印
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= line-1; i++)//打印菱形下半部分
	{
		int j = 0;
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - i) - 1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



