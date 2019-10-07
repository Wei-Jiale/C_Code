//猜数字游戏
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("************\n");
	printf("***1.play***\n");
	printf("***0.exit***\n");
	printf("************\n");
}
void game()
{
	//1.生成随机值
	int ret = 0;
	int guess = 0;//储存用户猜的数字
	//时间戳(当前时间与计算机起始时间的差值）
	//srand((unsigned int)time(NULL));//调用rand之前先调用srand设置随机数起点
	ret = rand()%100+1;//接收返回值（真正生成随机数的值)max32767
	//printf("%d\n", ret);
	//2.开始猜数字
	while (1)//开始猜数死循环
	{
		printf("请猜数字！");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess> ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//调用rand之前先调用srand设置随机数起点,只需要设置一次，放在循环外部。
	do//至少游戏能进入，选用do while循环
	{
		menu();//创建一个菜单可供选择
		printf("请选择");
		scanf("%d", &input);
		switch (input)//根据input做出响应
		{
		case 1:
			game();//封装函数
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，重新选择。");
			break;
		}
	} while (input);
	return 0;
}