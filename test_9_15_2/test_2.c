//输出1000~2000的闰年（被4整除且不被100整除，或者被400整除）
#include <stdio.h>
int is_leap_year(int n)
{
	return (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0));
}


int main()
{
	for (int year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)
		{
			printf("%d ", year);
		}
	}
	return 0;
}


