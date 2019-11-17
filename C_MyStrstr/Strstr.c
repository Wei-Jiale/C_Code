#include <stdio.h>
#include <assert.h>
//模拟实现Strstr（判断子串）
char* my_strstr(const char* str1, const char* str2){//(str1原串 str2子串）
	assert(str1&&str2);

	char* cp = (char*)str1;
	char* substr = (char*)str2;
	//若原串遍历结束还没有匹配则不是子串
	while (*cp)
	{
		//原串和子串遍历比较
		while (*cp == *substr && *substr)
		{
			//相等都向后走
			cp++;
			substr++;
		}
		//子串为‘\0'则 是子串
		if (*substr == '\0'){
			return str1;
		}
		//说明出现了不匹配的地方
		else{
			//子串从头遍历
			substr = str2;
			//原串从下一个遍历
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
		printf("是子串");
	}
	else{
		printf("不是子串");
	}
	return 0;
}

