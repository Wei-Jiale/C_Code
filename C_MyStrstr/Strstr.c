#include <stdio.h>
#include <assert.h>
//ģ��ʵ��Strstr���ж��Ӵ���
char* my_strstr(const char* str1, const char* str2){//(str1ԭ�� str2�Ӵ���
	assert(str1&&str2);

	char* cp = (char*)str1;
	char* substr = (char*)str2;
	//��ԭ������������û��ƥ�������Ӵ�
	while (*cp)
	{
		//ԭ�����Ӵ������Ƚ�
		while (*cp == *substr && *substr)
		{
			//��ȶ������
			cp++;
			substr++;
		}
		//�Ӵ�Ϊ��\0'�� ���Ӵ�
		if (*substr == '\0'){
			return str1;
		}
		//˵�������˲�ƥ��ĵط�
		else{
			//�Ӵ���ͷ����
			substr = str2;
			//ԭ������һ������
			str1++;
			cp = str1;
		}
	}
	return NULL;
}
int main(){
	char *str1 = "abcdef";
	char *str2 = "bcd";
	if (my_strstr(str1, str2) != NULL){
		printf("���Ӵ�");
	}
	else{
		printf("�����Ӵ�");
	}
	return 0;
}

