//��д��ĸת��ΪСд��ĸ
#include<stdio.h>

char * toLowerCase(char * str){

	if (NULL == str) {
		return NULL;
	}

	int i = 0;
	while (str[i] != '\0') {
		//��д��ĸ�����
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 'a' - 'A';
		}
		++i;
	}

	return str;
}