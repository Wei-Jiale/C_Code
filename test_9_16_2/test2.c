//ʮ������������ֵ(��������+ѭ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("������ʮ����\n");
	int arr[10] = { 0 };
	int i = 0;
	int max =0 ;//������ֵ,
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)//¼��ʮ����
	{
		scanf("%d", &arr[i]);
	}
	max = arr[0];//���ܶ���maxΪ0��maxӦΪ�����е�����һ�����������һ��Ԫ�����
	for (i = 1; i < sz; i++)//�����ֵ���ӵڶ�������ʼѭ����
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("���ֵ=%d\n", max);
	return 0;
}





