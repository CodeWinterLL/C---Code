#define _CRT_SECURE_NO_WARNINGS 1

//2021-04-18_3-����(����)_��ҵ

//��ҵһ���ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
/*ʵ���߼���
* ��57448���
* 57448%10 = 8 ��ӡ8 Ȼ��57448/10 = 5744
* 5744%10 = 4 ��ӡ4 Ȼ��5744/10 = 574
* 574%10 = 4 ��ӡ4 Ȼ��574/10 = 57
* 57%10 = 7 ��ӡ7 Ȼ��57/10 = 5
* 5%10 = 5 ��ӡ5 
* �����Ϳ��Դ�ӡ�� 8 4 4 7 5 ʵ���˴�ӡ������ÿһλ
* ����������ӡ����˳�����෴�ģ��ں����е���һ���������λ�þͺ���
*/
//#include<stdio.h>
//void print_function(int n)
//{
//	//printf("%d ", n % 10);
//	if (n > 9)  //�ݹ����������
//	{
//		print_function(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 57448;
//	printf("Please enter number:");
//	scanf("%d", &num);
//
//	print_function(num);  //��ӡ������ÿһλ
//
//	return 0;
//}





//��ҵ�����ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
#include<stdio.h>
//int factorial_function(int num)  //�㷨һ���ǵݹ鷽ʽ��n�Ľ׳�
//{
//	int i = 0;
//	int t = 1;
//	for (i = 2; i <= num; i++)  //�㷨��������num�Ľ׳�
//	{
//		t *= i;
//	}
//	return t;
//}

int factorial_function(int num)  //�ݹ鷽ʽ��n�Ľ׳�
{
	int t = num;
	if (num > 1)  //�ݹ����������
	{
		return t * factorial_function(num - 1);
	}
	//return t;
}
int main()
{
	int n = 0;
	printf("Please enter a value of n: ");
	scanf("%d", &n);

	int ret = factorial_function(n);  //��n�Ľ׳�
	printf("Tactorial is %d\n", ret);

	return 0;
}




//��ҵ�����ݹ�ͷǵݹ�ֱ�ʵ��strlen()�����Ĺ���
//#include<stdio.h>
//int strlen_function(char* p)  //�ǵݹ�ʵ��strlen()�����Ĺ���
//{
//	int count = 0;  //ͳ���ַ������ַ��ĸ���
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}

//int strlen_function(char* p)  //�ݹ�ʵ��strlen()�����Ĺ���
//{
//
//}
//int main()
//{
//	char arr[] = "abcd";
//
//	int length = strlen_function(arr);
//	printf("length = %d\n", length);
//
//	return 0;
//}




//��ҵ�ģ��ַ������򣨵ݹ�ʵ�֣�
/*
��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������У����������ӡ��
Ҫ�󣺲���ʹ��C�������е��ַ�������������
*/
//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}
