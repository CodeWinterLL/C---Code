#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	int s1 = 1;
	int s2 = 2;

	while (s1++ == s2)
	{
		s1++;
		s2++;
	}

	return 0;
}