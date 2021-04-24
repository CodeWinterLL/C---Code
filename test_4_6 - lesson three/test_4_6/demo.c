#define _CRT_SECURE_NO_WARNINGS 1
//操作符、常见关键字、#define定义常量和宏、指针、结构体


//按位取反操作符：~
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
/*
a - 00000000000000000000000000000001（补码）
b - 11111111111111111111111111111110（补码）
b - 11111111111111111111111111111101（反码 = 补码-1）
b - 10000000000000000000000000000010（原码）(-2)
*/

//前置后置 ++ -- 操作符
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = ++a;  //前置++：先++ 后使用
//	int c = a++;  //后置++：先使用 后++
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//强制类型转换：(类型)
//#include<stdio.h>
//int main()
//{
//	//int a = (int)3.14;
//	return 0;
//}

//条件操作符：exp1 ? exp2 : exp3
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = a > b ? a : b;
//	printf("max = %d\n", max);
//	return 0;
//}

//条件操作符：exp1, exp2, exp3, …expN
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 5;
//  //从左向右依次计算的，整个表达式的结果是最后一个表达式的结果
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	printf("d = %d\n", d);
//	return 0;
//}

//下标引用、函数调用、结构成员
//#include<stdio.h>
//int main()
//{
//	//下标引用操作符
//	char arr[4] = "abc";
//	printf("%c\n", arr[1]);
//	return 0;
//}

//常见关键字：
//1.C语言提供的，不能自己创建关键字
//2.关键字不能做变量名
// 
//关键字：typedef
//#include<stdio.h>
////把 unsigned int 重命名为 u_int，现在 u_int 也是一个类型名了
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int a = 10;
//	u_int b = 20;
//	return 0;
//}

////关键字：static 修饰局部变量
//#include<stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}


//关键字：static 修饰全局变量
//#include<stdio.h>
//声明全局变量
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//#include<stdio.h>
////声明demo2.c中的函数
//extern int add(int, int);
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = add(a, b);
//	printf("a+b=%d\n", c);
//	return 0;
//}


//#define 定义常量和宏
//普通宏
//#define PI (3.1415926)
////带参数的宏
//#define MAX(a,b) ( (a) > (b) ? (a) : (b) )
////关键是十分容易产生错误，包括机器和人理解上的差异等等。
//#include<stdio.h>
//int main()
//{
//    int a = ((2) > (3) ? (2) : (3));
//    printf("%d\n", a);
//    return 0;
//    int a = 2 * MAX(2, 3);
//}

//指针
//#include<stdio.h>
//int main()
//{
//	//num在内存要被分配 4字节 的内存空间
//	int num = 10;
//	//%p - 以地址的形式打印
//	printf("%p\n", &num);
//	//变量的存储
//	int* p = &num;
//	//* - 解引用操作符，访问指针p指向的内存空间
//	*p = 30;
//	printf("%d\n", *p);
//	//指针变量的大小
//	printf("%d字节\n", sizeof(p));
//	printf("%d字节\n", sizeof(char *));
//	printf("%d字节\n", sizeof(int *));
//	printf("%d字节\n", sizeof(double *));
//
//	return 0;
//}


//结构体
#include<stdio.h>

struct Student
{
	char name[20];  //姓名
	int age;  //年龄
	double grade;  //成绩
};

int main()
{
	//定义一个结构体变量并初始化
	struct Student s1 = { "玛卡巴卡",20,85 };
	
	/*访问结构体变量中的成员*/
	
	//. 结构体成员访问操作符
	printf("name: %s age: %d grade: %lf\n", s1.name, s1.age, s1.grade);
	
	//用结构体指针访问
	struct Student* ps = &s1;
	printf("name: %s age: %d grade: %lf\n", ps->name, ps->age, ps->grade);  //->操作符
	//还可以这样，不过太麻烦，建议用 ->操作符 访问更直观
	printf("name: %s age: %d grade: %lf\n", (*ps).name, (*ps).age, (*ps).grade);
	
	return 0;
}