#include<stdio.h>
#include<assert.h>
//ģ��ʵ��Strlen(���ַ������ȣ�
//1.������
int my_strlen(const char*str){
	int count = 0;
	assert(str);
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
//2.�ݹ飨��������ʱ������
int my_strlen(const char*str){
	assert(str);
	if (*str == '\0'){
		return 0;
	}
	else{
		return 1 + my_strlen(str+1);
	}
}
//3.ָ�����
int my_strlen(const char*str){
	char *point = str;
	assert(str);
	while (*point){
		point++;
	}
	return point - str;
}