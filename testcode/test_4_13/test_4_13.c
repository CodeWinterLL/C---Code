#define _CRT_SECURE_NO_WARNINGS 1

//2021-04-13_������_��ҵ

//��ҵһ��ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
#include<stdio.h>
int prime_number(int num)
{
	int n = 0;
	for (n = 1; n < num; n++)  //��1������-1֮�����ȥ��������
	{
		if (n % num == 0)  //�ܱ��������������������� 0
		{
			return 0;
		}
		return 1;
	}
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)  //����100-200������
	{
		if (prime_number(i))  //�������� 1 ��Ϊ��������ӡ����
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}