//�����������в��Ҿ����ĳ���������ֲ��ң�
//(��д��һ�ζ��ֲ��ң�������whileѭ����Ȼ���װ�ɺ�����
#include <stdio.h>
int binary_search(int arr[], int k, int sz)
{
	//ȷ�������ҷ�Χ�������±�
	int left = 0;//���±�
	int right = sz - 1;//���±�
	while (left <= right)
	{
		//һ�ζ��ֲ���
		int mid = (left + right) / 2;//�м�Ԫ���±�
		if (arr[mid] > k)//��Ŀ�������бȽ�����ȷ����Χ
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	//�Ҳ���
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��װ����
	int ret = 0;//����ֵ
	ret = binary_search(arr,k,sz);//�������
	if (ret == -1)
	{
		printf("�Ҳ���");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	return 0;
}




