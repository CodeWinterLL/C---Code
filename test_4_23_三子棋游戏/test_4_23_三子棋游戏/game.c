#define _CRT_SECURE_NO_WARNINGS 1
/*
* 和游戏相关的函数的实现
*/


#include"game.h"

//初始化棋盘
void Init_Board(char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = '#';  //初始化为空格
		}
	}
}

/*
棋盘：3x3棋盘
棋子：#

 # | # | # 
---|---|---
 # | # | # 
---|---|---
 # | # | # 

 */
//打印棋盘
void Display_Board(char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < ROW; i++)
	{
		//打印棋子所在行的内容：   |   |   
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//打印行与行间的分割线：---|---|---
		if (i < ROW - 1)  //控制分割线条数（n行的棋盘只有n-1条分割线）
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