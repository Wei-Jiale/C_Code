#include<stdio.h>
#include<assert.h>
//ģ��ʵ��Strcat���ַ���ƴ�ӿ�����
char* my_strcat(char*dest, const char*src){
	char* ret = dest;
	assert(dest&&src);
	while (*dest){
		dest++;
	}
	while ((*dest++ = *src++)){
		;
	}
	return ret;
}