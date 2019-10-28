//写一个函数计算返回一个二进制中1的个数
#define _CRT_SECURE_NO_WARNINGS
//方法一：右移n 输入负数则会死循环
#include <stdio.h>
int Count(int n)
{
	int count = 0;
	while (n)
	{
		if (n & 1)
		{
			count++;
		}
		n = n >> 1;
	}
	return count;
}
int main()
{
	int n = 0;
	printf("请输入一个数：\n");
	scanf("%d", &n);
	int ret = Count(n);
	printf("%d", ret);
	return 0;
}
//方法二：左移1 
#include <stdio.h>
int Count(int n)
{
	int count = 0;
	int flag = 1;
	while (flag)
	{
		if (n & flag)
		{
			count++;
		}
		flag = flag << 1;
	}
	return count;
}

int main()
{
	int n = 0;
	printf("请输入一个数：\n");
	scanf("%d", &n);
	int ret = Count(n);
	printf("%d", ret);
	return 0;
}
//方法三：有几个1循环几次
#include <stdio.h>
int Count(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);//每次&都是最后一个为1的位变为0
		count++;
	}
	return count;
}

int main()
{
	int n = 0;
	printf("请输入一个数：\n");
	scanf("%d", &n);
	int ret = Count(n);
	printf("%d", ret);
	return 0;
}