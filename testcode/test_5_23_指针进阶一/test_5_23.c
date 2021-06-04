#define _CRT_SECURE_NO_WARNINGS 1

//2021-05-23-字符指针,指针数组,数组指针,数组名,编程练习

#include<stdio.h>

int find_num(int(*p)[3], int row, int col, int key)
{
	int x = 0;
	int y = col;

	while (x < row && y >= 0)
	{
		if (key > p[x][y-1])
		{
			x++;  // 减掉行
		}
		else if (key < *(*(p + x) + y - 1))
		{
			y--;  // 减掉列
		}
		else
		{
			return 1;
		}
	}

}

int main() 
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	int key = 10;
	//scanf("%d", &key);

	int temp = find_num(arr, 3, 3, key);

	if (temp == 1)
	{
		printf("找到了\n");
	}
	else
	{
		printf("没有找到\n");
	}

	return 0;
}