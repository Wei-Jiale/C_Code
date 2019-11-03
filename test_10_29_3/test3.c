//不使用加减求两数平均值
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int avg(int a, int b)
{
	return (a&b) + ((a^b) >> 1);
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int ret = avg(a, b);
	printf("%d", ret);
	return 0;
}