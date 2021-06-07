#define _CRT_SECURE_NO_WARNINGS 1

/*作业五：
* qsort模拟实现
模仿qsort的功能实现一个通用的冒泡排序
*/

//#include<stdio.h>
//
////比较函数，比较整型数组中的两个相邻元素大小
//int compare(const void* elem1, const void* elem2)
//{
//	return *((int*)elem1) - *((int*)elem2);
//}
//
////交换任意类型两元素的值
//void swap(const void* elem1, const void* elem2, int size)
//{
//	//一个一个字节的交换
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char temp = 0;
//		temp = *((char*)elem1);
//		*((char*)elem1) = *((char*)elem2);
//		*((char*)elem2) = temp;
//
//		(char*)elem1 = (char*)elem1 + 1;
//		(char*)elem2 = (char*)elem2 + 1;
//	}
//}
//
////用冒泡排序模拟实现的 qsort 函数：对任意类型数组实现升序排序
//void qsort_bubble_sort(void* base, int num, int size, int(*compare)(const void* elem1, const void* elem2))
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < num - 1; i++)  // 控制冒泡排序的趟数
//	{
//		for (j = 0; j < num - 1 - i; j++)  // 控制每一趟比较的次数
//		{
//			if (compare((char*)base + size * j, (char*)base + size * (j + 1)))  // 用char* 加减轻松且字节跳转为1，方便控制。
//			{
//				swap((char*)base + size * j, (char*)base + size * (j + 1), size);
//			}
//		}
//	}
//}
//
////整型数组打印函数
//void print_int_arr(int arr[], int num)
//{
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//
//	print_int_arr(arr, sizeof(arr) / sizeof(arr[0]));
//
//	//传参：数组首元素的地址，数组元素个数，数组元素字节宽度，compare 函数的地址
//	qsort_bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), compare);
//
//	print_int_arr(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}



/*作业六：
qsort使用练习
练习使用库函数，qsort排序各种类型的数据
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//定义一个结构体
struct Student
{
	char name[20];
	int age;
};

//比较结构体中的 name 成员变量函数
int compare1(const void* elem1, const void* elem2)
{
	return strcmp(((struct Student*)elem1)->name, ((struct Student*)elem2)->name);
}

//比较结构体中的 age 成员变量函数
int compare2(const void* elem1, const void* elem2)
{
	return ((struct Student*)elem1)->age - ((struct Student*)elem2)->age;
}

int main()
{
	//初始化结构体
	struct Student stu[3] = { {"茶铺",21},{"巴豆",24},{"阿一",23} };

	qsort(stu, sizeof(stu) / sizeof(stu[0]), sizeof(stu[0]), compare2);

	return 0;
}