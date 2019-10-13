//试除法打印100~200之间的素数
#include <stdio.h>
#include <math.h>
int is_prime(int n)
{
	for (int j = 2; j <= sqrt(n); j++)//若i=a*b则a或b<=sqrt(i)
	{
		if (n%j == 0)
		{
			return 0;//整除实现说明不是素数
		}
	}
	return 1;
}
int main()
{  
	//只有奇数才可能是素数
	int count = 0;//计数器
	for (int i = 101; i <= 200; i += 2)
	{
		//判断是否为素数
		if (is_prime(i)==1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}