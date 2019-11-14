#include<stdio.h>
#include<assert.h>
//模拟实现Strcat（字符串拼接拷贝）
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