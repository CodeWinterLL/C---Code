#define _CRT_SECURE_NO_WARNINGS 1


/*��ҵ�ߣ�
ʵ��һ�����������������ַ����е�k���ַ���
���磺
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB
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
//	for (i = 0; i < k; i++)  // �����������ٸ��ַ���һ������һ���ַ�
//	{
//		char temp = *p;  // �洢��һ���ַ�
//
//		for (j = 0; j < len - 1; j++)
//		{
//			*(p + j) = *(p + j + 1);  // ������� n-1 ���ַ����������ƶ�
//		}
//		*(p + len - 1) = temp;  // ����һ���ַ��ƶ����ַ������
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


/*��ҵ�ˣ�
дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺���� s1 =AABCD �� s2 = BCDAA ������ 1
���� s1=abcd �� s2=ACBD ������ 0
AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA
AABCD����һ���ַ��õ�DAABC
*/

#include<stdio.h>
#include<string.h>

int is_string_rotate(char* p1, char* p2)
{
	int len1 = strlen(p1);

	//�� p1 ָ����ַ���������תһ���ַ�
	int i = 0;
	for (i = 0; i < len1; i++)
	{
		int temp = *p1;  // �洢��һ���ַ�
		int j = 0;
		for (j = 0; j < len1 - 1; j++)
		{
			*(p1 + j) = *(p1 + j + 1);  // ��������ַ�������ǰ�ƶ�һλ
		}
		*(p1 + len1 - 1) = temp;  // ����һ�ַ��ƶ�������ַ������һλ

		//ÿ��תһ���ַ������� p2 ָ����ַ��Ƚ�һ�Σ����Ƿ����
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