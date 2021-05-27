#define _CRT_SECURE_NO_WARNINGS 1

//作业六：打印杨辉三角
//#include<stdio.h>
//#define N 10
//int main()
//{
//	int arr[N][N] = { 0 };
//	int row = 0;
//	while (1)
//	{
//		printf("请输入要打印的行数：");
//		scanf("%d", &row);
//		//只能打印1~10的杨辉三角
//		if (row >= 1 && row <= 10)
//		{
//			break;
//		}
//	}
//
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	//每一行最两边的数赋值为 1
//	for (j = 0; i < row; i++)
//	{
//		arr[i][0] = arr[i][i] = 1;
//	}
//	//从第三行开始，计算每一行除开最两边的数，中间的其余数等于上两顶数之和
//	for (i = 2; i < row; i++)
//	{
//		for (j = 1; j <= i - 1; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	//打印杨辉三角
//	for (i = 0; i < row; i++)
//	{
//		for (k = 1; k < row - i; k++)
//		{
//			printf("   ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印杨辉三角，算法二：
//#include <stdio.h>
//int main()
//{
//    int s = 1, h;                    // 数值和高度
//    int i, j;                        // 循环计数
//    scanf("%d", &h);                 // 输入层数
//    printf("1\n");                   // 输出第一行的 1
//    for (i = 2; i <= h; s = 1, i++)  // 控制行数 i 从 2 到层高
//    {
//        printf("1 ");                // 第一个 1
//        for (j = 1; j <= i - 2; j++) // 控制每一行首尾两个 1 之间的数字个数
//        {
//            printf("%d ", (s = (i - j) * s / j));
//        }
//        printf("1\n");               // 最后一个 1，换行
//    }
//    return 0;
//}


/*作业7：猜凶手
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
以下为4个嫌疑犯的供词:
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说
已知3个人说了真话，1个人说的是假话。
现在请根据这些信息，写一个程序来确定到底谁是凶手。
*/
#include<stdio.h>
int main()
{

	return 0;
}