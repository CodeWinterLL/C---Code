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




// qsort()���� - ���������κ����͵����� - ԭ���������� - <stdlib.h>

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



// qsort()���� - ����ṹ������е�ĳ��Ա
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





//��ð��������߼�ȥʵ�� qsort() �����Ĺ���


//����������������Ԫ��
void swap(const void* elem1, const void* elem2, unsigned int width)
{
	int i = 0;
	char temp = 0;
	for (i = 0; i < width; i++)
	{
		//���ν���Ԫ���е�ÿһ���ֽ�
		temp = *(char*)elem1;
		*(char*)elem1 = *(char*)elem2;
		*(char*)elem2 = temp;

		(char*)elem1 = (char*)elem1 + 1;
		(char*)elem2 = (char*)elem2 + 1;
	}
}

//�Ƚ���������Ԫ�صĴ�С
int compare_int(const void* elem1, const void* elem2)
{
	return *(int*)elem1 - *(int*)elem2;
}

//ģ�� qsort() ����������������������������
int_sort(void* base, unsigned int num, unsigned int width, int (*compare)(const void* elem1, const void* elem2))
{
	int i = 0;
	int j = 0;
	//����ð�����������
	for (i = 0; i < num - 1; i++)
	{
		//����ÿһ����Ԫ�رȽϵĴ���
		for (j = 0; j < num - 1 - i; j++)
		{
			//ʲô����²Ž����أ�arr[j] > arr[j+1] ʱ
			//ʹ�� (char*)base ���ȸߣ����Կ���������Ҫ�������ֽڿ��
			if ( compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0 )  // ͨ������ָ�� compare ��������ָ��ıȽ�����Ԫ�صĺ���
			{
				//����
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}



//��ӡ��������
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
	//���� int_sort ������������������
	int_sort(arr, num, sizeof(int), compare_int);

	print_arr(arr, num);
}

int main()
{
	//���������������������
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

���ֵ
���ֵ
err
err
���ֵ
���ֵ-6
���ֵ-1

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
���ֵ
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
���ֵ ��ַ���п�������'\0'�����磺0x11002233
���ֵ
5
*/
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));		// 16
	printf("%d\n", sizeof(a + 0));  // 4/8  ���������Ԫ�ص�ַ�Ĵ�С
	printf("%d\n", sizeof(*a));		// 4    ���������Ԫ�صĴ�С������Ԫ�ص�ַ������ *a ���ҵ�����Ԫ�� 1
	printf("%d\n", sizeof(a + 1));  // 4/8  ������ǵ�ַ�Ĵ�С��a + 1 �ǵڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(a[1]));	// 4    ������ǵڶ���Ԫ�صĴ�С

	printf("%d\n", sizeof(&a));			// 4/8  &a��ʾ����ĵ�ַ
	printf("%d\n", sizeof(*&a));		// 16   �����������Ĵ�С���������ַ������ *&a���ҵ����������飬����ָ��������ܹ���һ�� int ���ַ�ָ��������ܹ���һ���ַ�
	printf("%d\n", sizeof(&a + 1));	    // 4/8  �������a[3]����һ��Ԫ�صĵ�ַ�Ĵ�С
	printf("%d\n", sizeof(&a[0]));		// 4/8
	printf("%d\n", sizeof(&a[0] + 1));	// 4/8



	//�ַ���ռ�ռ��� 1 ���ֽڣ������ĵ�ַ�����ռ 4/8 ���ֽڵ�Ŷ


	//�Ĵ��ˡ������ˣ�����ͬһ��������ˣ��������֤���볤������ͬ����






	return 0;
}


