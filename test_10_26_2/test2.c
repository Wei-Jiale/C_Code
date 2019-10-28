//获取一个数二进制序列中所有的偶数位和奇数位
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Print(int n)
{
	//偶数位
	for (int i = 31; i > 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
    }
	printf("\n");
	//奇数位
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int n;
	printf("请输入一个数：");
	scanf("%d", &n);
	Print(n);
	return 0;
}