#define _CRT_SECURE_NO_WARNINGS 1
//函数（2）


//递归
//练习1：接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4.
#include<stdio.h>
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);  //接受一个无符号整型并按照顺序打印它的每一位
	return 0;
}

//练习2：用函数实现 strlen() 函数的功能：求字符串的长度

//练习2升级：编写函数不允许创建临时变量，求字符串的长度

//练习3：求n的阶乘（不考虑溢出）

//练习4：求第n个斐波拉契数（不考虑溢出）

//练习4：求第n个斐波拉契数（不考虑溢出） - 用非递归函数写

