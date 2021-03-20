#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////思路：
////先打印每行第一个数，后面的数按照空格+数的形式打印
//
//int main()
//{
//	//数据的输入
//	int N = 0;
//	scanf("%d", &N);
//	int arr[10] = { 0 };
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//先打印第一行的第一个数
//	printf("%d", arr[1] - arr[0]);
//	int time = 1;//统计当前一行有几个数
//	//打印后面的数
//	for (int i = 1; i < N - 1; i++)
//	{
//		printf(" %d", arr[i + 1] - arr[i]);
//		time++;
//		//一行有三个数的话就换行
//		if (time == 3)
//		{
//			printf("\n");
//			//在重新开始先打印下一行的第一个数
//			if (i != N - 2)
//			{
//				printf("%d", arr[i + 2] - arr[i + 1]);
//				time = 1;
//				i++;
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
////思路：
////创建两个数组都用来存放输入进来的数
////拿其中一个数组的数依次和另外一个数组的所有数比较，统计该数出现的次数
//
//int main()
//{
//	int N = 0;
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int max_num = 0;
//	int max_time = 0;
//	int tmp_time = 0;
//	//数据的输入
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr1[i]);
//		arr2[i] = arr1[i];
//	}
//	//统计
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				tmp_time++;
//			}
//		}
//		if (!i)//i==0时，先把出现最多次数的数和出现次数都值为数组的第一个元素，此过程只执行一次
//		{
//			max_num = arr1[i];
//			max_time = tmp_time;
//		}
//		else//从第二个数开始，依次比较
//		{
//			if (tmp_time > max_time)
//			{
//				max_num = arr1[i];
//				max_time = tmp_time;
//			}
//		}
//		//每个数比较完成之后都要把tmp_time置为0
//		tmp_time = 0;
//	}
//	printf("%d %d\n", max_num, max_time);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int row = 0;
//	int col = 0;
//	scanf("%d %d", &row, &col);
//	int arr[6][6] = {0};
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < row; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < col; j++)
//		{
//			sum += arr[i][j];
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (!(i + j == n - 1 || i == n - 1 || j == n - 1))
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}