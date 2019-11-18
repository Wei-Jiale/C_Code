#include<stdio.h>
#include<assert.h>
//模拟实现memmove(可解决内存重叠问题）
void *my_memmove(void*dest, const void*src, size_t count){
	void *ret = dest;
	assert(dest&&src);

	//前重叠
	if (dest <= src || (char*)dest >= ((char*)src + count)){
		while (count--){
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	//后重叠
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