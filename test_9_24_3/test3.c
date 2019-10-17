//C语言中求Sn = a + aa + aaa + aaaa + aaaaa的前n项之和，其中a是一个数字。
//一位数=a,两位数=a*10+a，三位数=aa*10+a，设置一个量来储存上一级的数字，再利用循环累加。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int k = 0;
	scanf("%d%d", &a, &n);
	for (i = 0; i < n; i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("%d", sum);
	return 0;
}

