#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////思路：
////把输入的数字依次存放在number_num[10]的每个元素中，个下标对应起来代表每个数字出现的次数
////先打印出一个从下标1-9开始最小的那个下标
////在遍历number_num数组，从小到大依次打印完所有下标
//
//int main()
//{
//	//数据的输入
//	int number_num[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &number_num[i]);
//	}
//	//先打印一个1到9最小的下标
//	for (int i = 1; i < 10; i++)
//	{
//		if (number_num[i])
//		{
//			printf("%d", i);
//			number_num[i]--;
//			break;
//		}
//	}
//	//再打印完0到9所有的下标
//	for (int i = 0; i < 10; i++)
//	{
//		while (number_num[i]--)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[6][6] = { 0 };
//	int tmp[6][6] = { 0 };
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			tmp[i][(j + m) % n] = arr[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", tmp[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[6][6] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int max_row = 0;
//	int maz_col = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			int flag_row = 1;
//			int flag_col = 1;
//			for (int k = 0; k < n; k++)
//			{
//				if(k !=j )
//				{
//					if (arr[i][j] < arr[i][k])
//					{
//						flag_row = 0;
//						break;
//					}
//				}
//			}
//			for (int m = 0; m < n; m++)
//			{
//				if(m != i)
//				{
//					if (arr[i][j] > arr[m][j])
//					{
//						flag_row = 0;
//						break;
//					}
//				}
//			}
//			if (flag_col&&flag_row)
//			{
//				printf("%d %d\n", i, j);
//				return 0;
//			}
//		}
//	}
//	printf("NONE\n");
//	return 0;
//}

