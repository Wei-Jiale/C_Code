//�ݹ�ʵ��n��k�η�
#include <stdio.h>
int Pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else
	{
		return n*Pow(n, k - 1);
	}
}

int main()
{
	int n = 0;
	int k = 0;
	printf("������n��k\n");
	scanf("%d%d", &n, &k);
	int ret = Pow(n, k);
	printf("%d", ret);
	return 0;
}