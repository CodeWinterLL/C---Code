#define _CRT_SECURE_NO_WARNINGS 1

//��ҵ1��ģ��ʵ�ֿ⺯��strlen - ��ȡ�ַ����ĳ���
//#include<stdio.h>
////��ȡ�ַ�������
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
//	//��ȡ�ַ����ĳ��Ȳ����
//	printf("Len = %d\n", strlen_function(arr));
//	return 0;
//}


//��ҵ����ģ��ʵ�ֿ⺯��strcpy
#include<stdio.h>
//�ַ�����������
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
	printf("arr2����ǰ��\n");
	printf("%s\n", arr2);

	//��arr1������arr2��
	strcpy_function(arr2, arr1);

	printf("arr2������\n");
	printf("%s\n", arr2);


	return 0;
}