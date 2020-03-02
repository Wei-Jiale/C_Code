//找到有序数组中的单一元素
//异或法
#include<stdio.h>
int singleNonDuplicate(int* nums, int numsSize){
	int res = 0;

	for (int i = 0; i < numsSize; i++) {
		res = (res ^ nums[i]);
	}

	return res;
}