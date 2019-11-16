#include<stdio.h>
#include<assert.h>
//模拟实现Strlen(求字符串长度）
//1.计数器
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
//2.递归（不创建临时变量）
int my_strlen(const char*str){
	assert(str);
	if (*str == '\0'){
		return 0;
	}
	else{
		return 1 + my_strlen(str+1);
	}
}
//3.指针相减
int my_strlen(const char*str){
	char *point = str;
	assert(str);
	while (*point){
		point++;
	}
	return point - str;
}