//�����������α�����ֵ��������ֵ�����ݽ�����
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 0 ;//����������Ӧ������ʱ����
	printf("a=%d b=%d\n", a, b);//���ԭֵ
	c = a;
	a = b;
	b = c;
	printf("a=%d b=%d", a, b);//����������ֵ
	return 0;
}


//����������ʱ���������������������ݡ�
//����һ���Ӽ���
//�����ԣ�ȡֵ�������������
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("a=%d b=%d\n", a, b);//���ԭֵ
	a = a + b;
	b = a - b;//�ó����a��ֵ
	a = a - b;//�ó����b��ֵ
	printf("a=%d b=%d", a, b);//����������ֵ
	return 0;
}
//�����������(���������λ�����Բ��������
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("a=%d b=%d\n", a, b);//���ԭֵ
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d", a, b);//����������ֵ
	return 0;
}



//ʹ�ú��������������α�����ֵ
#include <stdio.h>
void Swap(int*pa, int*pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 3;
	int b = 5;
	Swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}


