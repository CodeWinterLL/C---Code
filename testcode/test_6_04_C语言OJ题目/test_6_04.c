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
//    // 打印上半行
//    for (i = 0; i < n / 2; i++)
//    {
//        for (j = 0; j < i; j++)  // 控制左边的空格数
//        {
//            printf(" ");
//        }
//        printf("*");
//        temp = n - 2 * (i + 1);
//        for (k = 0; k < temp; k++)  // 控制两个 * 中间的空格数
//        {
//            printf(" ");
//        }
//        printf("*");
//        printf("\n");
//    }
//
//    if (n % 2 == 1)  // 图案行数为奇数，则需要多打印中间的那一行的一颗 *
//    {
//        for (i = 0; i < n / 2; i++)
//        {
//            printf(" ");
//        }
//        printf("*\n");
//    }
//
//    // 打印下半行
//    for (i = n / 2; i > 0; i--)
//    {
//        for (j = 0; j < i - 1; j++)  // 控制左边的空格数
//        {
//            printf(" ");
//        }
//        printf("*");
//        temp = n - 2 * i;
//        for (k = 0; k < temp; k++)  // 控制两个 * 中间的空格数
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
//    while (scanf("%d", &n) != EOF)// 多组输入：一律用这种写法，把你的scanf函数写成这样子
//    {
//        //print(n);
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                // 控制对角线和斜对角线上的 *
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




/*作业二：
描述
公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
输入描述：
一行，输入7个整数（0~100），代表7个成绩，用空格分隔。
输出描述：
一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行。
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
描述：
有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。

输入描述：
第一行输入一个整数(0≤N≤50)。
第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
第三行输入想要进行插入的一个整数。

输出描述：
输出为一行，N+1个有序排列的整数。

输入：
5
1 6 9 22 30
8
输出：
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