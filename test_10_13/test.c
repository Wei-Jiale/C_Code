//游戏的测试
#include "game.h"
void menu()
{
	printf("****************\n");
	printf("**** 1.play ****\n");
	printf("**** 0.exit ****\n");
	printf("****************\n");
}


void game()
{
	char mine[ROWS][COLS] = { 0 };//雷的信息
	char show[ROWS][COLS] = { 0 };//显示排查出的雷的个数
	//初始化
	InitBoard(mine, ROWS, COLS,'0');//初始化为不同内容时可多传一个参数
	InitBoard(show, ROWS, COLS,'*');
	//打印
	//Display(mine, ROW, COL);
	Display(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//Display(mine, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
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
	} while (input);
}

int main()
{
	Test();//用来测试游戏的函数
	return 0;
}