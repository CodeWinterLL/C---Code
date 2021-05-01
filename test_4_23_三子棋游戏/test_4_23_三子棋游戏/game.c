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
char Is_Win(char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	int count = 0;  //记录两两相邻棋子的比较次数
	
	//判断每一行上是否有相连的三颗棋子
	for (i = 0; i < ROW; i++)  //控制行
	{
		//重要：判断每一行时都要重新为这一行计算比较次数！！！
		count = 0;
		
		//控制同一行下的每一列（数组下标 j + 1 < COL 则 j < COL - 1）
		for (j = 0; j < COL - 1; j++)
		{
			//对同一行两两相邻的棋子进行比较
			if ((board[i][j] == board[i][j + 1]) && board[i][j] != ' ')
			{
				count++;
				//验证三颗棋子是否相连需要两两比较比较 2 次
				if (count == 2)
				{
					//返回任一棋子的符号（如果是 * 玩家胜，是 # 电脑胜）
					return board[i][j];
				}
			}
		}
	}

	//判断每一列上是否有相连的三颗棋子
	for (j = 0; j < COL; j++)  //控制列
	{
		//重要：判断每一列时都要重新为这一列计算比较次数！！！
		count = 0;
		
		//控制同一列下的每一行（数组下标 i + 1 < ROW 则 i < ROW - 1）
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

	//判断对角线上是否有相连的三颗棋子
	//1.对'\'对角线上两两相连的棋子进行比较
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[i][j] != ' ')
	{
		return board[0][0];
	}
	//2.对'/'对角线上两两相连的棋子进行比较
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
	{
		return board[2][0];
	}

	//判断是否平局（棋盘被占满时）
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			//棋盘有空位，游戏继续
			if (board[i][j] == ' ')
			{
				return 'C';
			}
		}
	}
	//棋盘没有空位，被占满了，则为平局
	return 'Q';
}