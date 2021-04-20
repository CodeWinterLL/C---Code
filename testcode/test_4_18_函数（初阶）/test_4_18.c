#define _CRT_SECURE_NO_WARNINGS 1

//2021-04-18_3-函数(初阶)_作业

//作业一：递归方式实现打印一个整数的每一位
/*实现逻辑：
* 把57448拆分
* 57448%10 = 8 打印8 然后57448/10 = 5744
* 5744%10 = 4 打印4 然后5744/10 = 574
* 574%10 = 4 打印4 然后574/10 = 57
* 57%10 = 7 打印7 然后57/10 = 5
* 5%10 = 5 打印5 
* 这样就可以打印出 8 4 4 7 5 实现了打印整数的每一位
* 不过这样打印出的顺序是相反的，在函数中调整一下输出函数位置就好了
*/
//#include<stdio.h>
//void print_function(int n)
//{
//	//printf("%d ", n % 10);
//	if (n > 9)  //递归的限制条件
//	{
//		print_function(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 57448;
//	printf("Please enter number:");
//	scanf("%d", &num);
//
//	print_function(num);  //打印整数的每一位
//
//	return 0;
//}





//作业二：递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
#include<stdio.h>
//int factorial_function(int num)  //算法一：非递归方式求n的阶乘
//{
//	int i = 0;
//	int t = 1;
//	for (i = 2; i <= num; i++)  //算法二：计算num的阶乘
//	{
//		t *= i;
//	}
//	return t;
//}

int factorial_function(int num)  //递归方式求n的阶乘
{
	int t = num;
	if (num > 1)  //递归的限制条件
	{
		return t * factorial_function(num - 1);
	}
	//return t;
}
int main()
{
	int n = 0;
	printf("Please enter a value of n: ");
	scanf("%d", &n);

	int ret = factorial_function(n);  //求n的阶乘
	printf("Tactorial is %d\n", ret);

	return 0;
}




//作业三：递归和非递归分别实现strlen()函数的功能
//#include<stdio.h>
//int strlen_function(char* p)  //非递归实现strlen()函数的功能
//{
//	int count = 0;  //统计字符串中字符的个数
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}

//int strlen_function(char* p)  //递归实现strlen()函数的功能
//{
//
//}
//int main()
//{
//	char arr[] = "abcd";
//
//	int length = strlen_function(arr);
//	printf("length = %d\n", length);
//
//	return 0;
//}




//作业四：字符串逆序（递归实现）
/*
编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列，不是逆序打印。
要求：不能使用C函数库中的字符串操作函数。
*/
//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}
