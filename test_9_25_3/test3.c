//ģ���û���¼������ֻ�ܵ�¼���Ρ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		char password[20] = { 0 };//������������
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//�ַ����Ƚ�
		{
			printf("��¼�ɹ�");
			break;
		}
		else
		{
			printf("����������������롣");
		}
	}
	if (i == 3)
	{
		printf("������������˳�����");
	}
	return 0;
}

