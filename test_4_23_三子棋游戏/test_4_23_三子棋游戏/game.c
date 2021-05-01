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
char Is_Win(char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	int count = 0;  //��¼�����������ӵıȽϴ���
	
	//�ж�ÿһ�����Ƿ�����������������
	for (i = 0; i < ROW; i++)  //������
	{
		//��Ҫ���ж�ÿһ��ʱ��Ҫ����Ϊ��һ�м���Ƚϴ���������
		count = 0;
		
		//����ͬһ���µ�ÿһ�У������±� j + 1 < COL �� j < COL - 1��
		for (j = 0; j < COL - 1; j++)
		{
			//��ͬһ���������ڵ����ӽ��бȽ�
			if ((board[i][j] == board[i][j + 1]) && board[i][j] != ' ')
			{
				count++;
				//��֤���������Ƿ�������Ҫ�����ȽϱȽ� 2 ��
				if (count == 2)
				{
					//������һ���ӵķ��ţ������ * ���ʤ���� # ����ʤ��
					return board[i][j];
				}
			}
		}
	}

	//�ж�ÿһ�����Ƿ�����������������
	for (j = 0; j < COL; j++)  //������
	{
		//��Ҫ���ж�ÿһ��ʱ��Ҫ����Ϊ��һ�м���Ƚϴ���������
		count = 0;
		
		//����ͬһ���µ�ÿһ�У������±� i + 1 < ROW �� i < ROW - 1��
		for (i = 0; i < ROW - 1; i++)
		{
			if ((board[i][j] == board[i + 1][j]) && board[i][j] != ' ')
			{
				count++;
				if (count == 2)
				{
					return board[i][j];
				}
			}
		}
	}

	//�ж϶Խ������Ƿ�����������������
	//1.��'\'�Խ������������������ӽ��бȽ�
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[i][j] != ' ')
	{
		return board[0][0];
	}
	//2.��'/'�Խ������������������ӽ��бȽ�
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
	{
		return board[2][0];
	}

	//�ж��Ƿ�ƽ�֣����̱�ռ��ʱ��
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			//�����п�λ����Ϸ����
			if (board[i][j] == ' ')
			{
				return 'C';
			}
		}
	}
	//����û�п�λ����ռ���ˣ���Ϊƽ��
	return 'Q';
}