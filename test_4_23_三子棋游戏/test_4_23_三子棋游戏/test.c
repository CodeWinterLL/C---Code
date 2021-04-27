#define _CRT_SECURE_NO_WARNINGS 1

/*三子棋小游戏
* 1、游戏开始前或结束后，会显示一个游戏菜单，
	 可以选择 1/0 继续游戏或者退出游戏
* 2、棋盘
*	定义奇葩
*	初始化棋盘
*	打印棋盘
* 3、玩家走棋
*	打印走棋后的棋盘
*	判断游戏输赢
* 4、电脑走棋
*	打印走棋后的棋盘
*	判断游戏输赢
* 
*/
/*将main函数内只留下需要运行的函数，不要实现的过程*/


#include"game.h"




//显示游戏开始菜单
void menu()
{
	printf("*****三子棋游戏******\n");
	printf("****** 1.paly ******\n");
	printf("****** 0.exit ******\n");
	printf("********************\n");
}
//游戏运行
void game()
{
	//定义棋盘
	char board[ROW][COL];
	//初始化棋盘
	Init_Board(board);
	//打印棋盘
	Display_Board(board);
	//开始游戏
	while (1)
	{
		//玩家走棋
		Player_Move(board);
		//打印走棋后的棋盘
		Display_Board(board);

		//电脑走棋
		Computer_Move(board);
		//打印走棋后的棋盘
		Display_Board(board);

		//判断输赢
	}

}


int main()
{
	/*用当前时间戳为随机数生成器播种，
	* 以便每次我们跑的时候数字都不一样。
	*/
	srand((unsigned)time(NULL));

	int input = 0;
	do
	{
		menu();  //显示游戏开始菜单

		printf("请选择 1 / 0 ：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n-----开始新游戏-----\n");
			game();
			break;
		case 0:
			printf("\n------退出游戏-----\n");
			
			break;
		default:
			printf("\n——输入有误，请重新输入——\n");
			break;
		}

	} while (input);

	return 0;
}