#define _CRT_SECURE_NO_WARNINGS 1

//2021-04-13_函数等_作业

//作业一：实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
#include<stdio.h>
int prime_number(int num)
{
	int n = 0;
	for (n = 1; n < num; n++)  //用1到自身-1之间的数去整除自身
	{
		if (n % num == 0)  //能被整除，则不是素数，返回 0
		{
			return 0;
		}
		return 1;
	}
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)  //产生100-200的数字
	{
		if (prime_number(i))  //函数返回 1 则为素数，打印该数
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}