//三子棋游戏的测试
#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("****************\n");
	printf("**** 1.play ****\n");
	printf("**** 0.exit ****\n");
	printf("****************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//创建棋盘
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board,ROW,COL);//打印棋盘
	while (1)
	{
		//玩家走棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		//电脑走棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢！\n");
	}
	else if(ret == '#')
	{
		printf("电脑赢！\n");
	}
	else
	{
		printf("平局！\n");
	}
}



void Test()
{
	//玩游戏
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} 
	while (input);
}


int main()
{
	Test();//用于测试游戏的函数
	return 0;
}
























