#define _CRT_SECURE_NO_WARNINGS 1

/*������С��Ϸ
* 1����Ϸ��ʼǰ������󣬻���ʾһ����Ϸ�˵���
	 ����ѡ�� 1/0 ������Ϸ�����˳���Ϸ
* 2��
* 
* 
*/
/*��main������ֻ������Ҫ���еĺ�������Ҫʵ�ֵĹ���*/


#include"game.h"




//��ʾ��Ϸ��ʼ�˵�
void menu()
{
	printf("********************\n");
	printf("****** 1.paly ******\n");
	printf("****** 0.exit ******\n");
	printf("********************\n");
}
//��Ϸ����
void game()
{
	//��������
	char board[ROW][COL];
	//��ʼ������
	Init_Board(board);
	//��ʾ����
}


int main()
{
	int input = 0;
	do
	{
		menu();  //��ʾ��Ϸ��ʼ�˵�

		printf("��ѡ�� 1 / 0 ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n-----��ʼ����Ϸ-----\n");
			game();
			break;
		case 0:
			printf("\n------�˳���Ϸ-----\n");
			break;
		default:
			printf("\n���������������������롪��\n");
			break;
		}

	} while (input);

	return 0;
}