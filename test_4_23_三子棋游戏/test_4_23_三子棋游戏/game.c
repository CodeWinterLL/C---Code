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
			board[i][j] = ' ';  //初始化为空格
		}
	}
}
//显示棋盘
void Display()