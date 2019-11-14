#include<stdio.h>
#include<assert.h>
//模拟实现strcmp（字符串比较ASCII）
//src与dst相比  大于则返回大于0的数字，等于则返回0，小于则返回小于0的数字。
int my_strcmp(const char*src, const char*dst){
	int ret = 0;
	assert(src&&dst);
	//取反是亮点，直到dst走完出循环
	while (!(ret = (unsigned char*)src-(unsigned char*)dst)&&*dst){
		src++;
		dst++;
	}
	if (ret > 0){
		ret = 1;
	}
	else if (ret < 0){
		ret = -1;
	}
	return ret;
}