//��Ϸ�Ĳ���
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
	char mine[ROWS][COLS] = { 0 };//�׵���Ϣ
	char show[ROWS][COLS] = { 0 };//��ʾ�Ų�����׵ĸ���
	//��ʼ��
	InitBoard(mine, ROWS, COLS,'0');//��ʼ��Ϊ��ͬ����ʱ�ɶഫһ������
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ
	//Display(mine, ROW, COL);
	Display(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//Display(mine, ROW, COL);
	//�Ų���
	FindMine(mine, show, ROW, COL);
}


void Test()
{
	//����Ϸ
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
}

int main()
{
	Test();//����������Ϸ�ĺ���
	return 0;
}