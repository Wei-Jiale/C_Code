//给定一个非空整数数组，除了某个元素出现一次外，其余元素均出现两次，输出出现一次的元素
#include <stdio.h>
int signal(int * num, int sz)
{
	int ret = num[0];
	for (int i = 1; i < sz; i++)
	{
		ret = ret^num[i];
	}
	return ret;
}
int main()
{
	int arr[10] = { 2, 3, 5, 3, 2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int re = signal(arr,sz);
	printf("signal=%d", re);
	return 0;
}