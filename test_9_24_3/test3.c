//C��������Sn = a + aa + aaa + aaaa + aaaaa��ǰn��֮�ͣ�����a��һ�����֡�
//һλ��=a,��λ��=a*10+a����λ��=aa*10+a������һ������������һ�������֣�������ѭ���ۼӡ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int k = 0;
	scanf("%d%d", &a, &n);
	for (i = 0; i < n; i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("%d", sum);
	return 0;
}

