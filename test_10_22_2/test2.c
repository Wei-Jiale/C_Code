//��һ�仰�ĵ��ʽ��е���
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
	char input[100];//����ʹ��scanf����������ո�scanfһ��������ս���
	printf("������һ�仰��\n");
	gets(input);
	//��ת��������
	reverse(input, input + strlen(input) - 1);
	//��ת����
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