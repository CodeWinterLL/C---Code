#define _CRT_SECURE_NO_WARNINGS 1

//��ҵ�ˣ�дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣

//#include<stdio.h>
//void print(int* str, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		//ʹ��ָ��ķ�ʽ�����ַ����飬ʹ�����ַ�ʽ֮��ָ��pָ������������ĵ�ַ���з���
//		//�Ƽ�ʹ�����ַ�ʽ* (str + i)����ȫ�бƸ�
//		printf("%d ", *str++);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, size);
//	
//	return 0;
//}

//��ҵ�ţ���Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
/*˼·��
ͨ���۲���Է��֣��ñ��ʽ�ĵ�i������i��a���֣���ˣ�
�����i��Ϊtemp�����i+1��Ϊtemp*10+a
*/
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int temp = 0;
//	int Sn = 0;
//	int i = 0;
//	//����Sn��ǰ������ֵ
//	for (i = 0; i < 5; i++)
//	{
//		temp = temp * 10 + a;
//		Sn += temp;
//		
//	}
//	printf("Sn = %d\n", Sn);
//	return 0;
//}

//��ҵʮ����ӡˮ�ɻ���
/*
���0��100000֮������С�ˮ�ɻ������������
��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
��:153��1^3��5^3��3^3����153��һ����ˮ�ɻ�������
*/
/*
˼·��
�ٶ�����һ������data�������ⷽʽ���£�
1. ��ȡdata�Ǽ�λ��
2. ��ȡdata��ÿ��λ���ϵ����ݣ���������дη����
3. ��data��ÿ��λ�ϵ����ݴη������ɺ��ڼ�������Ƿ���data��ȼ��ɣ�
��ȣ���Ϊˮ�ɻ���
���򣺲���
*/
//#include<stdio.h>
//#include<math.h>
////��num��n�η�
//int function(int num, int n)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret *= num;
//	}
//	return ret;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//������0~100000֮�������
//	for (i = 0; i <= 100000; i++)
//	{
//		//����ÿ������ʱ��Ҫ�����λ���ֵĴη�֮�͸�ֵΪ 0
//		int sum = 0;
//		//��ŵ�ǰ���� i ��ֵ
//		int temp = i;
//		//1. ���� i ��λ��
//		int count = 1;
//		while (temp / 10)
//		{
//			count++;
//			temp = temp / 10;
//		}
//		//2. ��ȡ��ǰ���ֵĸ�λ���ֲ������λ���ֵĴη�֮��
//		temp = i;
//		for (j = 0; j < count; j++)
//		{
//			sum += function(temp % 10, count);
//			temp = temp / 10;
//		}
//		//�ж��Ƿ���ˮ�ɻ���
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//��һ��ûд�������Լ�����������ϰ�������⣺

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("������Ҫ�������ּ���ǰ������ͣ�");
//	scanf("%d %d", &a, &n);
//	int Sn = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		Sn += a;
//		a = a * 10 + a;
//	}
//	printf("Sn = %d", Sn);
//	return 0;
//}

//��ӡˮ�ɻ���
#include<stdio.h>
#include<math.h>
int main()
{
	// 1���жϸ����Ǽ�λ��
	// 2��������ĸ�λ��������ʮ���ס������Ĵη�֮��
	// 3����������ʹη�֮�ͽ��бȽϣ��ж��Ƿ���ˮ�ɻ���
	int i = 0;
	for (i = 0; i <= 100000; i++)  // ����0~100000֮�������
	{
		int temp = i;
		int sum = 0;
		// 1���ж� i �Ǽ�λ��
		int count = 1;
		while (temp = temp / 10)  // ע������ temp ��ֵ���ı��ˣ�����ԭ����ֵ��
		{
			count++;  // ע�����ÿһ����ʱ��Ҫ���¼��� count ֵ
		}
		// 2���� i �ĸ�λ��������ʮ���١������Ĵη�֮��
		temp = i;
		while (temp)
		{
			sum += pow(temp % 10, count);  // ע�����ÿһ����ʱ��Ҫ���¼��� sum ֵ
			temp = temp / 10;
		}
		// 3����������ʹη�֮�ͽ��бȽϣ��ж��Ƿ���ˮ�ɻ���
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}