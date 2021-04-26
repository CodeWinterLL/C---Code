#define _CRT_SECURE_NO_WARNINGS 1
/*
* ����Ϸ��صĺ�����ʵ��
*/


#include"game.h"

//��ʼ������
void Init_Board(char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = '#';  //��ʼ��Ϊ�ո�
		}
	}
}

/*
���̣�3x3����
���ӣ�#

 # | # | # 
---|---|---
 # | # | # 
---|---|---
 # | # | # 

 */
//��ӡ����
void Display_Board(char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < ROW; i++)
	{
		//��ӡ���������е����ݣ�   |   |   
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//��ӡ�����м�ķָ��ߣ�---|---|---
		if (i < ROW - 1)  //���Ʒָ���������n�е�����ֻ��n-1���ָ��ߣ�
		{
			for (k = 0; k < COL; k++)
			{
				printf("---");
				if (k < COL - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}