//计算字符串长度
//方法一：递归
#include <stdio.h>
int my_strlen(char*str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	//int len = my_strlen("abc");
	printf("%d\n", my_strlen("abc"));
	return 0;
}

////方法二;非递归
#include <stdio.h>
int my_strlen(char*str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d", len);
	return 0;
}