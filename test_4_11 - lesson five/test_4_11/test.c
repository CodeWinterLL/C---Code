#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//
//	return 0;
//}

////计算n的阶乘
//#include<stdio.h>
//int main()
//{
//	
//	int n = 0;
//	int i = 0;
//	int s = 0;
//	printf("想要计算几的阶乘：");
//	scanf("%d", &n);
//	s = 1;
//	for (i = 1; i <= n; i++)
//	{
//		s = s * i;
//	}
//	printf("%d\n", s);
//	return 0;
//}

////计算 1!+2!+3!+……+10!
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;  //存储各阶乘的值
//	int sum = 0;  //累加的值
//	//for (n = 1; n <= 10; n++)
//	//{
//	//	ret = 1;  //每次计算阶乘之前把 ret 初始为 1
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret = ret * i;
//	//	}
//	//	sum = sum + ret;
//	//}
//
//	//3! = 2! * 3
//	//4! = 3! * 4
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//
//
//	printf("%d", sum);
//	return 0;
//}

////在一个有序数组中查找具体的某个数字n
////从前往后依次遍历的方法，效率太低
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//
//
//	return 0;
//}

////编写代码，演示多个字符从两端移动，向中间汇聚。
//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}

/*编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
提示登录成，如果三次均输入错误，则退出程序。*/
//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}

/*写一个猜数字游戏
1.自动产生一个1 - 100之间的随机数
2.猜数字
	a.猜对了，就恭喜你，游戏结束
	b.你猜错了，会告诉猜大了，还是猜小了，继续猜，知道猜对
3.游戏可以一直玩，除非退出游戏
*/

