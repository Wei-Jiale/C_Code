//C����ʵ������1��100���������г��ֹ����ٴ�����9��
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)//ȡģ���λ����9����
		{
			count++;
		}
		if (i / 10 == 9)//������ʮλ����9������intֻȡ����
		{
			count++;
		}
	}
	printf("����������9�Ĵ���Ϊ��%d ", count);
	return 0;
}




