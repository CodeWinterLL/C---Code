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




// qsort()函数 - 可以排序任何类型的数据 - 原理：快速排序 - <stdlib.h>

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



// qsort()函数 - 排序结构体变量中的某成员
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





//用冒泡排序的逻辑去实现 qsort() 函数的功能


//交换两个任意类型元素
void swap(const void* elem1, const void* elem2, unsigned int width)
{
	int i = 0;
	char temp = 0;
	for (i = 0; i < width; i++)
	{
		//依次交换元素中的每一个字节
		temp = *(char*)elem1;
		*(char*)elem1 = *(char*)elem2;
		*(char*)elem2 = temp;

		(char*)elem1 = (char*)elem1 + 1;
		(char*)elem2 = (char*)elem2 + 1;
	}
}

//比较两个整型元素的大小
int compare_int(const void* elem1, const void* elem2)
{
	return *(int*)elem1 - *(int*)elem2;
}

//模拟 qsort() 函数，对任意类型数据升序排序
int_sort(void* base, unsigned int num, unsigned int width, int (*compare)(const void* elem1, const void* elem2))
{
	int i = 0;
	int j = 0;
	//控制冒泡排序的趟数
	for (i = 0; i < num - 1; i++)
	{
		//控制每一趟两元素比较的次数
		for (j = 0; j < num - 1 - i; j++)
		{
			//什么情况下才交换呢？arr[j] > arr[j+1] 时
			//使用 (char*)base 精度高，可以控制任意想要跳过的字节宽度
			if ( compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0 )  // 通过数组指针 compare 调用其所指向的比较两个元素的函数
			{
				//交换
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}



//打印整型数组
void print_arr(int arr[], int num)
{
	int i = 0;
	for (i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test_int()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int num = sizeof(arr) / sizeof(arr[0]);

	print_arr(arr, num);
	//调用 int_sort 函数对整型数组升序
	int_sort(arr, num, sizeof(int), compare_int);

	print_arr(arr, num);
}

int main()
{
	//对整型数组升序排序并输出
	test_int();
	
	return 0;
}


/*
16
16
4
4
4

4/8
4/8
4/8 ?
4/8
4/8

6
4/8
1
1
4/8
4/8
4/8

随机值
随机值
err
err
随机值
随机值-6
随机值-1

7
4/8
1
1
4/8
4/8
4/8

6
6
err
err
6
随机值
5

4/8
4/8
1
1 p[0] <--> *(p + 0)
4/8
4/8
4/8

6
5
err
err
随机值 地址中有可能遇到'\0'，比如：0x11002233
随机值
5
*/
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));		// 16
	printf("%d\n", sizeof(a + 0));  // 4/8  计算的是首元素地址的大小
	printf("%d\n", sizeof(*a));		// 4    计算的是首元素的大小，对首元素地址解引用 *a ，找到了首元素 1
	printf("%d\n", sizeof(a + 1));  // 4/8  计算的是地址的大小，a + 1 是第二个元素的地址
	printf("%d\n", sizeof(a[1]));	// 4    计算的是第二个元素的大小

	printf("%d\n", sizeof(&a));			// 4/8  &a表示数组的地址
	printf("%d\n", sizeof(*&a));		// 16   计算的是数组的大小，对数组地址解引用 *&a，找到了整个数组，整型指针解引用能够找一个 int ，字符指针解引用能够找一个字符
	printf("%d\n", sizeof(&a + 1));	    // 4/8  计算的是a[3]后面一个元素的地址的大小
	printf("%d\n", sizeof(&a[0]));		// 4/8
	printf("%d\n", sizeof(&a[0] + 1));	// 4/8



	//字符所占空间是 1 个字节，但它的地址编号是占 4/8 个字节的哦


	//四川人、河南人，不是同一个籍贯的人，但是身份证号码长度是相同的噻






	return 0;
}


