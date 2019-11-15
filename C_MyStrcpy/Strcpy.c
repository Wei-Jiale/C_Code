#include<stdio.h>
#include<assert.h>
//Ä£ÄâÊµÏÖStrcpy£¨×Ö·û´®¸²¸Ç¿½±´£©
char* my_strcpy(char*dest, const char*src){
	char* ret = dest;
	assert(dest&&src);
	while ((*dest++ = *src++))//×¢ÒâĞ¡À¨ºÅ
	{
		;
	}
	return ret;
}
