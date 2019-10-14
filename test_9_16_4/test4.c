//求两个数的最大公约数(同时能被这两个数整除的数）
//相减法求最大公约数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("输入两个数：\n");
	scanf("%d %d", &a, &b);
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	printf("最大公约数为:%d", a);
	return 0;
}
//辗转相除法求最大公约数（最小公倍数是a*b/最大公约数）
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;//存放a%b
	printf("请输入两个数:\n");
	scanf("%d %d", &a, &b);
	while (c=a%b)//结果为假出循环
	{
		a = b;
		b = c;
	}
	printf("最大公约数为：%d", b);
	return 0;
}