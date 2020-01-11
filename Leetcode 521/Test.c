//最长特殊序列
#include<stdio.h>
#include<stdbool.h>

int findLUSlength(char * a, char * b){

	if (NULL == a || NULL == b){
		return 0;
	}

	//两字符串内容相等 则它们独有的最长子序列不存在
	if (strlen(a) == strlen(b) && 0 == strcmp(a, b)){
		return -1;
	}

	//两个字符串长度不相等 返回长的长度
	return strlen(a) > strlen(b) ? strlen(a) : strlen(b);
}