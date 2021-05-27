#define _CRT_SECURE_NO_WARNINGS 1

//作业6：调试代码
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


//作业7：调整奇数偶数顺序
/*
调整数组使奇数全部都位于偶数前面。
题目：
输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。
*/
#include<stdio.h>
//调整数组中奇数和偶数的位置
void move(int arr[], int temp[], int size)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < size; i++)
	{
		// 找出数组中的奇数放到temp首端
		if (arr[i] % 2 == 1)
		{
			temp[j] = arr[i];
			j++;
		}
		else  // 找出数组中的偶数放到temp尾端
		{
			temp[size - 1 - k] = arr[i];
			k++;
		}
	}
}

int main()
{
	int arr[10] = { 3,2,5,1,4,6,7,9,10,8 };
	int temp[10] = { 0 };
	//求数组长度
	int size = sizeof(arr) / sizeof(arr[0]);
	//打印调整前的数组
	int i = 0;
	printf("调整前：\n");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	//调整数组中奇数和偶数的位置
	move(arr, temp, size);
	//打印调整后的数组
	printf("调整后：\n");
	for (i = 0; i < size; i++)
	{
		arr[i] = temp[i];
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}