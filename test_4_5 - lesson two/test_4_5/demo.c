#define _CRT_SECURE_NO_WARNINGS 1

//����������������
//�ֲ������������򣺱������ڵľֲ���Χ
//ȫ�ֱ������������������̣���ͬһ���̵������ļ���ʹ����Ҫ�� extern ����һ�±�����
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	{
//		int b = 20;  //b��������Ϊ�� {} ��
//	}
//	//printf("%d\n", b);  //������"b"��δ�����ı�ʶ��
//	
//	extern int x;
//	printf("%d\n", x);
//
//	return 0;
//}

//��������
//�������������ڣ������Ĵ���������֮���ʱ���
//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
//ȫ�ֱ������������ڣ����������������������
//#include<stdio.h>
//int main()  //һ��������������ھ��� main ��������������
//{
//	{  //���� a ������ʼ
//		int a = 10;
//		printf("%d\n", a);
//	}  //���� a ��������
//	return 0;
//}

//����
//���泣��
#include<stdio.h>
#define MAX 100
int main()
{
	//1.���泣��
	3.14;
	10;
	'a';
	"abcdef";

	//2.const���εĳ�����
	int num1 = 10;  //����
	const int num2 = 20;  //������ - ���г����ԣ����ܱ��ı�����ԣ� - �����ϻ��Ǳ��������ܵ�����ʹ��
	//num2 = 30;  //error


	int arr[10] = { 0 };
	const int n = 9;
	//int arr2[n] = { 0 };  //error: n �����Ǳ����������ǲ��е�
	arr[n] = 10;
	printf("%d\n", arr[n]);


	//3.#define����ı�ʶ������
	//MAX = 200;  //error
	int x = MAX;
	printf("%d\n", x);

	//4.ö�ٳ��� - ����һһ�оٵĳ������������ڡ���ԭɫ���Ա�
	enum Sex
	{
		//ö�ٳ�����ʼ��ֵ  0 1 2 3 ���� ���ε��� - ��ֵ���ɱ�����
		male=3,    // 0
		female=100,  // 1
		secret   // 2
	};
	enum Sex s1 = male;
	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", secret);

	return 0;
}

////�κ���ҵ
//#include<stdio.h>
//int Max(int a, int b)  //�Ƚ����������Ĵ�С
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("Please enter two numbers:\n");
//	scanf("%d %d", &x, &y);
//	printf("Max:%d", Max(x, y));
//	return 0;
//}