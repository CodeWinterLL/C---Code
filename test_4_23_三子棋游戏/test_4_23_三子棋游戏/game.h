#pragma once
/*
* ����Ϸ��صĺ���������
* ���ŵ�����
* ���õ�ͷ�ļ�
*/

#include<stdio.h>
#include<stdlib.h>  //���� rand()
#include<time.h>


//���̳ߴ�
#define ROW 3  //��
#define COL 3  //��

//��������

//��ʼ������
void Init_Board(char board[ROW][COL]);
//��ӡ����
void Display_Board(char board[ROW][COL]);
//�������
void Player_Move(char board[ROW][COL]);
//��������
void Computer_Move(char board[ROW][COL]);