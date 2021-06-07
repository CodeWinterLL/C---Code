#define _CRT_SECURE_NO_WARNINGS 1


/*作业七：
实现一个函数，可以左旋字符串中的k个字符。
例如：
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB
*/

//#include<stdio.h>
//#include<string.h>
//
//void string_left_rotate(char* p, int k)
//{
//	int len = strlen(p);  // 4
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < k; i++)  // 控制左旋多少个字符，一次左旋一个字符
//	{
//		char temp = *p;  // 存储第一个字符
//
//		for (j = 0; j < len - 1; j++)
//		{
//			*(p + j) = *(p + j + 1);  // 将后面的 n-1 个字符依次向左移动
//		}
//		*(p + len - 1) = temp;  // 将第一个字符移动到字符串最后
//	}
//	
//}
//
//int main()
//{
//	char arr[10] = "ABCD";
//
//	int k = 0;
//	scanf("%d", &k);
//
//	string_left_rotate(arr, k);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


/*作业八：
写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定 s1 =AABCD 和 s2 = BCDAA ，返回 1
给定 s1=abcd 和 s2=ACBD ，返回 0
AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA
AABCD右旋一个字符得到DAABC
*/

#include<stdio.h>
#include<string.h>

int is_string_rotate(char* p1, char* p2)
{
	int len1 = strlen(p1);

	//将 p1 指向的字符串依次旋转一个字符
	int i = 0;
	for (i = 0; i < len1; i++)
	{
		int temp = *p1;  // 存储第一个字符
		int j = 0;
		for (j = 0; j < len1 - 1; j++)
		{
			*(p1 + j) = *(p1 + j + 1);  // 将后面的字符依次向前移动一位
		}
		*(p1 + len1 - 1) = temp;  // 将第一字符移动到最后字符串最后一位

		//每旋转一个字符，就与 p2 指向的字符比较一次，看是否相等
		if (strcmp(p1, p2) == 0)
		{
			return 1;
		}
	}

	return 0;
}

int main()
{
	char s1[] = "DAABC";
	char s2[] = "BCDAA";

	int ret = is_string_rotate(s1, s2);

	if (ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}