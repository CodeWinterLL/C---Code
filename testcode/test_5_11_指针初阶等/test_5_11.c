#define _CRT_SECURE_NO_WARNINGS 1

//��ҵ�ţ���һ���ַ���str�����ݵߵ��������������str�ĳ��Ȳ�����100���ַ���
#include<stdio.h>
#include<assert.h>
void reverse(char str[])
{
	assert(left);  //�ж�left�Ƿ�Ϊ��ָ��
	int len = strlen(left);  //��ȡ�ַ�������
	char* left = str;
	char* right = str + len - 1;

	int temp = 0;
	while (left < left + len - 1)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

int main()
{
	char str[100] = { 0 };
	//�����ַ���
	gets(str);
	//�����ַ���
	reverse(str);
	//����ַ���
	printf("%s\n", str);
	return 0;
}
//sizeof�����ں�����ʹ������������ĳ��ȣ���Ϊ�����β���һ��ָ�룬��ŵ���������Ԫ�صĵ�ַ��



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
//#include<stdio.h>
//int main()
//{
//	//��ƿ��
//	int empty = 0;
//	//Ǯ�����
//	int money = 20;
//	//20Ԫ���Ժ�20ƿ
//	empty = money;
//	//���˵���ˮƿ��
//	int sum = empty;
//	while (empty>1)
//	{
//		sum += empty / 2;
//		//��ƿ��=��2��ƿ������ˮƿ��+�������Ŀ�ƿ��
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
