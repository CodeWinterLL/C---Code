#define _CRT_SECURE_NO_WARNINGS 1

//2021-05-23-�ַ�ָ��,ָ������,����ָ��,������,�����ϰ


/*��ҵ�ˣ�
��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
Ҫ��ʱ�临�Ӷ�С��O(N);
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
			x++;  // ������
		}
		else if (key < *(*(p + x) + y))
		{
			y--;  // ������
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
		printf("�ҵ���\n");
	}
	else
	{
		printf("û���ҵ�\n");
	}

	return 0;
}