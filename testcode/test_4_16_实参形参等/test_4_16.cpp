#define _CRT_SECURE_NO_WARNINGS 1

//2021-04-16_ʵ��/�βε�_��ҵ

//��ҵһ��ʵ�ֺ����ж�year�ǲ������ꡣ
//#include<stdio.h>
//int year_function(int y)
//{
//	//�ܹ�ͬʱ��4��100���� ���� �ܹ���400�����������꣬�򷵻� 1
//	if (((y % 4 == 0) && (y % 100 == 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("������һ����ݣ�");
//	scanf("%d", &year);
//
//	if (year_function(year))  //�������� 1 ��Ϊ���꣬��ӡ�����
//	{
//		printf("%d������\n", year);
//	}
//	else
//	{
//		printf("%d��������\n",year);
//	}
//	return 0;
//}

//��ҵ����ʵ��һ�������������������������ݡ�
//#include<stdio.h>
//void exchange_number(int* stra, int* strb)
//{
//	int t = 0;
//	t = *stra;
//	*stra = *strb;
//	*strb = t;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("Please enter two number:");
//	scanf("%d %d", &a, &b);
//
//	printf("������a = %d,b = %d\n", a, b);
//	exchange_number(&a, &b);
//	printf("������a = %d,b = %d\n", a, b);
//
//	return 0;
//}

//��ҵ����ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//#include<stdio.h>
//void print_form(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)  //���ƴ�ӡ������
//	{
//		for (j = 1; j <= i; j++)  //����ÿ�д�ӡ���ٸ����ʽ
//		{
//			printf("%-2d*%-2d=%-2d  ", i, j, i * j);  //��ӡ��ʽ�������
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int x = 0;
//	printf("����˷����������������");
//	scanf("%d", &x);
//
//	print_form(x);  //��ӡ�˷��ھ���
//
//	return 0;
//}