#define _CRT_SECURE_NO_WARNINGS 1

//��ҵ�ţ���һ���ַ���str�����ݵߵ��������������str�ĳ��Ȳ�����100���ַ���
//#include<stdio.h>
//
//void reverse(char* left, char* right)
//{
//	int temp = 0;
//	while (left < right)
//	{
//		temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str[100] = { 0 };
//	//�����ַ���
//	gets(str);
//	//�����ַ���
//	int len = strlen(str);
//	reverse(str, str + len - 1);
//	//����ַ���
//	printf("%s\n", str);
//	return 0;
//}


//��ҵʮ����ӡ����
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//��ӡ�ϰ벿��
//	for (i = 1; i <= 7; i++)
//	{
//		//��ӡÿһ�еĿո�
//		for (j = 1; j <= 7 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡÿһ�е�*
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 6; i >= 1; i--)
//	{
//		//��ӡÿһ�еĿո�
//		for (j = 1; j <= 7 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡÿһ�е�*
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//��ҵʮһ������ˮ����
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ
#include<stdio.h>
int main()
{
	//��ˮ�۸�1ƿ1Ԫ��
	int price = 1;
	//��ˮƿ��
	int n = 0;
	//Ǯ�����
	int money = 20;
	//20Ԫ���Ժ�20ƿ
	n = money / price;
	//�ȵ���ˮƿ��
	int sum = n;
	while (n>1)
	{
		sum += n / 2;
		//��ƿ��=��2��ƿ������ˮƿ��+�������Ŀ�ƿ��
		n = n / 2 + n % 2;
	}
	printf("%d\n", sum);
	return 0;
}
