//��������Ϸ
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
	//1.�������ֵ
	int ret = 0;
	int guess = 0;//�����û��µ�����
	//ʱ���(��ǰʱ����������ʼʱ��Ĳ�ֵ��
	//srand((unsigned int)time(NULL));//����rand֮ǰ�ȵ���srand������������
	ret = rand()%100+1;//���շ���ֵ�����������������ֵ)max32767
	//printf("%d\n", ret);
	//2.��ʼ������
	while (1)//��ʼ������ѭ��
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess> ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//����rand֮ǰ�ȵ���srand������������,ֻ��Ҫ����һ�Σ�����ѭ���ⲿ��
	do//������Ϸ�ܽ��룬ѡ��do whileѭ��
	{
		menu();//����һ���˵��ɹ�ѡ��
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)//����input������Ӧ
		{
		case 1:
			game();//��װ����
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ���������ѡ��");
			break;
		}
	} while (input);
	return 0;
}