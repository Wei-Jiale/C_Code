//����һ���������飬ʹ����ȫ��λ��ż��֮ǰ
#include <stdio.h>
void adj(int *arr, int sz)
{
	int left = 0;
	int right = sz -1;
	int temp = 0;
	while (left < right)
	{
		while (arr[left] % 2 == 1)//��ż��
		{
			left++;
		}
		while (arr[right] % 2 == 0)//������
		{
			right--;
		}
		if (left < right)
		{
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}

	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	adj(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



