//���������
#include<stdio.h>
#include<stdbool.h>

int findLUSlength(char * a, char * b){

	if (NULL == a || NULL == b){
		return 0;
	}

	//���ַ���������� �����Ƕ��е�������в�����
	if (strlen(a) == strlen(b) && 0 == strcmp(a, b)){
		return -1;
	}

	//�����ַ������Ȳ���� ���س��ĳ���
	return strlen(a) > strlen(b) ? strlen(a) : strlen(b);
}