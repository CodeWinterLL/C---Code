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



