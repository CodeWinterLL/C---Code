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
//��ʾ����
void Display()