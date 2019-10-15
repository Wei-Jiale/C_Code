//模拟用户登录，并且只能登录三次。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		char password[20] = { 0 };//存放输入的密码
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//字符串比较
		{
			printf("登录成功");
			break;
		}
		else
		{
			printf("密码错误，请重新输入。");
		}
	}
	if (i == 3)
	{
		printf("三次输入错误，退出程序！");
	}
	return 0;
}

