#include <stdio.h>
#include <assert.h>
//模拟实现strcpy
char*  my_strcpy(char*dest, const char*src)//const放在*左边修饰指针指向的内容，内容不能通过指针改变。
{
	//返回char* 可以再利用（链式访问）
	char*ret = dest;
	assert(dest != NULL);//断言 结果是真不发生任何问题
	assert(src != NULL);
	while (*dest++ = *src++)//*src不能被修改
	{
		//\0也能被拷贝，并会及时终止
		;
	}
	return ret;//返回目标空间的起始地址
}
int main()
{
	//strcpy
	char arr1[20] = "###########";
	char arr2[20] = "bit";
	my_strcpy(arr1, arr2);//空指针表示的空间不允许访问
	printf("%s", arr1);
	return 0;
}



//模拟实现my_strlen
int my_strlen(const char*str)
{
	int count = 0;
	assert(str != NULL);//保证指针的有效性
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










