//将一句话的单词进行倒置
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void reverse(char*start, char*end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}

int main()
{
	char input[100];//不能使用scanf，如果遇到空格scanf一次输入接收结束
	printf("请输入一句话：\n");
	gets(input);
	//翻转整个句子
	reverse(input, input + strlen(input) - 1);
	//翻转单词
	char*start = input;
	while (*start)
	{
		char *end = start;
		while (*end != ' '&&*end)
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end)
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	printf("%s", input);
	return 0;
}