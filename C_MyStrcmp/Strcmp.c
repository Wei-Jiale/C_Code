#include<stdio.h>
#include<assert.h>
//ģ��ʵ��strcmp���ַ����Ƚ�ASCII��
//src��dst���  �����򷵻ش���0�����֣������򷵻�0��С���򷵻�С��0�����֡�
int my_strcmp(const char*src, const char*dst){
	int ret = 0;
	assert(src&&dst);
	//ȡ�������㣬ֱ��dst�����ѭ��
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