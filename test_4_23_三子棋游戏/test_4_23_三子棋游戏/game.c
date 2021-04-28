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
			board[i][j] = ' ';  //��ʼ��Ϊ�ո�
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

//�������
void Player_Move(char board[ROW][COL])
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("������壨�������������꣩��>");
		scanf("%d %d", &x, &y);

		//�ж���������Ϸ���
		if ((x > 0 && x < ROW + 1) && (y > 0 && y < COL + 1))
		{
			//�жϵ�ǰ�����Ƿ�ռ��
			if (board[x - 1][y - 1] != '*')
			{
				//��������Ϸ���δ��ռ�ã�������壨*��
				board[x - 1][y - 1] = '*';
				break;  //��������������ȷ������ѭ��
			}
			else
			{
				printf("\n�����������걻ռ�ã����������롪��\n");
			}
		}
		else
		{
			printf("\n�������������������������롪��\n");
		}
	}
}

//��������
void Computer_Move(char board[ROW][COL])
{
	printf("�������壺>\n");
	while (1)
	{
		//�������������������
		int x = rand() % ROW;  //���� x ��ΧΪ��[0,ROW-1]
		int y = rand() % COL;  //���� y ��ΧΪ��[0,COL-1]
		
		//�жϵ�ǰ�����Ƿ�ռ��
		if (board[x][y] == ' ')
		{
			//û�б�ռ�ã��������壨#��
			board[x][y] = '#';
			break;  //����ɹ�������ѭ��
		}
	}
}

//�ж���Ϸ��Ӯ
int Is_Win(char board[ROW][COL])
{

}