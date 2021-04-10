#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//每种类型的大小是多少？
//	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间大小
//	printf("%d字节\n", sizeof(int));
//	printf("%d字节\n", sizeof(short));
//	printf("%d字节\n", sizeof(long));
//	printf("%d字节\n", sizeof(long long));
//	printf("%d字节\n", sizeof(char));
//	printf("%d字节\n", sizeof(float));
//	printf("%d字节\n", sizeof(double));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//推荐定义变量时给它初始化一个值
//	int age = 0;
//	double weight = 52.3;
//
//	printf("%lf\n", weight);
//
//	return 0;
//}

//#include<stdio.h>
////全局变量 - {}外部定义的
//int a = 100;
//
//int main()
//{
//	//局部变量 - {}内部定义的
//	//局部和全局变量名称冲突时，局部优先
//	//不建议把全局变量和局部变量的名字写成一样
//	int a = 10;
//	scanf("%d", &a);
//
//	return 0;
//}