#define _CRT_SECURE_NO_WARNINGS 1

//2021-04-11_2-分支和循环语句(初阶)_作业
//作业一：编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)  //产生1-100的整数
//	{
//		//找出个位数为9的数字和十位数为9的数字
//		if (((i % 10) == 9) || (i / 10 == 9))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//作业二：分数求和
//计算1/1 - 1/2 + 1/3 - 1/4 + 1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	int t = 1;  //正负号
//	for (i = 1; i <= 100; i++)  //产生100个分母依次递增的分数
//	{
//		sum = sum + t * (1.0 / i);
//		t = -1 * t;
//	}
//	printf("sum = %f\n", sum);
//	return 0;
//}

//作业三：求10 个整数中最大值
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 21,11,3,14,57,6,7,81,9,10 };  //定义10个整数
//	int max = arr[0];  //假设最大值为arr[0]
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		//依次比较，找出最大值
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//作业四：在屏幕上输出9*9乘法口诀表 -------- 第一次没有做出来
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)  //控制打印多少行
//	{
//		for (j = 1; j <= i; j++)  //控制每行打印多少个表达式
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);  //打印表达式内容
//		}
//		printf("\n");
//	}
//	return 0;
//}

/*作业五：猜数字游戏
1.自动产生一个1-100之间的随机数
2.猜数字
	a.猜对了，恭喜你，游戏结束
	b.猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
3.游戏可以一直玩，除非玩家自己选择退出游戏
*/

//void menu()
//{
//	printf("--------------------------\n");
//	printf("------   1 - play   ------\n");
//	printf("------   0 - exit   ------\n");
//	printf("--------------------------\n");
//}
//
//#include<stdio.h>
//int main()
//{
//	while (1)
//	{
//		menu();  //打印游戏菜单
//		printf("请选择：");
//		int input;
//		scanf("%d", &input);
//		
//	}
//	
//	return 0;
//}