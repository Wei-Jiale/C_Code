//C语言实现求“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 1000000; i++)
	{
		//判断i是否为水仙花数
		//1.先确定i是n位数
		int n = 0;//设置位数
		int tmp = i;//不能再循环内部改变循环变量
		int sum = 0;
		while (tmp)
		{
			n++;
			tmp /= 10;
		}
		//2.计算i的每一位的n次方之和
		tmp = i;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, n);//pow返回值为double
			tmp /= 10;//去掉一位
		}
		//3.比较和判断
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}



