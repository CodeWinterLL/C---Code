#define _CRT_SECURE_NO_WARNINGS 1

//2021-06-06_�⺯����ģ��ʵ��

//��ҵһ��ģ��ʵ��strlen
//#include<stdio.h>
//#include<assert.h>
//
//size_t my_strlen(const char* str)
//{
//	// ���� str �Ƿ�Ϊ��
//	assert(str != NULL);
//	//��ȡ�ַ����ĳ���
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



//��ҵ����ģ��ʵ��strcpy
//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* dst, const char* src)
//{
//	//���ԣ�ָ��Ϊ�����������
//	assert(dst && src);
//  char* ret = dst;
//	//�����ַ�
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



//��ҵ����ģ��ʵ��strcmp
//#include<stdio.h>
//#include<assert.h>
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	//����
//	assert(str1 && str2);
//	//���ַ���ǰ����ͬ���ַ����ñȽϣ����ֲ���ͬ���ַ�ʱ����������'\0'�����ѭ��
//	while (*str1 && *str2 && *str1 == *str2)
//	{
//		str1++;
//		str2++;
//	}
//	//�Ƚ������ĵ�һ������ͬ���ַ�
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



//��ҵ�ģ�ģ��ʵ��strcat
//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcat(char* dst, const char* src)
//{
//	//����
//	assert(dst && src);
//
//	char* ret = dst;
//	//�ҵ�Ŀ���ַ����Ľ�����־
//	while (*dst != '\0')
//	{
//		dst++;
//	}
//	//׷���ַ���
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



//��ҵ�壺ģ��ʵ��strstr
#include<stdio.h>
#include<assert.h>

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);

	const char* s1 = str1;
	const char* s2 = str2;
	char* p = str1;  // ��¼ָ�� str1 ���״γ��� str2 ��λ��

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