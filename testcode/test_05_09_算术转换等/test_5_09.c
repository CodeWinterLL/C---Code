#define _CRT_SECURE_NO_WARNINGS 1

//作业八：写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整型一维数组。

//#include<stdio.h>
//void print(int* str, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		//使用指针的方式遍历字符数组，使用这种方式之后，指针p指向了数组以外的地址，有风险
//		//推荐使用这种方式* (str + i)，安全有逼格
//		printf("%d ", *str++);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, size);
//	
//	return 0;
//}

//作业九：求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
/*思路：
通过观察可以发现，该表达式的第i项中有i个a数字，因此：
假设第i项为temp，则第i+1项为temp*10+a
*/
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int temp = 0;
//	int Sn = 0;
//	int i = 0;
//	//产生Sn的前五项数值
//	for (i = 0; i < 5; i++)
//	{
//		temp = temp * 10 + a;
//		Sn += temp;
//		
//	}
//	printf("Sn = %d\n", Sn);
//	return 0;
//}

//作业十：打印水仙花数
/*
求出0～100000之间的所有“水仙花数”并输出。
“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。
*/
/*
思路：
假定给定一个数据data，具体检测方式如下：
1. 求取data是几位数
2. 获取data中每个位置上的数据，并对其进行次方求和
3. 对data中每个位上的数据次方求和完成后，在检测其结果是否与data相等即可，
相等：则为水仙花数
否则：不是
*/
//#include<stdio.h>
//#include<math.h>
////求num的n次方
//int function(int num, int n)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret *= num;
//	}
//	return ret;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//产生出0~100000之间的数字
//	for (i = 0; i <= 100000; i++)
//	{
//		//计算每个数字时都要将其各位数字的次方之和赋值为 0
//		int sum = 0;
//		//存放当前数字 i 的值
//		int temp = i;
//		//1. 计算 i 的位数
//		int count = 1;
//		while (temp / 10)
//		{
//			count++;
//			temp = temp / 10;
//		}
//		//2. 获取当前数字的各位数字并计算各位数字的次方之和
//		temp = i;
//		for (j = 0; j < count; j++)
//		{
//			sum += function(temp % 10, count);
//			temp = temp / 10;
//		}
//		//判断是否是水仙花数
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//第一次没写出来，自己下来重新练习这两道题：

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("请输入要计算数字几的前多少项和：");
//	scanf("%d %d", &a, &n);
//	int Sn = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		Sn += a;
//		a = a * 10 + a;
//	}
//	printf("Sn = %d", Sn);
//	return 0;
//}

//打印水仙花数
#include<stdio.h>
#include<math.h>
int main()
{
	// 1、判断该数是几位数
	// 2、求该数的各位数（个、十、白……）的次方之和
	// 3、该数本身和次方之和进行比较，判断是否是水仙花数
	int i = 0;
	for (i = 0; i <= 100000; i++)  // 产生0~100000之间的数字
	{
		int temp = i;
		int sum = 0;
		// 1、判断 i 是几位数
		int count = 1;
		while (temp = temp / 10)  // 注意这里 temp 的值被改变了，不是原本的值了
		{
			count++;  // 注意计算每一个数时都要重新计算 count 值
		}
		// 2、求 i 的各位数（个、十、百……）的次方之和
		temp = i;
		while (temp)
		{
			sum += pow(temp % 10, count);  // 注意计算每一个数时都要重新计算 sum 值
			temp = temp / 10;
		}
		// 3、该数本身和次方之和进行比较，判断是否是水仙花数
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}