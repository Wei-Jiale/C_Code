//实现两个数组内容的交换
//创建临时变量
//如果不允许创建临时变量，运用相减法或异或法。同两个整形变量的内容交换方法。
#include <stdio.h>
//传过来的是整型变量的地址，应该用用整形指针接收。
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
	int i = 0;//数组通过下标访问
	//交换两数组内容
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]);i++)
	{
		Swap(&arr1[i], &arr2[i]);
	}
	//打印数组1
	for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	//打印数组2
	for (i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	return 0;
}