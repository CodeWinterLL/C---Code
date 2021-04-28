#pragma once
/*
* 和游戏相关的函数的声明
* 符号的声明
* 引用的头文件
*/

#include<stdio.h>
#include<stdlib.h>  //调用 rand()
#include<time.h>  //调用 time()


//棋盘尺寸
#define ROW 3  //行
#define COL 3  //列

//函数声明

//初始化棋盘
void Init_Board(char board[ROW][COL]);
//打印棋盘
void Display_Board(char board[ROW][COL]);
//玩家走棋
void Player_Move(char board[ROW][COL]);
//电脑走棋
void Computer_Move(char board[ROW][COL]);
//判断游戏输赢
int Is_Win(char board[ROW][COL]);