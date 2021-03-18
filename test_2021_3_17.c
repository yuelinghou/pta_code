#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////思路：
////两个数组相互比较，把各自数组里不是另外一个数组里的元素找出来放到另外一个数组里
////最后在对另外一个数组里的元素去重输出出来
//int main()
//{
//	//定义数组
//	int a[20] = { 0 };//存放第一组数的数组
//	int b[20] = { 0 };//存放第二组数的数组
//	int c[40] = { 0 };//存放不是共有的元素
//	//输入第一组数
//	int num1 = 0;
//	scanf("%d", &num1);
//	for (int i = 0; i < num1; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	//输入第二组数
//	int num2 = 0;
//	scanf("%d", &num2);
//	for (int i = 0; i < num2; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	//找出不是共有的元素
//	//1.a数组有的，b数组没有的
//	int k = 0;
//	for (int i = 0; i < num1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num2; j++)
//		{
//			if (a[i] == b[j])
//			{
//				break;
//			}
//		}
//		if (j == num2)
//		{
//			c[k++] = a[i];
//		}
//	}
//	//2.b数组有的，a数组没有的
//	for (int i = 0; i < num2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num1; j++)
//		{
//			if (b[i] == a[j])
//			{
//				break;
//			}
//		}
//		if (j == num1)
//		{
//			c[k++] = b[i];
//		}
//	}
//	//去重后打印出来
//	printf("%d", c[0]);//题目要求最后不能有空格，所以先打印第一个出来，后面的后面的按照“空格+%d”打印
//	for (int i = 1; i < k; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (c[i] == c[j])
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf(" %d", c[i]);
//		}
//	}
//	return 0;
//}

#include<stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);
	int arr[1000] = { 0 };
	int i = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	int count[10] = { 0 };
	for (i = 0; i < N; i++)
	{
		while (i > 0)
		{

		}
	}
	return 0;
}