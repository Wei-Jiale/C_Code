//�����ַ�����д���תΪСд��Сд���תΪ��д�����ֲ������
#include <stdio.h>
int main()
{
	char ch;
	printf("�������ַ���\n");
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