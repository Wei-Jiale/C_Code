//输入一个非负整数，返回组成它的数字之和
#include <stdio.h>
int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	else
	{
		return n % 10 + DigitSum(n / 10);
	}
}
int main()
{
	int n = 0;
	printf("请输入一个数：\n");
	scanf("%d", &n);
	printf("%d\n", DigitSum(n));
	return 0;
}