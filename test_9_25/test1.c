//在有序数组中查找具体的某个数（二分查找）
//(先写出一次二分查找，再套入while循环，然后封装成函数）
#include <stdio.h>
int binary_search(int arr[], int k, int sz)
{
	//确定被查找范围的左右下标
	int left = 0;//左下标
	int right = sz - 1;//右下标
	while (left <= right)
	{
		//一次二分查找
		int mid = (left + right) / 2;//中间元素下标
		if (arr[mid] > k)//与目标数进行比较重新确定范围
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
	//找不到
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//封装函数
	int ret = 0;//接收值
	ret = binary_search(arr,k,sz);//传入参数
	if (ret == -1)
	{
		printf("找不到");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}




