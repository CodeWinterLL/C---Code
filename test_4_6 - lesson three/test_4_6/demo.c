#define _CRT_SECURE_NO_WARNINGS 1
//�������������ؼ��֡�#define���峣���ͺꡢָ�롢�ṹ��


//��λȡ����������~
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
/*
a - 00000000000000000000000000000001�����룩
b - 11111111111111111111111111111110�����룩
b - 11111111111111111111111111111101������ = ����-1��
b - 10000000000000000000000000000010��ԭ�룩(-2)
*/

//ǰ�ú��� ++ -- ������
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = ++a;  //ǰ��++����++ ��ʹ��
//	int c = a++;  //����++����ʹ�� ��++
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//ǿ������ת����(����)
//#include<stdio.h>
//int main()
//{
//	//int a = (int)3.14;
//	return 0;
//}

//������������exp1 ? exp2 : exp3
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = a > b ? a : b;
//	printf("max = %d\n", max);
//	return 0;
//}

//������������exp1, exp2, exp3, ��expN
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 5;
//  //�����������μ���ģ��������ʽ�Ľ�������һ�����ʽ�Ľ��
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	printf("d = %d\n", d);
//	return 0;
//}

//�±����á��������á��ṹ��Ա
//#include<stdio.h>
//int main()
//{
//	//�±����ò�����
//	char arr[4] = "abc";
//	printf("%c\n", arr[1]);
//	return 0;
//}

//�����ؼ��֣�
//1.C�����ṩ�ģ������Լ������ؼ���
//2.�ؼ��ֲ�����������
// 
//�ؼ��֣�typedef
//#include<stdio.h>
////�� unsigned int ������Ϊ u_int������ u_int Ҳ��һ����������
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int a = 10;
//	u_int b = 20;
//	return 0;
//}

////�ؼ��֣�static ���ξֲ�����
//#include<stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}


//�ؼ��֣�static ����ȫ�ֱ���
//#include<stdio.h>
//����ȫ�ֱ���
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//#include<stdio.h>
////����demo2.c�еĺ���
//extern int add(int, int);
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = add(a, b);
//	printf("a+b=%d\n", c);
//	return 0;
//}


//#define ���峣���ͺ�
//��ͨ��
//#define PI (3.1415926)
////�������ĺ�
//#define MAX(a,b) ( (a) > (b) ? (a) : (b) )
////�ؼ���ʮ�����ײ������󣬰���������������ϵĲ���ȵȡ�
//#include<stdio.h>
//int main()
//{
//    int a = ((2) > (3) ? (2) : (3));
//    printf("%d\n", a);
//    return 0;
//    int a = 2 * MAX(2, 3);
//}

//ָ��
//#include<stdio.h>
//int main()
//{
//	//num���ڴ�Ҫ������ 4�ֽ� ���ڴ�ռ�
//	int num = 10;
//	//%p - �Ե�ַ����ʽ��ӡ
//	printf("%p\n", &num);
//	//�����Ĵ洢
//	int* p = &num;
//	//* - �����ò�����������ָ��pָ����ڴ�ռ�
//	*p = 30;
//	printf("%d\n", *p);
//	//ָ������Ĵ�С
//	printf("%d�ֽ�\n", sizeof(p));
//	printf("%d�ֽ�\n", sizeof(char *));
//	printf("%d�ֽ�\n", sizeof(int *));
//	printf("%d�ֽ�\n", sizeof(double *));
//
//	return 0;
//}


//�ṹ��
#include<stdio.h>

struct Student
{
	char name[20];  //����
	int age;  //����
	double grade;  //�ɼ�
};

int main()
{
	//����һ���ṹ���������ʼ��
	struct Student s1 = { "�꿨�Ϳ�",20,85 };
	
	/*���ʽṹ������еĳ�Ա*/
	
	//. �ṹ���Ա���ʲ�����
	printf("name: %s age: %d grade: %lf\n", s1.name, s1.age, s1.grade);
	
	//�ýṹ��ָ�����
	struct Student* ps = &s1;
	printf("name: %s age: %d grade: %lf\n", ps->name, ps->age, ps->grade);  //->������
	//����������������̫�鷳�������� ->������ ���ʸ�ֱ��
	printf("name: %s age: %d grade: %lf\n", (*ps).name, (*ps).age, (*ps).grade);
	
	return 0;
}