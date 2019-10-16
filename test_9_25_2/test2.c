//演示多个字符从两端移动，向中间汇聚。
#include <stdio.h>
#include <string.h>
#include <Windows.h>
int main()
{
	char arr1[] = "welcome to bit!!!!!";//创建字符数组
	char arr2[] = "                   ";
	int left = 0;
	int right = strlen(arr1) - 1;//\0不算做字符长度
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//睡眠函数，单位ms
		system("cls");//系统命令，清空屏幕
		left++;
		right--;
	}
	return 0;
}





