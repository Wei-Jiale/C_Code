//�������������Լ��(ͬʱ�ܱ�������������������
//����������Լ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("������������\n");
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
	printf("���Լ��Ϊ:%d", a);
	return 0;
}
//շת����������Լ������С��������a*b/���Լ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;//���a%b
	printf("������������:\n");
	scanf("%d %d", &a, &b);
	while (c=a%b)//���Ϊ�ٳ�ѭ��
	{
		a = b;
		b = c;
	}
	printf("���Լ��Ϊ��%d", b);
	return 0;
}