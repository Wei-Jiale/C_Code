//模拟实现memmove
//解决内存重叠问题的内存拷贝函数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

void* my_memcpy(void* dest, void* src, size_t n)
{
	void* ret = dest;
	char* str1 = (char*)dest;
	char* str2 = (char*)src;
	assert(dest);
	assert(src);
	while (n--)
	{
		*str1++ = *str2++;
	}
	return ret;
}

void* my_memmove(void* dest, void* src, size_t n)
{
	void* ret = dest;
	char* str1 = (char*)dest;
	char* str2 = (char*)src;
	assert(dest);
	assert(src);
	if (str1 > str2)
	{
		//反向拷贝
		while (n--)
		{
			*(str1 + n) = *(str2 + n);
		}
	}
	else
	{
		while (n--)
		{
			*str1++ = *str2++;
		}
	}
	return ret;
}

int main()
{
	int i = 0;
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 0 };
	int arr3[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memcpy(arr2, arr1, sizeof(arr1));
	my_memmove(arr3 + 5, arr3 + 4, 3 * sizeof(int));
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr3[i]);
	}
	system("pause");
	return 0;
}