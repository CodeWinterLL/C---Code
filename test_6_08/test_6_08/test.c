#define _CRT_SECURE_NO_WARNINGS 1

//内存函数

#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	//文件打开失败时，会返回 NULL
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



//字符分类函数
//字符转换函数
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
//内存拷贝函数：memcpy
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		(char*)dest = (char*)dest + 1;  // 可能会越界
		(char*)src = (char*)src + 1;
		// error: (char*)src++
		// 强制类型转换是一个状态，后置++，先使用再++
		// 当使用完(char*)这个状态之后，再去++时，src 已变成 void* 类型了，是不可以++
	}
	return ret;
}

//内存拷贝函数：memmove（可拷贝重叠的内存块）
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	
	void* ret = dest;

	if (dest < src)
	{
		//从前往后
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//从后往前
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

