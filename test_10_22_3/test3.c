//判断大端机还是小端机
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
		printf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0;
}