// ��һ
// ����1234  ���1235
int* plusOne(int* digits, int digitsSize, int* returnSize){
	for (int i = digitsSize - 1; i >= 0; i--){
		// ��λ��Ϊ9 ֱ�Ӽ�һ
		if (digits[i] != 9){
			digits[i] = digits[i] + 1;
			*returnSize = digitsSize;
			return digits;
		}
		else{
			// ��λΪ9 ���ǽ�λ
			digits[i] = (digits[i] + 1) % 10;
		}
	}

	int *ret = (int *)calloc((digitsSize + 1), (sizeof(int)));
	*returnSize = digitsSize + 1;
	ret[0] = 1;
	return ret;
}