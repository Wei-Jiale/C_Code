#include<stdio.h>
#include<assert.h>
//ģ��ʵ��Strcpy���ַ������ǿ�����
char* my_strcpy(char*dest, const char*src){
	char* ret = dest;
	assert(dest&&src);
	while ((*dest++ = *src++))//ע��С����
	{
		;
	}
	return ret;
}
