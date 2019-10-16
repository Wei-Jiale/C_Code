//C语言实现数出1到100所有整数中出现过多少次数字9。
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)//取模求个位上是9的数
		{
			count++;
		}
		if (i / 10 == 9)//除法求十位上是9的数，int只取整数
		{
			count++;
		}
	}
	printf("共出现数字9的次数为：%d ", count);
	return 0;
}




