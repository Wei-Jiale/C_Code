//ʵ�������������ݵĽ���
//������ʱ����
//�������������ʱ�������������������򷨡�ͬ�������α��������ݽ���������
#include <stdio.h>
//�������������ͱ����ĵ�ַ��Ӧ����������ָ����ա�
void Swap(int *pa,int *pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 6, 7, 8, 9, 10 };
	int i = 0;//����ͨ���±����
	//��������������
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]);i++)
	{
		Swap(&arr1[i], &arr2[i]);
	}
	//��ӡ����1
	for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	//��ӡ����2
	for (i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	return 0;
}