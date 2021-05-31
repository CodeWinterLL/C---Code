#define _CRT_SECURE_NO_WARNINGS 1

//冒泡排序
//#include<stdio.h>
//
//void bubble_sort(int arr[], int size)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	//控制冒泡排序趟数，一趟排一个数字
//	for (i = 0; i < size - 1; i++)
//	{
//		//实现一趟排序
//		for (j = 0; j < size - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[], int size)
//{
//	int i = 0;
//	for (i = 0; i < size - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	
//	print_arr(arr, size);
//	bubble_sort(arr, size);
//	print_arr(arr, size);
//
//	return 0;
//}




// qsort() - 可以排序任何类型的数据 - 原理：快速排序 - <stdlib.h>

//void qsort(void* base,   // 指向要排序数组的第一个对象
//            size_t num,  // base 指向的数组中的元素个数
//            size_t size, // 数组中每个元素的字节大小
//            int (*compar)(const void*, const void*) // 函数指针
//            // 指向比较两个元素的函数的指针（比较函数有两个参数，返回类型为 int）
//            // qsort将会重复调用该函数来比较两个元素
//);

#include<stdio.h>
#include<stdlib.h>


//void print_sorted(int arr[], int num)
//{
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////比较两个整型元素的函数
//int compare_arr(const void* elem1, const void* elem2)
//{
//	return *(int*)elem1 - *(int*)elem2;
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	
//	print_sorted(arr, num);
//	//对整型数组排序
//	qsort(arr, num, sizeof(arr[0]), compare_arr);
//
//	print_sorted(arr, num);
//
//	return 0;
//}



//#include<string.h>
//
//struct Student
//{
//	char name[10];
//	int age;
//};
//
//int compare_name(const void* elem1, const void* elem2)
//{
//	// 对结构体数组中的姓名成员排序
//	return strcmp(((struct Student*)elem1)->name, ((struct Student*)elem2)->name);
//}
//
//int main()
//{
//	struct Student stu[] = { {"刺客",40},{"波仔",30},{"阿木",20} };
//	int num = sizeof(stu) / sizeof(stu[0]);
//	// 对结构体变量中的姓名成员排序
//	qsort(stu, num, sizeof(stu[0]), compare_name);
//
//	return 0;
//}



