#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//void print(int n)
//{
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    int temp = 0;
//
//    // ��ӡ�ϰ���
//    for (i = 0; i < n / 2; i++)
//    {
//        for (j = 0; j < i; j++)  // ������ߵĿո���
//        {
//            printf(" ");
//        }
//        printf("*");
//        temp = n - 2 * (i + 1);
//        for (k = 0; k < temp; k++)  // �������� * �м�Ŀո���
//        {
//            printf(" ");
//        }
//        printf("*");
//        printf("\n");
//    }
//
//    if (n % 2 == 1)  // ͼ������Ϊ����������Ҫ���ӡ�м����һ�е�һ�� *
//    {
//        for (i = 0; i < n / 2; i++)
//        {
//            printf(" ");
//        }
//        printf("*\n");
//    }
//
//    // ��ӡ�°���
//    for (i = n / 2; i > 0; i--)
//    {
//        for (j = 0; j < i - 1; j++)  // ������ߵĿո���
//        {
//            printf(" ");
//        }
//        printf("*");
//        temp = n - 2 * i;
//        for (k = 0; k < temp; k++)  // �������� * �м�Ŀո���
//        {
//            printf(" ");
//        }
//        temp += 2;
//        printf("*");
//        printf("\n");
//    }
//}
//
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)// �������룺һ��������д���������scanf����д��������
//    {
//        //print(n);
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                // ���ƶԽ��ߺ�б�Խ����ϵ� *
//                if (i == j || j == n - 1 - i)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}




/*��ҵ����
����
����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
����������
һ�У�����7��������0~100��������7���ɼ����ÿո�ָ���
���������
һ�У����ȥ����߷ֺ���ͷֵ�ƽ���ɼ���С�������2λ��ÿ��������С�
*/

//#include<stdio.h>
//
//void grade_sort(int* p, int num)
//{
//    int i = 0;
//    int j = 0;
//    int temp = 0;
//    for (i = 0; i < num - 1; i++)
//    {
//        for (j = 0; j < num - 1 - i; j++)
//        {
//            if (*(p + j) > *(p + j + 1))
//            {
//                temp = *(p + j);
//                *(p + j) = *(p + j + 1);
//                *(p + j + 1) = temp;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int grade[7] = { 0 };
//    int num = sizeof(grade) / sizeof(grade[0]);
//
//    int i = 0;
//    for (i = 0; i < num; i++)
//    {
//        scanf("%d", &grade[i]);
//    }
//
//    grade_sort(grade, num);
//
//    int sum = 0;
//    double average = 0;
//    for (i = 1; i < num - 1; i++)
//    {
//        sum += grade[i];
//    }
//    average = sum / 5.0;
//    printf("%0.2lf\n", average);
//    return 0;
//}



/*
������
��һ�������������У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������

����������
��һ������һ������(0��N��50)��
�ڶ�������N���������е������������ÿո�ָ���N��������
������������Ҫ���в����һ��������

���������
���Ϊһ�У�N+1���������е�������

���룺
5
1 6 9 22 30
8
�����
1 6 8 9 22 30

*/
#include<stdio.h>

void bubble_sort(int arr[], int num)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for (i = 0; i < num - 1; i++)
    {
        for (j = 0; j < num - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int arr[51] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x = 0;
    scanf("%d", &x);
    arr[n] = x;

    bubble_sort(arr, n + 1);

    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}