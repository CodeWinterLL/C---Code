#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);

	return 0;
}