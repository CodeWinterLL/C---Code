#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 9;
//	printf("%f\n", a);
//
//	float* pfloat = (float*)&a;
//	*pfloat = 9.0;
//	printf("%d\n", a);
//
//	float b = 9.0;
//	printf("%d\n", b);
//
//	return 0;
//}


//进阶指针
//int main()
//{
//	//char ch = 'w';
//	//char* p = &ch;
//
//	char* p = "hello bit";
//	
//	int i = 0;
//	int len = strlen(p);
//	for (i = 0; i < len; i++)  // 遍历字符数组
//	{
//		printf("%c", *(p + i));
//	}
//
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//字符指针
//#include <stdio.h>
//
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	//*str3 = 'w';  //非法的
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//指针数组

//int main()
//{
//	//把变量地址赋值给指针数组，这种用法比较少见
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int* arr[3] = { &a,&b,&c };
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	printf("%d ", *(arr[i]));
//	//}
//
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	//定义指针数组
//	int* arr[3] = { a,b,c };
//	
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			/*
//			printf("%d ", *(arr[i] + j));
//			等价于：
//			*/
//			printf("%d ", arr[i][j]);  // 模拟出了一个二维数组
//		}
//		printf("\n");
//	}
//	return 0;
//}


//数组指针

int main()
{
	int arr[10] = { 0 };

	arr;  // 数组名是首元素地址 - arr[0]的地址
	&arr; // &arr - 取出的是数组的地址

	int(*p)[10] = &arr;  // p 是一个数组指针 - 里面存放的是数组的地址

	return 0;
}