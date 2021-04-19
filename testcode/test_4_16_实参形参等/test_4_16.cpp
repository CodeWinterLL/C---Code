#define _CRT_SECURE_NO_WARNINGS 1

//2021-04-16_实参/形参等_作业

//作业一：实现函数判断year是不是润年。
//#include<stdio.h>
//int year_function(int y)
//{
//	//能够同时被4和100整除 或者 能够被400整除的是闰年，则返回 1
//	if (((y % 4 == 0) && (y % 100 == 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("请输入一个年份：");
//	scanf("%d", &year);
//
//	if (year_function(year))  //函数返回 1 则为闰年，打印该年份
//	{
//		printf("%d是闰年\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年\n",year);
//	}
//	return 0;
//}

//作业二：实现一个函数来交换两个整数的内容。
//#include<stdio.h>
//void exchange_number(int* stra, int* strb)
//{
//	int t = 0;
//	t = *stra;
//	*stra = *strb;
//	*strb = t;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("Please enter two number:");
//	scanf("%d %d", &a, &b);
//
//	printf("交换后：a = %d,b = %d\n", a, b);
//	exchange_number(&a, &b);
//	printf("交换后：a = %d,b = %d\n", a, b);
//
//	return 0;
//}

//作业三：实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//#include<stdio.h>
//void print_form(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)  //控制打印多少行
//	{
//		for (j = 1; j <= i; j++)  //控制每行打印多少个表达式
//		{
//			printf("%-2d*%-2d=%-2d  ", i, j, i * j);  //打印公式并左对齐
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int x = 0;
//	printf("输入乘法表的行数和列数：");
//	scanf("%d", &x);
//
//	print_form(x);  //打印乘法口诀表
//
//	return 0;
//}