#define _CRT_SECURE_NO_WARNINGS 1

//作业1：模拟实现库函数strlen - 获取字符串的长度
//#include<stdio.h>
////获取字符串长度
//int strlen_function(char* str)
//{
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
//	char arr[] = "abcdef";
//	printf("String: %s\n", arr);
//	//获取字符串的长度并输出
//	printf("Len = %d\n", strlen_function(arr));
//	return 0;
//}


//作业二：模拟实现库函数strcpy
#include<stdio.h>
//字符串拷贝函数
void strcpy_function(char* str2, char* str1)
{
	while (*str2 != '\0')
	{
		*str2 = *str1;
		str2++;
		str1++;
	}
}

int main()
{
	char arr1[] = "abcd";
	char arr2[] = "efgh";
	printf("arr2拷贝前：\n");
	printf("%s\n", arr2);

	//把arr1拷贝到arr2中
	strcpy_function(arr2, arr1);

	printf("arr2拷贝后：\n");
	printf("%s\n", arr2);


	return 0;
}