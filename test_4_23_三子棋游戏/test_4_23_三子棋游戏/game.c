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

//玩家下棋
void Player_Move(char board[ROW][COL])
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("玩家走棋（请输入棋子坐标）：>");
		scanf("%d %d", &x, &y);

		//判断棋子坐标合法性
		if ((x > 0 && x < ROW + 1) && (y > 0 && y < COL + 1))
		{
			//判断当前坐标是否被占用
			if (board[x - 1][y - 1] != '*')
			{
				//棋子坐标合法且未被占用，玩家下棋（*）
				board[x - 1][y - 1] = '*';
				break;  //棋子坐标输入正确，跳出循环
			}
			else
			{
				printf("\n——棋子坐标被占用，请重新输入——\n");
			}
		}
		else
		{
			printf("\n——棋子坐标有误，请重新输入——\n");
		}
	}
}

//电脑走棋
void Computer_Move(char board[ROW][COL])
{
	printf("电脑走棋：>\n");
	while (1)
	{
		//电脑随机产生棋子坐标
		int x = rand() % ROW;  //控制 x 范围为：[0,ROW-1]
		int y = rand() % COL;  //控制 y 范围为：[0,COL-1]
		
		//判断当前坐标是否被占用
		if (board[x][y] == ' ')
		{
			//没有被占用，电脑下棋（#）
			board[x][y] = '#';
			break;  //下棋成功，跳出循环
		}
	}
}

//判断游戏输赢
int Is_Win(char board[ROW][COL])
{

}