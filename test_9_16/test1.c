//给定两个整形变量的值，将两个值的内容交换。
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 0 ;//两数交换，应创建临时变量
	printf("a=%d b=%d\n", a, b);//输出原值
	c = a;
	a = b;
	b = c;
	printf("a=%d b=%d", a, b);//输出交换后的值
	return 0;
}


//不允许创建临时变量，交换两个数的内容。
//方法一：加减法
//局限性：取值过大可能造成溢出
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("a=%d b=%d\n", a, b);//输出原值
	a = a + b;
	b = a - b;//得出起初a的值
	a = a - b;//得出起初b的值
	printf("a=%d b=%d", a, b);//输出交换后的值
	return 0;
}
//方法二：异或法(不会产生进位，所以不会溢出）
#include <stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	printf("a=%d b=%d\n", a, b);//输出原值
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d b=%d", a, b);//输出交换后的值
	return 0;
}



//使用函数交换两个整形变量的值
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


