#define _CRT_SECURE_NO_WARNINGS 1

//�ڴ溯��

#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	//�ļ���ʧ��ʱ���᷵�� NULL
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//�ַ����ຯ��
//�ַ�ת������
//#include<ctype.h>
//
//int main()
//{
//	char arr[10] = "The World";
//
//	int i = 0;
//	for (i = 0; arr[i] != '\0'; i++)
//	{
//		char c = arr[i];
//		if (isupper(c))
//		{
//			c = tolower(c);
//		}
//		putchar(c);
//	}
//
//	//printf("%s\n", arr);
//
//	return 0;
//}


#include<assert.h>
//�ڴ濽��������memcpy
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		(char*)dest = (char*)dest + 1;  // ���ܻ�Խ��
		(char*)src = (char*)src + 1;
		// error: (char*)src++
		// ǿ������ת����һ��״̬������++����ʹ����++
		// ��ʹ����(char*)���״̬֮����ȥ++ʱ��src �ѱ�� void* �����ˣ��ǲ�����++
	}
	return ret;
}

//�ڴ濽��������memmove���ɿ����ص����ڴ�飩
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	
	void* ret = dest;

	if (dest < src)
	{
		//��ǰ����
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//�Ӻ���ǰ
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };

	my_memcpy(arr2, arr1, 20);

	my_memmove(arr1 + 2, arr1, 20);
	//my_memmove(arr1, arr1 + 2, 20);

	return 0;
}

