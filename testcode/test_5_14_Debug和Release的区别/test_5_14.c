#define _CRT_SECURE_NO_WARNINGS 1

//��ҵ6�����Դ���
//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


//��ҵ7����������ż��˳��
/*
��������ʹ����ȫ����λ��ż��ǰ�档
��Ŀ��
����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿�֡�
*/
#include<stdio.h>

void reverse(int arr[], int temp[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 1)
		{
			temp[i] = arr[i];
		}
		else
		{
			temp[size - 1 - i] = arr[i];
		}
	}
}

int main()
{
	int arr[10] = { 3,2,5,1,4,6,7,9,10,8 };
	int temp[10] = { 0 };
	//�����鳤��
	int size = sizeof(arr) / sizeof(arr[0]);
	//����������������ż����λ��
	reverse(arr, temp, size);
	//�������
	for (int i = 0; i < size; i++)
	{
		arr[i] = temp[i];
		printf("%d ", arr[i]);
	}
	return 0;
}