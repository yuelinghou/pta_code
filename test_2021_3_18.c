#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////思路：
////建立两个数组
////arr[1000]存放输入的整数
////count[10]统计对应0-9数字出现的次数
////最后count[10]数组里最大元素就是最多出现次数，对应下标为出现最多的个位数字
//int main() 
//{
//	//输入N为要输入数字的个数
//	int N = 0;
//	scanf("%d", &N);
//	//输入N个数字
//	int arr[1000] = { 0 };
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int count[10] = { 0 };//count[10]统计对应0 - 9数字出现的次数
//	int much_time = count[0];//much_time为出现最多数字的次数，先默认为数字0出现的次数
//	//对输入的数字进行0-9每个数字出现次数的统计
//	for (int i = 0; i < N; i++)
//	{
//		//输入数字为0的情况如果
//		if (arr[i]==0)
//		{
//			count[0]++;
//		}
//		//输入数字非0的情况
//		else
//		{
//			while (arr[i])
//			{
//				int tmp = arr[i]%10;
//				count[tmp]++;
//				arr[i] /= 10;
//			}
//		}
//	}
//	//统计出现最多数字的次数
//	for (int i = 1; i < 10; i++)
//	{
//		if (count[i] > much_time)
//		{
//			much_time = count[i];
//		}
//	}
//	//先打印最多出现的次数
//	printf("%d:", much_time);
//	//打印出现最多的数字
//	for (int i = 0; i < 10; i++)
//	{
//		if (count[i] == much_time)
//		{
//			printf(" %d", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int arr[4] = { 0 };
//	arr[0] = (num / 1000 + 9) % 10;
//	arr[1] = (num / 100 + 9) % 10;
//	arr[2] = (num / 10 + 9) % 10;
//	arr[3] = (num / 1 + 9) % 10;
//	printf("The encrypted number is %d%d%d%d\n", arr[2], arr[3], arr[0], arr[1]);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int arr[10] = { 0 };
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max_flag = 0;
//	int max_num = arr[0];
//	for (int i = 1; i < N; i++)
//	{
//		if (arr[i] > max_num)
//		{
//			max_flag = i;
//			max_num = arr[i];
//		}
//	}
//	int tmp_num = arr[N-1];
//	arr[N - 1] = max_num;
//	arr[max_flag] = tmp_num;
//	int min_flag = 0;
//	int min_num = arr[0];
//	for (int i = 1; i < N; i++)
//	{
//		if (arr[i] < min_num)
//		{
//			min_flag = i;
//			min_num = arr[i];
//		}
//	}
//	tmp_num = arr[0];
//	arr[0] = min_num;
//	arr[min_flag] = tmp_num;
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}