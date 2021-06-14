#define _CRT_SECURE_NO_WARNINGS 1

//2021-06-06_库函数的模拟实现

//作业一：模拟实现strlen
//#include<stdio.h>
//#include<assert.h>
//
//size_t my_strlen(const char* str)
//{
//	// 断言 str 是否为空
//	assert(str != NULL);
//	//获取字符串的长度
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	
//	printf("The length of string: %d\n", my_strlen(arr));
//
//	return 0;
//}



//作业二：模拟实现strcpy
//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* dst, const char* src)
//{
//	//断言，指针为空则结束程序
//	assert(dst && src);
//  char* ret = dst;
//	//拷贝字符
//	while (*dst++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[] = "ABC";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}



//作业三：模拟实现strcmp
//#include<stdio.h>
//#include<assert.h>
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	//断言
//	assert(str1 && str2);
//	//两字符串前面相同的字符不用比较，出现不相同的字符时或者遇到了'\0'则结束循环
//	while (*str1 && *str2 && *str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	//比较遇到的第一个不相同的字符
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char arr1[] = "abce";
//	char arr2[] = "abcdef";
//
//	int ret = my_strcmp(arr1, arr2);
//
//	if (ret > 0)
//	{
//		printf("arr1 > arr2\n");
//	}
//	else if (ret < 0)
//	{
//		printf("arr1 < arr2\n");
//	}
//	else
//	{
//		printf("arr1 = arr2\n");
//	}
//
//	return 0;
//}



//作业四：模拟实现strcat
//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcat(char* dst, const char* src)
//{
//	//断言
//	assert(dst && src);
//
//	char* ret = dst;
//	//找到目标字符串的结束标志
//	while (*dst != '\0')
//	{
//		dst++;
//	}
//	//追加字符串
//	while (*src && (*dst++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	my_strcat(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}



//作业五：模拟实现strstr
#include<stdio.h>
#include<assert.h>

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);

	const char* s1 = str1;
	const char* s2 = str2;
	char* p = str1;  // 记录指向 str1 中首次出现 str2 的位置

	while (*s1 != *s2)
	{
		s1++;
	}
	p = s1;
	while (s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return p;
}

int main()
{
	char arr1[] = "abcdegdefab";
	char arr2[] = "def";

	my_strstr(arr1, arr2);

	return 0;
}