#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	
	printf("Input password:");
	scanf("%s", password);
	
	//��������
	//getchar();  //���� '\n'
	int temp = 0;
	while ((temp = getchar()) != '\n')
	{
		;
	}

	printf("Comfirm password(Y/N):");
	int ch = 0;
	ch = getchar();
	
	if (ch == 'Y')
	{
		printf("success!\n");
	}
	else
	{
		printf("defeat!\n");
	}
	return 0;
}