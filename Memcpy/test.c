#include<stdio.h>
#include<assert.h>
//ģ��ʵ��memcpy(�������Ϳ�����
void *my_memcpy(void *dest, const void *src,size_t count){
	void *ret = dest;
	assert(dest&&src);

	while (count--){
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}