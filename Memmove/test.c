#include<stdio.h>
#include<assert.h>
//ģ��ʵ��memmove(�ɽ���ڴ��ص����⣩
void *my_memmove(void*dest, const void*src, size_t count){
	void *ret = dest;
	assert(dest&&src);

	//ǰ�ص�
	if (dest <= src || (char*)dest >= ((char*)src + count)){
		while (count--){
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	//���ص�
	else{
		dest = (char*)dest + count - 1;
		src = (char*)src + count - 1;
		while (count--){
			*(char*)dest = *(char*)src;
			dest = (char*)dest - 1;
			src = (char*)src - 1;
		}
	}
	return ret;
}