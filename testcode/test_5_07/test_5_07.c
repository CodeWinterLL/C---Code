#define _CRT_SECURE_NO_WARNINGS 1

//作业三：求两个数二进制位中不同位的个数

//编程实现：输入两个整数，求两个整数二进制格式有多少个位不同？
//输入例子：22 33
//输出例子 : 5

//00000000 00000000 00000000 00010110 - 22
//00000000 00000000 00000000 00100001 - 33
//按位异或 ^ （相同为0 相异为1）
//此时得到的二进制的序列 a 中 1 的个数就是两个数二进制位中不同位的个数
//00000000 00000000 00000000 00110111 - 序列a

//然后再和 1 按位与 &，根据得到的结果，可以判断出最低位是1还是0（按位与结果 = 1 则最低位是 1，按位与结果 = 0 则最低位是 0）
// 00000000 00000000 00000000 00110111 - 序列a
// 00000000 00000000 00000000 00000001
// 00000000 00000000 00000000 00000001 - 按位与结果 = 1 说明最低位是 1

//然后将序列 a 不断地向右移（二进制）位，并和 1 按位与，直到判断完序列 a 的所有二进制位
//这样我们就知道了序列 a 里面多少个 1

#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	int count = 0;
	//输入两个数
	scanf("%d %d", &x, &y);
	//将两数按位异或
	int z = x ^ y;
	//将 z 不断地向右移（二进制）位，当 z 二进制序列全为 0 时，即 z = 0，停止循环
	while (z)
	{
		//将 z 与 1 按位与，得到的结果若为 1 说明 z 的最低位为 1 
		if ((z & 1) == 1)
		{
			count++;
		}
		//将 z 向右移位
		z >>= 1;
	}
	//输出两个数二进制位中不同位的个数
	printf("%d\n", count);

	return 0;
}

