#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//
//int cmp_des(const void*num1, const void* num2)
//{
//	return *(int*)num2 > *(int*)num1 ? 1 : -1;
//}
//
//int Min(int num)
//{
//	int arr[3] = { 0 };
//	arr[0] = num % 10;
//	arr[1] = num / 10 % 10;
//	arr[2] = num / 100;
//	qsort(arr, 3, 4, cmp_des);
//	int ret = 0;
//	int flag = 1;
//	for (int i = 0; i < 3; i++)
//	{
//		ret += arr[i] * flag;
//		flag *= 10;
//	}
//	return ret;
//}
//
//int cmp_asc(const void* num1, const void* num2)
//{
//	return *(int*)num1 > *(int*)num2 ? 1 : -1;
//}
//
//int Max(int num)
//{
//	int arr[3] = { 0 };
//	arr[0] = num % 10;
//	arr[1] = num / 10 % 10;
//	arr[2] = num / 100;
//	qsort(arr, 3, 4, cmp_asc);
//	int ret = 0;
//	int flag = 1;
//	for (int i = 0; i < 3; i++)
//	{
//		ret += arr[i] * flag;
//		flag *= 10;
//	}
//	return ret;
//}
//
//int main()
//{
//	int ret=0;
//	scanf("%d", &ret);
//	int flag = 1;
//	int Max_Num = 0;
//	int Min_Num = 0;
//	while (1)
//	{
//		Max_Num = Max(ret);
//		Min_Num = Min(ret);
//		ret = Max_Num - Min_Num;
//		printf("%d: %d - %d = %d\n", flag, Max_Num, Min_Num, ret);
//		if (ret == 495)
//		{
//			break;
//		}
//		else
//		{
//			flag++;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char upper = 'A';
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - i; j++)
//		{
//			printf("%c ", upper++);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int start = 0;
//	int end = 0;
//	int f = 0;
//	scanf("%d%d", &start, &end);
//	for (int i = start; i < end + 1; i++)
//	{
//		int arr[100] = { 0 };
//		int flag = 0;
//		int sum = 0;
//		for (int j = 1; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				arr[flag++] = j;
//				sum += j;
//			}
//		}
//		if (sum == i)
//		{
//			f = 1;
//			printf("%d = ", i);
//			for (int k = 0; k < flag; k++)
//			{
//				if (k != flag - 1)
//				{
//					printf("%d + ", arr[k]);
//				}
//				else
//				{
//					printf("%d\n", arr[k]);
//				}
//			}
//		}
//	}
//	if (!f)
//	{
//		printf("None\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//void Print_Num(int num)
//{
//	if (num > 9)
//	{
//		Print_Num(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Print_Num(num);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int Is_Prime(int num)
//{
//	if (num < 2)
//	{
//		return 0;
//	}
//	for (int i = 2; i <= (int)sqrt(num); i++)
//	{
//		if (num%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int flag = 0;
//	for (int i = 2; i < n+1; i++)
//	{
//		int num = (int)pow(2, i)-1;
//		if (Is_Prime(num))
//		{
//			flag = 1;
//			printf("%d\n",num);
//		}
//	}
//	if (!flag)
//	{
//		printf("None\n");
//	}
//	return 0;
//}

