// 加一
// 输入1234  输出1235
int* plusOne(int* digits, int digitsSize, int* returnSize){
	for (int i = digitsSize - 1; i >= 0; i--){
		// 个位不为9 直接加一
		if (digits[i] != 9){
			digits[i] = digits[i] + 1;
			*returnSize = digitsSize;
			return digits;
		}
		else{
			// 个位为9 考虑进位
			digits[i] = (digits[i] + 1) % 10;
		}
	}

	int *ret = (int *)calloc((digitsSize + 1), (sizeof(int)));
	*returnSize = digitsSize + 1;
	ret[0] = 1;
	return ret;
}