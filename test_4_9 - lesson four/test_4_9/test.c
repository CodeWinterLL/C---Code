#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void test()
{
	static int a = 1;  //静态局部变量a
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
