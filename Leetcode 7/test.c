//给出一个 32 位的有符号整数
//你需要将这个整数中每位上的数字进行反转

int reverse(int x){
	//给定边界
	int min = pow(-2, 31);
	int max = pow(2, 31) - 1;
	long result = 0;

	while (x != 0){
		result = result * 10 + x % 10;
		x = x / 10;
	}

	//反转后溢出则返回0
	return result>max || result<min ? 0 : result;
}