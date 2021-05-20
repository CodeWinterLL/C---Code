#define _CRT_SECURE_NO_WARNINGS 1


//测试一：求正整数A和B的最小公倍数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	/*算法一：a和b的最小公倍数，最小最小也是a和b中的那个最大值
//	* 最大最大是a和b的乘积a*b
//	*/
//	//假设min是a和b的最小公倍数
//	//int min = a > b ? a : b;
//	//while (1)
//	//{
//	//	//a和b的最小公倍数是能同时被a和b整除的最小的正整数值
//	//	if (min % a == 0 && min % b == 0)
//	//	{
//	//		printf("%d\n", min);
//	//		break;
//	//	}
//	//	min++;
//	//}
//
//	/*算法二：效率更高
//	*/
//	//int i = 0;
//	//for (i = 1;; i++)
//	//{
//	//	//最小公倍数除以a一定是一个正整数（最小为1）
//	//	if ((a * i) % b == 0)
//	//	{
//	//		printf("%d\n", a * i);
//	//		break;
//	//	}
//	//}
//
//	/*算法三：辗转相除法求出最大公约数，然后a*b除以最大公约数就是最小公倍数 
//	*/
//	//辗转相除法：除数和余数反复做除法运算，直到余数=0，取当前算式的除数为最大公约数
//  //如果a除以b余数c==0，则最大公约数是b，否则a=b，b=c，继续相除，直到余数等于0
//	//int c = 0;
//	//int ret = a * b;
//	//while ((c = a % b))
//	//{
//	//	a = b;
//	//	b = c;
//	//}
//	//printf("%d\n", ret / b);
//
//	return 0;
//}






//测试二：输入一句英文，将其倒置后输出(注意标点符号不倒置)
//输入：I like english.
//输出：english like I

/*解题思路：三步翻转法
* 1.字符串整体逆序
	.hsilgne ekil I
* 2.每个单词逆序
	english. like I
*/

#include<stdio.h>
#include<string.h>

//逆序字符串
void reverse(char* left, char* right)
{
	int temp = 0;
	
	while (left < right)
	{
		temp = *left;
		*left = *right;
		*right = temp;

		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	//输入字符串
	gets(arr);

	//（1）逆序整个字符串，我们得知道字符串的起始位置和结束位置在哪里
	//I like english.
	//.hsilgne ekil I
	int len = strlen(arr);
	reverse(arr, arr + len - 1);

	//（2）对每个单词逆序，我们就要找到每一个单词，以及它们的起始和结束位置
	//.hsilgne ekil I'\0'
	//english. like I'\0'
	char* start = arr;
	char* end = start;
	
	//end指针指到整个字符串末尾时，循环结束
	while (*end)
	{
		//end指向字符串末尾，停止自增
		if (*end != '\0')
		{
			end++;
		}
		//end指针指向某一个单词末尾（空格或者'\0'）
		if (*end == ' ' || *end == '\0')
		{
			//逆序单词
			reverse(start, end - 1);
			//当end没有指向最后一个单词的末尾'\0'时，start指向下一个新单词起始位置
			if (*end != '\0')
			{
				start = end + 1;
			}
		}
	}
	

	/*算法二：
	while (*end)
	{
		end = start;
		//end指向单词末尾（空格或'\0'）时，停止循环
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		//逆序单词
		reverse(start, end - 1);
		//当end没有指向最后一个单词的末尾'\0'时，start指向下一个新单词的起始位置
		if (*end != '\0')
		{
			start = end + 1;
		}
	}
	*/

	printf("%s\n", arr);

	return 0;
}