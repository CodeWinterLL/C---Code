#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>

void main(void)
{
	char string[80];
	strcpy(string, "Hello world from ");
	strcat(string, "strcpy ");
	strcat(string, "and ");
	strcat(string, "strcat!");
	printf("String = %s\n", string);
}
