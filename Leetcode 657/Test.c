//�������Ƿ��ܷ���ԭ��
//�ַ� move[i] ��ʾ��� i ���ƶ�
//��������������ж����󷵻�ԭ�� �򷵻� true ���� ���� false
#include<stdio.h>
#include<stdbool.h>

bool judgeCircle(char * move)
{
	int x = 0;//������
	int y = 0;//������
	int i = 0;

	while (move[i] != 0){
		switch (move[i]){
		//����
		case 'L':
			x--;
			break;
		//����
		case 'R':
			x++;
			break;
		//����
		case 'U':
			y++;
			break;
		//����
		case 'D':
			y--;
			break;
		}
		i++;
	}
	return (x == 0 && y == 0);
}