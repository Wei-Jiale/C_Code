#define _CRT_SECURE_NO_WARNINGS
//最小公倍数的求解
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数：");
	scanf("%d%d", &a, &b);
	int i = 1;
	while (((a * i) % b) != 0)
	{ 
		i++; 
	}
    printf("%d\n", a*i);
	return 0;
}