#define _CRT_SECURE_NO_WARNINGS 1

//2021-05-23-�ַ�ָ��,ָ������,����ָ��,������,�����ϰ

#include<stdio.h>

int find_num(int(*p)[3], int row, int col, int key)
{
	int x = 0;
	int y = col;

	while (x < row && y >= 0)
	{
		if (key > p[x][y-1])
		{
			x++;  // ������
		}
		else if (key < *(*(p + x) + y - 1))
		{
			y--;  // ������
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
		printf("�ҵ���\n");
	}
	else
	{
		printf("û���ҵ�\n");
	}

	return 0;
}