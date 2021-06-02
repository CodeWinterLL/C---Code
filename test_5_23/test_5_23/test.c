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


////数组指针
//
//int main()
//{
//	//int arr[10] = { 0 };
//
//	//arr;  // 数组名是首元素地址 - arr[0]的地址
//	//&arr; // &arr - 取出的是数组的地址
//
//	//int(*p)[10] = &arr;  // p 是一个数组指针 - 里面存放的是数组的地址
//
//	//double* arr[5];
//	//double* (*p)[5] = &arr;
//
//
//	int arr[10] = { 0 };
//	printf("arr = 0x%p\n", arr);
//	printf("&arr = 0x%p\n", &arr);
//
//	printf("arr+1 = 0x%p\n", arr + 1);
//	printf("&arr+1 = 0x%p\n", &arr + 1);
//	
// 
//  int arr[10] = { 0 };
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//	printf("p1 = 0x%p\n", p1);
//	printf("p2 = 0x%p\n", p2);
//
//	printf("p1+1 = 0x%p\n", p1 + 1);
//	printf("p2+1 = 0x%p\n", p2 + 1);
//	
//  return 0;
//}

//void print1(int arr[][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	//int arr[10] = { 0 };
//	////我们一般很少这样写代码
//	//int(*p)[10] = &arr;
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *((*p) + i));
//	//}
//
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//printf("arr = 0x%p\n", arr);
//	//printf("arr+1 = 0x%p\n", arr + 1);
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//	
//	return 0;
//}



//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//ok？
//{}
//void test(int arr[][5])//ok？
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)//ok？
//{}
//void test(int* arr[5])//ok？
//{}
//void test(int(*arr)[5])//ok？
//{}
//void test(int** arr)//ok？
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}



#include <stdio.h>
void print(int* p, int num)
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		printf("%d\n", *(p + i));
	}
}
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p = arr;
	int num = sizeof(arr) / sizeof(arr[0]);
	
	print(p, num);  // 一级指针 p，传给函数
	
	return 0;
}
