//�жϴ�˻�����С�˻�
#include <stdio.h>
int check()
{
	int x = 1;
	return (char)x;
}

int main()
{
	int ret = check();
	if (ret == 1)
	{
		printf("С��");
	}
	else
	{
		printf("���");
	}
	return 0;
}