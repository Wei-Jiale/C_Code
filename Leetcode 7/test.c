//����һ�� 32 λ���з�������
//����Ҫ�����������ÿλ�ϵ����ֽ��з�ת

int reverse(int x){
	//�����߽�
	int min = pow(-2, 31);
	int max = pow(2, 31) - 1;
	long result = 0;

	while (x != 0){
		result = result * 10 + x % 10;
		x = x / 10;
	}

	//��ת������򷵻�0
	return result>max || result<min ? 0 : result;
}