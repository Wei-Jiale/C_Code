//冒泡排序（相邻两个元素比较)
#include<stdio.h>
void bubble_sort(int arr[],int sz)//数组传参仅仅传首元素地址，数组降级。
{
	//总趟数
	for (int i = 0; i < sz - 1; i++)
	{
		//每一趟内部处理
		int flag = 1;//默认有序
		for (int j = 0; j<sz-i-1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				flag = 0;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
void print(int arr[],int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	print(arr,sz);
	return 0;
}






