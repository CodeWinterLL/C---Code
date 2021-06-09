#define _CRT_SECURE_NO_WARNINGS 1

//2021-06-06_库函数的模拟实现

//作业一：模拟实现strlen
#include<stdio.h>
#include<assert.h>

size_t my_strlen(const char* str)
{
	// 断言 str 是否为空
	assert(str != NULL);
	//获取字符串的长度
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcde";

	printf("The length of string: %d\n", my_strlen(arr));

	return 0;
}