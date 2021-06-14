#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[10] = "abcd\0#####";
	char arr2[] = "ef";

	strncat(arr1, arr2, 5);


}