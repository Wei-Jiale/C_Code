//½ø¶ÈÌõ
#include <stdio.h>
#include <Windows.h>
#include <string.h>
int main()
{
	char bar[101] = { '\0' };
	const char *total = "/|-\\";
	for (int i = 0; i <= 100; i++)
	{
		printf("[%-100s][%d%%][%c]\r", bar,i,total[i%4]);
		bar[i] = '#';
		fflush(stdout);
		Sleep(100);
	}
	printf("\n");
	return 0;
}