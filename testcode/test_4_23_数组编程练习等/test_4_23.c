#define _CRT_SECURE_NO_WARNINGS 1

//2021-04-23_数组编程练习等_作业

//作业一：实现一个对整形数组的冒泡排序。

//void Bubble_Sort(int arr[], int size)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	//控制冒泡排序趟数
//	//size - 1 表示，最后一趟区间中只剩下1个元素，该趟可以省略
//	for (i = 0; i < size - 1; i++)
//	{
//		//每一趟从第一个元素开始比较，相邻两元素进行比较
//		for (j = 1; j < size - i; j++)
//		{
//			//若前一个元素大于后一个元素，则进行交换
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
//	printf("排序前：\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	
//	//计算数组元素个数
//	int size = sizeof(arr) / sizeof(arr[0]);
//	//冒泡排序
//	Bubble_Sort(arr, size);
//
//	printf("排序后：\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}


/*作业二：
* 创建一个整形数组，完成对数组的操作
* 1.实现函数init() 初始化数组为全0
* 2.实现print() 打印数组的每个元素
* 3.实现reverse() 函数完成数组元素的逆置
* 要求：自己设计以上函数的参数，返回值。
*/

//初始化数组
void init(int a[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		a[i] = 0;
	}
}
//打印数组的每个元素
void print(int a[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
}
//对数组元素逆置
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

	//计算数组元素个数
	int size = sizeof(arr) / sizeof(arr[0]);

	//初始化数组全为0
	init(arr, size);
	//打印数组的每个元素
	printf("打印数组：\n");
	print(arr, size);
	//对数组元素逆置
	reverse(arr, size);
	printf("\n逆序后：\n");
	print(arr, size);

	return 0;
}