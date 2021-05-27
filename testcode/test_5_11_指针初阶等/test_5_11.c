#define _CRT_SECURE_NO_WARNINGS 1

//作业九：将一个字符串str的内容颠倒过来，并输出。str的长度不超过100个字符。
#include<stdio.h>
#include<assert.h>
void reverse(char str[])
{
	assert(left);  //判断left是否为空指针
	int len = strlen(left);  //获取字符串长度
	char* left = str;
	char* right = str + len - 1;

	int temp = 0;
	while (left < left + len - 1)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

int main()
{
	char str[100] = { 0 };
	//输入字符串
	gets(str);
	//逆序字符串
	reverse(str);
	//输出字符串
	printf("%s\n", str);
	return 0;
}
//sizeof不能在函数内使用来计算数组的长度，因为函数形参是一个指针，存放的是数组首元素的地址，



//作业十：打印菱形
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//打印上半部分
//	for (i = 1; i <= 7; i++)
//	{
//		//打印每一行的空格
//		for (j = 1; j <= 7 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印每一行的*
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 6; i >= 1; i--)
//	{
//		//打印每一行的空格
//		for (j = 1; j <= 7 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印每一行的*
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//作业十一：喝汽水问题
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//#include<stdio.h>
//int main()
//{
//	//空瓶数
//	int empty = 0;
//	//钱包余额
//	int money = 20;
//	//20元可以喝20瓶
//	empty = money;
//	//喝了的汽水瓶数
//	int sum = empty;
//	while (empty>1)
//	{
//		sum += empty / 2;
//		//空瓶数=用2空瓶换的汽水瓶数+不够换的空瓶数
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
