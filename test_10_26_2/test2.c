//��ȡһ�������������������е�ż��λ������λ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Print(int n)
{
	//ż��λ
	for (int i = 31; i > 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
    }
	printf("\n");
	//����λ
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int n;
	printf("������һ������");
	scanf("%d", &n);
	Print(n);
	return 0;
}