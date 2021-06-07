#define _CRT_SECURE_NO_WARNINGS 1

/*��ҵ�壺
* qsortģ��ʵ��
ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������
*/

//#include<stdio.h>
//
////�ȽϺ������Ƚ����������е���������Ԫ�ش�С
//int compare(const void* elem1, const void* elem2)
//{
//	return *((int*)elem1) - *((int*)elem2);
//}
//
////��������������Ԫ�ص�ֵ
//void swap(const void* elem1, const void* elem2, int size)
//{
//	//һ��һ���ֽڵĽ���
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
////��ð������ģ��ʵ�ֵ� qsort ��������������������ʵ����������
//void qsort_bubble_sort(void* base, int num, int size, int(*compare)(const void* elem1, const void* elem2))
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < num - 1; i++)  // ����ð�����������
//	{
//		for (j = 0; j < num - 1 - i; j++)  // ����ÿһ�˱ȽϵĴ���
//		{
//			if (compare((char*)base + size * j, (char*)base + size * (j + 1)))  // ��char* �Ӽ��������ֽ���תΪ1��������ơ�
//			{
//				swap((char*)base + size * j, (char*)base + size * (j + 1), size);
//			}
//		}
//	}
//}
//
////���������ӡ����
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
//	//���Σ�������Ԫ�صĵ�ַ������Ԫ�ظ���������Ԫ���ֽڿ�ȣ�compare �����ĵ�ַ
//	qsort_bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), compare);
//
//	print_int_arr(arr, sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}



/*��ҵ����
qsortʹ����ϰ
��ϰʹ�ÿ⺯����qsort����������͵�����
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//����һ���ṹ��
struct Student
{
	char name[20];
	int age;
};

//�ȽϽṹ���е� name ��Ա��������
int compare1(const void* elem1, const void* elem2)
{
	return strcmp(((struct Student*)elem1)->name, ((struct Student*)elem2)->name);
}

//�ȽϽṹ���е� age ��Ա��������
int compare2(const void* elem1, const void* elem2)
{
	return ((struct Student*)elem1)->age - ((struct Student*)elem2)->age;
}

int main()
{
	//��ʼ���ṹ��
	struct Student stu[3] = { {"����",21},{"�Ͷ�",24},{"��һ",23} };

	qsort(stu, sizeof(stu) / sizeof(stu[0]), sizeof(stu[0]), compare2);

	return 0;
}