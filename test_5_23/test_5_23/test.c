#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 9;
//	printf("%f\n", a);
//
//	float* pfloat = (float*)&a;
//	*pfloat = 9.0;
//	printf("%d\n", a);
//
//	float b = 9.0;
//	printf("%d\n", b);
//
//	return 0;
//}


//����ָ��
//int main()
//{
//	//char ch = 'w';
//	//char* p = &ch;
//
//	char* p = "hello bit";
//	
//	int i = 0;
//	int len = strlen(p);
//	for (i = 0; i < len; i++)  // �����ַ�����
//	{
//		printf("%c", *(p + i));
//	}
//
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//�ַ�ָ��
//#include <stdio.h>
//
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	//*str3 = 'w';  //�Ƿ���
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//ָ������

//int main()
//{
//	//�ѱ�����ַ��ֵ��ָ�����飬�����÷��Ƚ��ټ�
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int* arr[3] = { &a,&b,&c };
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	printf("%d ", *(arr[i]));
//	//}
//
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	//����ָ������
//	int* arr[3] = { a,b,c };
//	
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			/*
//			printf("%d ", *(arr[i] + j));
//			�ȼ��ڣ�
//			*/
//			printf("%d ", arr[i][j]);  // ģ�����һ����ά����
//		}
//		printf("\n");
//	}
//	return 0;
//}


////����ָ��
//
//int main()
//{
//	//int arr[10] = { 0 };
//
//	//arr;  // ����������Ԫ�ص�ַ - arr[0]�ĵ�ַ
//	//&arr; // &arr - ȡ����������ĵ�ַ
//
//	//int(*p)[10] = &arr;  // p ��һ������ָ�� - �����ŵ�������ĵ�ַ
//
//	//double* arr[5];
//	//double* (*p)[5] = &arr;
//
//
//	int arr[10] = { 0 };
//	printf("arr = 0x%p\n", arr);
//	printf("&arr = 0x%p\n", &arr);
//
//	printf("arr+1 = 0x%p\n", arr + 1);
//	printf("&arr+1 = 0x%p\n", &arr + 1);
//	
// 
//  int arr[10] = { 0 };
//	int* p1 = arr;
//	int(*p2)[10] = &arr;
//	printf("p1 = 0x%p\n", p1);
//	printf("p2 = 0x%p\n", p2);
//
//	printf("p1+1 = 0x%p\n", p1 + 1);
//	printf("p2+1 = 0x%p\n", p2 + 1);
//	
//  return 0;
//}

int main()
{
	//int arr[10] = { 0 };
	////����һ���������д����
	//int(*p)[10] = &arr;

	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *((*p) + i));
	//}

	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };

	printf("arr = 0x%p\n", arr);
	printf("arr+1 = 0x%p\n", arr + 1);



	return 0;
}
