//����˷��ھ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	printf("�������ӡ�˷��ھ����������\n");
	scanf("%d", &n);
	//��Ϊ���������������д�ӡ��
	//��������
	for (int i = 1;i <= n;i++)
	{
		//��������
		for (int j = 1;j <= i;j++)
		{
			printf("%d*%d=%d  ", i, j, i*j);
		}
		printf("\n");//��ӡ��һ��֮���С�
	}
	return 0;
}

