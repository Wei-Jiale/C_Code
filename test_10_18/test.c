#include <stdio.h>
#include <assert.h>
//ģ��ʵ��strcpy
char*  my_strcpy(char*dest, const char*src)//const����*�������ָ��ָ������ݣ����ݲ���ͨ��ָ��ı䡣
{
	//����char* ���������ã���ʽ���ʣ�
	char*ret = dest;
	assert(dest != NULL);//���� ������治�����κ�����
	assert(src != NULL);
	while (*dest++ = *src++)//*src���ܱ��޸�
	{
		//\0Ҳ�ܱ����������ἰʱ��ֹ
		;
	}
	return ret;//����Ŀ��ռ����ʼ��ַ
}
int main()
{
	//strcpy
	char arr1[20] = "###########";
	char arr2[20] = "bit";
	my_strcpy(arr1, arr2);//��ָ���ʾ�Ŀռ䲻�������
	printf("%s", arr1);
	return 0;
}



//ģ��ʵ��my_strlen
int my_strlen(const char*str)
{
	int count = 0;
	assert(str != NULL);//��ָ֤�����Ч��
	while (*str++)
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "hello";
	int ret = my_strlen(arr);
	printf("%d", ret);
	return 0;
}










