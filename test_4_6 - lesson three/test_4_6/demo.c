#define _CRT_SECURE_NO_WARNINGS 1
//操作符、常见关键字、#define定义常量和宏、指针、结构体


//按位取反操作符：~
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
/*
a - 00000000000000000000000000000001（补码）
b - 11111111111111111111111111111110（补码）
b - 11111111111111111111111111111101（反码 = 补码-1）
b - 10000000000000000000000000000010（原码）(-2)
*/

//前置后置 ++ -- 操作符
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = ++a;  //前置++：先++ 后使用
//	int c = a++;  //后置++：先使用 后++
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//强制类型转换：(类型)
//#include<stdio.h>
//int main()
//{
//	//int a = (int)3.14;
//	return 0;
//}

//条件操作符：exp1 ? exp2 : exp3
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = a > b ? a : b;
//	printf("max = %d\n", max);
//	return 0;
//}

//条件操作符：exp1, exp2, exp3, …expN
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 5;
//  //从左向右依次计算的，整个表达式的结果是最后一个表达式的结果
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	printf("d = %d\n", d);
//	return 0;
//}

//下标引用、函数调用、结构成员
//#include<stdio.h>
//int main()
//{
//	//下标引用操作符
//	char arr[4] = "abc";
//	printf("%c\n", arr[1]);
//	return 0;
//}

//常见关键字：
//1.C语言提供的，不能自己创建关键字
//2.关键字不能做变量名
// 
//关键字：typedef
//#include<stdio.h>
////把 unsigned int 重命名为 u_int，现在 u_int 也是一个类型名了
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int a = 10;
//	u_int b = 20;
//	return 0;
//}

//关键字：static
#include<stdio.h>
void test()
{
	static int a = 1;
	a++;
	printf("%d ", a);
}
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}
	return 0;
}
