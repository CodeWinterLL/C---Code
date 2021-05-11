#define _CRT_SECURE_NO_WARNINGS 1

//2021-04-23_��������ϰ��_��ҵ

//��ҵһ��ʵ��һ�������������ð������

//void Bubble_Sort(int arr[], int size)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	//����ð����������
//	//size - 1 ��ʾ�����һ��������ֻʣ��1��Ԫ�أ����˿���ʡ��
//	for (i = 0; i < size - 1; i++)
//	{
//		//ÿһ�˴ӵ�һ��Ԫ�ؿ�ʼ�Ƚϣ�������Ԫ�ؽ��бȽ�
//		for (j = 1; j < size - i; j++)
//		{
//			//��ǰһ��Ԫ�ش��ں�һ��Ԫ�أ�����н���
//			if (arr[j - 1] > arr[j])
//			{
//				temp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	
//	int i = 0;
//	printf("����ǰ��\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	
//	//��������Ԫ�ظ���
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//ð������
//	Bubble_Sort(arr, size);
//
//	printf("�����\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}


/*��ҵ����
* ����һ���������飬��ɶ�����Ĳ���
* 1.ʵ�ֺ���init() ��ʼ������Ϊȫ0
* 2.ʵ��print() ��ӡ�����ÿ��Ԫ��
* 3.ʵ��reverse() �����������Ԫ�ص�����
* Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
*/

//��ʼ������
void init(int a[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		a[i] = 0;
	}
}
//��ӡ�����ÿ��Ԫ��
void print(int a[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
}
//������Ԫ������
void reverse(int a[], int size)
{
	int left = 0;
	int right = size - 1;
	int temp = 0;
	while (left < right)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;
		left++;
		right--;
	}
}

#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//��������Ԫ�ظ���
	int size = sizeof(arr) / sizeof(arr[0]);

	//��ʼ������ȫΪ0
	init(arr, size);
	//��ӡ�����ÿ��Ԫ��
	printf("��ӡ���飺\n");
	print(arr, size);
	//������Ԫ������
	reverse(arr, size);
	printf("\n�����\n");
	print(arr, size);

	return 0;
}