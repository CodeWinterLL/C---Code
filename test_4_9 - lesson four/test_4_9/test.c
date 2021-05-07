//分支与循环

#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int j = 1;
//	while (1)  //外层循环
//	{
//		j = 1;
//		while (1)  //内层循环
//		{
//			printf("%d ", i * j);
//			j++;
//			if (j > 3)
//				break;  //跳出内层循环
//		}
//		printf("\n");
//		i++;
//		if (i > 3)
//			break;  //跳出外层循环
//	}
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		//i++;
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}


