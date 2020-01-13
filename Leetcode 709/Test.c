//大写字母转换为小写字母
#include<stdio.h>

char * toLowerCase(char * str){

	if (NULL == str) {
		return NULL;
	}

	int i = 0;
	while (str[i] != '\0') {
		//大写字母的情况
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 'a' - 'A';
		}
		++i;
	}

	return str;
}