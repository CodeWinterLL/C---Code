#define _CRT_SECURE_NO_WARNINGS 1

//ð������
//#include<stdio.h>
//
//void bubble_sort(int arr[], int size)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	//����ð������������һ����һ������
//	for (i = 0; i < size - 1; i++)
//	{
//		//ʵ��һ������
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




// qsort() - ���������κ����͵����� - ԭ���������� - <stdlib.h>

//void qsort(void* base,   // ָ��Ҫ��������ĵ�һ������
//            size_t num,  // base ָ��������е�Ԫ�ظ���
//            size_t size, // ������ÿ��Ԫ�ص��ֽڴ�С
//            int (*compar)(const void*, const void*) // ����ָ��
//            // ָ��Ƚ�����Ԫ�صĺ�����ָ�루�ȽϺ�����������������������Ϊ int��
//            // qsort�����ظ����øú������Ƚ�����Ԫ��
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
////�Ƚ���������Ԫ�صĺ���
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
//	//��������������
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
//	// �Խṹ�������е�������Ա����
//	return strcmp(((struct Student*)elem1)->name, ((struct Student*)elem2)->name);
//}
//
//int main()
//{
//	struct Student stu[] = { {"�̿�",40},{"����",30},{"��ľ",20} };
//	int num = sizeof(stu) / sizeof(stu[0]);
//	// �Խṹ������е�������Ա����
//	qsort(stu, num, sizeof(stu[0]), compare_name);
//
//	return 0;
//}



