//�Գ�����ӡ100~200֮�������
#include <stdio.h>
#include <math.h>
int is_prime(int n)
{
	for (int j = 2; j <= sqrt(n); j++)//��i=a*b��a��b<=sqrt(i)
	{
		if (n%j == 0)
		{
			return 0;//����ʵ��˵����������
		}
	}
	return 1;
}
int main()
{  
	//ֻ�������ſ���������
	int count = 0;//������
	for (int i = 101; i <= 200; i += 2)
	{
		//�ж��Ƿ�Ϊ����
		if (is_prime(i)==1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}