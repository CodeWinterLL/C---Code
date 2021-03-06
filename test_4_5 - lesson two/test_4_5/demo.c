#define _CRT_SECURE_NO_WARNINGS 1

//作用域与生命周期
//局部变量的作用域：变量所在的局部范围
//全局变量的作用域：整个工程（在同一工程的其它文件下使用需要用 extern 声明一下变量）
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	{
//		int b = 20;  //b的作用域为此 {} 内
//	}
//	//printf("%d\n", b);  //报错："b"是未声明的标识符
//	
//	extern int x;
//	printf("%d\n", x);
//
//	return 0;
//}

//声命周期
//变量的生命周期：变量的创建和销毁之间的时间段
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：就是整个程序的生命周期
//#include<stdio.h>
//int main()  //一个程序的生命周期就是 main 函数的生命周期
//{
//	{  //变量 a 声明开始
//		int a = 10;
//		printf("%d\n", a);
//	}  //变量 a 声明结束
//	return 0;
//}

//常量
//字面常量
//#include<stdio.h>
//#define MAX 100
//int main()
//{
//	//1.字面常量
//	3.14;
//	10;
//	'a';
//	"abcdef";
//
//	//2.const修饰的常变量
//	int num1 = 10;  //变量
//	const int num2 = 20;  //常变量 - 具有常属性（不能被改变的属性） - 本质上还是变量，不能当常量使用
//	//num2 = 30;  //error
//
//
//	int arr[10] = { 0 };
//	const int n = 9;
//	//int arr2[n] = { 0 };  //error: n 本质是变量，这里是不行的
//	arr[n] = 10;
//	printf("%d\n", arr[n]);
//
//
//	//3.#define定义的标识符常量
//	//MAX = 200;  //error
//	int x = MAX;
//	printf("%d\n", x);
//
//	//4.枚举常量 - 可以一一列举的常量：比如星期、三原色、性别
//	enum Sex
//	{
//		//枚举常量初始的值  0 1 2 3 …… 依次递增 - 其值不可被更改
//		male=3,    // 0
//		female=100,  // 1
//		secret   // 2
//	};
//	enum Sex s1 = male;
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//
//	return 0;
//}

//字符串
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//定义字符串的两种方式，一定不要忘记结束标志'\0'了哦
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	char arr3[] = { 'a','b','c','\0' };
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	//求字符串的长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//
//	int length = 0;  //求数组 arr1 的长度 - 也即是获取数组的元素个数
//	length = sizeof(arr1) / sizeof(arr1[0]);
//	printf("%d", length);
//
//	return 0;
//}
 
//转义字符
//#include<stdio.h>
//int main()
//{
//	//printf("c:\test\test.c");
//	//printf("ab\nc");
//	
//	//打印一个单引号'，为了防止其与左边的单引号组成一对
//	//printf("%c\n", '\'');  
//	//printf("%s\n", "\"");
//	//printf("c:\\test\\test.c");
//
//
//	//用编码值间接的表示字符
//	printf("%c\n", '\101');  //8进制的130是十进制的65
//	//输出字符 A - ASCII码值是65
//
//	printf("%c\n", '\141');  //8进制的141是十进制的97
//	//输出字符 a - ASCII码值是97
//
//	printf("%c\n", '\x42');
//	printf("%c\n", '\x62');
//	printf("\x42");
//
//	return 0;
//}
//转义字符笔试题
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//程序输出什么呢？
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}

//选择语句
//#include<stdio.h>
//int main()
//{
//	int input
//	if (a > b)
//	{
//		printf("较大值：a\n");
//	}
//	else
//	{
//		printf("较小值：b\n");
//	}
//	return 0;
//}

//函数
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum = %d\n", sum);
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	return 0;
//}

//操作符
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}

#include<stdio.h>
int main()
{
	char arr[] = "abc";
	int len;
	len = sizeof(arr) / sizeof(arr[0]);
	printf("len = %d\n", len);
	return 0;
}