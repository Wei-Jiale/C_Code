//输出乘法口诀表
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	printf("请输入打印乘法口诀表的行数：\n");
	scanf("%d", &n);
	//分为行数和列数，逐行打印。
	//控制行数
	for (int i = 1;i <= n;i++)
	{
		//控制列数
		for (int j = 1;j <= i;j++)
		{
			printf("%d*%d=%d  ", i, j, i*j);
		}
		printf("\n");//打印完一行之后换行。
	}
	return 0;
}

