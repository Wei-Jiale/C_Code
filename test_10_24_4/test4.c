//����һ���Ǹ����������������������֮��
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
	printf("������һ������\n");
	scanf("%d", &n);
	printf("%d\n", DigitSum(n));
	return 0;
}