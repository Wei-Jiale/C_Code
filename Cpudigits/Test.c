#include<stdio.h>
#include<stdlib.h>

int main(void) {

	//method 1
	void*number = 0;
	printf("%d \n", sizeof(&number));

	//method 2
	//printf("size:%d \n", __WORDSIZE);

	//method 3
#ifdef __x86_64__
	printf("64bits machine \n");
#elif __i386__
	printf("32 bits machine \n");
#endif

	return 1;
}