//�����n��쳲������� 1 1 2 3 5 8 13 21 34 55
//����һ���ݹ�д��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d ", fib(n));
	return 0;
}

//���������ǵݹ�д��
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d ", fib(n));
	return 0;
}