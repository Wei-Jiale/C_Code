//输出两数二进制序列对应位有几位不同
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Print(int a, int b)
{
	int ret = a^b;
	int count = 0;
	while (ret)
	{
		count++;
		ret = ret&(ret - 1);
	}
	return count;
}

int main()
{
	int a, b;
	printf("输入两个数:\n");
	scanf("%d %d", &a, &b);
	int ret = Print(a, b);
	printf("%d", ret);
	return 0;
}