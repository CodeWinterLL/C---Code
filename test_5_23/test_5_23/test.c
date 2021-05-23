#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a = 9;
	printf("%f\n", a);

	float* pfloat = (float*)&a;
	*pfloat = 9.0;
	printf("%d\n", a);

	float b = 9.0;
	printf("%d\n", b);

	return 0;
}