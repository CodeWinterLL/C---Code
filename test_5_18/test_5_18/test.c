#define _CRT_SECURE_NO_WARNINGS 1


//����һ����������A��B����С������
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	/*�㷨һ��a��b����С����������С��СҲ��a��b�е��Ǹ����ֵ
//	* ��������a��b�ĳ˻�a*b
//	*/
//	//����min��a��b����С������
//	//int min = a > b ? a : b;
//	//while (1)
//	//{
//	//	//a��b����С����������ͬʱ��a��b��������С��������ֵ
//	//	if (min % a == 0 && min % b == 0)
//	//	{
//	//		printf("%d\n", min);
//	//		break;
//	//	}
//	//	min++;
//	//}
//
//	/*�㷨����Ч�ʸ���
//	*/
//	//int i = 0;
//	//for (i = 1;; i++)
//	//{
//	//	//��С����������aһ����һ������������СΪ1��
//	//	if ((a * i) % b == 0)
//	//	{
//	//		printf("%d\n", a * i);
//	//		break;
//	//	}
//	//}
//
//	/*�㷨����շת�����������Լ����Ȼ��a*b�������Լ��������С������ 
//	*/
//	//շת������������������������������㣬ֱ������=0��ȡ��ǰ��ʽ�ĳ���Ϊ���Լ��
//  //���a����b����c==0�������Լ����b������a=b��b=c�����������ֱ����������0
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






//���Զ�������һ��Ӣ�ģ����䵹�ú����(ע������Ų�����)
//���룺I like english.
//�����english like I

/*����˼·��������ת��
* 1.�ַ�����������
	.hsilgne ekil I
* 2.ÿ����������
	english. like I
*/

#include<stdio.h>
#include<string.h>

//�����ַ���
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
	//�����ַ���
	gets(arr);

	//��1�����������ַ��������ǵ�֪���ַ�������ʼλ�úͽ���λ��������
	//I like english.
	//.hsilgne ekil I
	int len = strlen(arr);
	reverse(arr, arr + len - 1);

	//��2����ÿ�������������Ǿ�Ҫ�ҵ�ÿһ�����ʣ��Լ����ǵ���ʼ�ͽ���λ��
	//.hsilgne ekil I'\0'
	//english. like I'\0'
	char* start = arr;
	char* end = start;
	
	//endָ��ָ�������ַ���ĩβʱ��ѭ������
	while (*end)
	{
		//endָ���ַ���ĩβ��ֹͣ����
		if (*end != '\0')
		{
			end++;
		}
		//endָ��ָ��ĳһ������ĩβ���ո����'\0'��
		if (*end == ' ' || *end == '\0')
		{
			//���򵥴�
			reverse(start, end - 1);
			//��endû��ָ�����һ�����ʵ�ĩβ'\0'ʱ��startָ����һ���µ�����ʼλ��
			if (*end != '\0')
			{
				start = end + 1;
			}
		}
	}
	

	/*�㷨����
	while (*end)
	{
		end = start;
		//endָ�򵥴�ĩβ���ո��'\0'��ʱ��ֹͣѭ��
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		//���򵥴�
		reverse(start, end - 1);
		//��endû��ָ�����һ�����ʵ�ĩβ'\0'ʱ��startָ����һ���µ��ʵ���ʼλ��
		if (*end != '\0')
		{
			start = end + 1;
		}
	}
	*/

	printf("%s\n", arr);

	return 0;
}