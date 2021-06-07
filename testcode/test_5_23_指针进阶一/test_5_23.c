#define _CRT_SECURE_NO_WARNINGS 1

//2021-05-23-字符指针,指针数组,数组指针,数组名,编程练习


/*作业八：
有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
要求：时间复杂度小于O(N);
*/

//1 2 3
//4 5 6
//7 8 9

#include<stdio.h>

int find_num(int(*p)[3], int* px, int* py, int key)
{
	int x = 0;
	int y = *py - 1;

	while (x < *px && y >= 0)
	{
		if (key > p[x][y])
		{
			x++;  // 减掉行
		}
		else if (key < *(*(p + x) + y))
		{
			y--;  // 减掉列
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
}

int main() 
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	int key = 3;
	//scanf("%d", &key);

	int row = 3;
	int col = 3;

	int temp = find_num(arr, &row, &col, key);

	if (temp == 1)
	{
		printf("arr[%d][%d]\n", row, col);
		printf("找到了\n");
	}
	else
	{
		printf("没有找到\n");
	}

	return 0;
}