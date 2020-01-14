//在一个「平衡字符串」中，'L' 和 'R' 字符的数量是相同的。

//给出一个平衡字符串 s，请你将它分割成尽可能多的平衡字符串。

//返回可以通过分割得到的平衡字符串的最大数量。
#include<stdio.h>
int balancedStringSplit(char * s){
	int length, i, count = 0, sign = 0;
	//得到字符长度
	while (s[length] != 0) length++;

	for (i = 0; i<length; i++){
		if (s[i] == 'L') sign++;
		else sign--;
		if (sign == 0) count++;
	}

	return count;
}