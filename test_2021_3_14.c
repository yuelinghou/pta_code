#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	//val为要删除的数字
//	int val = 0;
//	scanf("%d", &val);
//	//n为数组元素的个数
//	int n = 0;
//	scanf("%d", &n);
//	//输入数组元素
//	int arr[10] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//删除数组中的val
//	int src = 0;
//	int dest = 0;
//	while (src < n )
//	{
//		if (arr[src] == val)
//		{
//			src++;
//		}
//		else
//		{
//			arr[dest] = arr[src];
//			dest++;
//			src++;
//		}
//	}
//	//打印删除后的数组
//	for (int i = 0; i < dest; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int flag = -1;
//	int n = 0;
//	int x = 0;
//	int arr[20] = { 0 };
//	scanf("%d %d", &n, &x);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] == x)
//		{
//			flag = i;
//		}
//	}
//	if (flag == -1)
//	{
//		printf("Not Found\n");
//	}
//	else
//	{
//		printf("%d\n", flag);
//	}
//	return 0;
//}

#include<stdio.h>

int main()
{
	int n = 0;
	int arr[10] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int prev = 0;
	int next = 1;
	int flag = 1;
	while (next < n)
	{
		if (flag % 3)
		{
			printf("%d ", arr[next] - arr[prev]);
		}
		else
		{
			printf("%d", arr[next]-arr[prev]);
		}
		next++;
		prev++;
		if (flag % 3 == 0)
		{
			printf("\n");
		}
		flag++;
	}
	return 0;
}
