#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	char* p = arr;
	
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
}