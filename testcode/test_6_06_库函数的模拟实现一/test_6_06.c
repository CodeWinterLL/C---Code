#define _CRT_SECURE_NO_WARNINGS 1

//2021-06-06_�⺯����ģ��ʵ��

//��ҵһ��ģ��ʵ��strlen
#include<stdio.h>
#include<assert.h>

size_t my_strlen(const char* str)
{
	// ���� str �Ƿ�Ϊ��
	assert(str != NULL);
	//��ȡ�ַ����ĳ���
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