//��C����ʵ������Ļ�ϴ�ӡһ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;//i��ʾ����
	int line = 0;
	printf("�������ӡ�����ϰ벿�ֵ�����\n");
	scanf("%d", &line);
	printf("�������£�\n");
	for (i = 1; i <= line; i++)//��ӡ���ε��ϰ벿��,�ȴ�ӡ�ո��ٴ�ӡ*
	{
		int j = 0;//j��ʾ�������ҵ�λ��
		for (j = 0; j < line - i; j++)
		{
			printf(" ");//��*�����м�
		}
		for (j = 0; j < 2 * i - 1; j++)//���岿�ֵĴ�ӡ
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= line-1; i++)//��ӡ�����°벿��
	{
		int j = 0;
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - i) - 1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



