//дһ���������㷵��һ����������1�ĸ���
#define _CRT_SECURE_NO_WARNINGS
//����һ������n ���븺�������ѭ��
#include <stdio.h>
int Count(int n)
{
	int count = 0;
	while (n)
	{
		if (n & 1)
		{
			count++;
		}
		n = n >> 1;
	}
	return count;
}
int main()
{
	int n = 0;
	printf("������һ������\n");
	scanf("%d", &n);
	int ret = Count(n);
	printf("%d", ret);
	return 0;
}
//������������1 
#include <stdio.h>
int Count(int n)
{
	int count = 0;
	int flag = 1;
	while (flag)
	{
		if (n & flag)
		{
			count++;
		}
		flag = flag << 1;
	}
	return count;
}

int main()
{
	int n = 0;
	printf("������һ������\n");
	scanf("%d", &n);
	int ret = Count(n);
	printf("%d", ret);
	return 0;
}
//���������м���1ѭ������
#include <stdio.h>
int Count(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);//ÿ��&�������һ��Ϊ1��λ��Ϊ0
		count++;
	}
	return count;
}

int main()
{
	int n = 0;
	printf("������һ������\n");
	scanf("%d", &n);
	int ret = Count(n);
	printf("%d", ret);
	return 0;
}