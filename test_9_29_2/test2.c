//����һ���޷������ͣ�����˳���ӡ����ÿһλ��
//�ݹ�ʵ����1.�������� 2.ÿ�εݹ����Խ��Խ�ӽ��������������
#include <stdio.h>
void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int num = 1234;
	Print(num);
	return 0;
}