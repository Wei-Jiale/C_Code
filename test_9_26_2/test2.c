//接收字符，大写输出转为小写，小写输出转为大写，数字不输出。
#include <stdio.h>
int main()
{
	char ch;
	printf("请输入字符：\n");
	ch = getchar();
	if ('a' <= ch&&ch <= 'z')
	{
		putchar(ch - 32);
	}
	if ('A' <= ch&&ch <= 'Z')
	{
		putchar(ch + 32);
	}
	else
	{

	}
	return 0;
}