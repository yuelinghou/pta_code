#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//double Fac(int num)
//{
//	double ret = 1.0;
//	for (int i = 1; i <= num; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double ret = 1.0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret += 1.0 / Fac(i);
//	}
//	printf("%.8lf\n",ret);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int is_prime(int num)
//{
//	if (num < 2)
//	{
//		return 0;
//	}
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (!(num % i))
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int start = 1;
//	int end = num - 1;
//	while (start <= num / 2)
//	{
//		if (is_prime(start) && is_prime(end))
//		{
//			break;
//		}
//		start++;
//		end--;
//	}
//	printf("%d = %d + %d\n", num, start, end);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int count = 0;
//	for (int Five_Num = money/5;Five_Num>0;Five_Num--)
//	{
//		for (int Tow_Num = money / 2; Tow_Num > 0; Tow_Num--)
//		{
//			for (int One_Num = money; One_Num > 0; One_Num--)
//			{
//				if (Five_Num * 5 + Tow_Num * 2 + One_Num == money)
//				{
//					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", Five_Num, Tow_Num, One_Num, Five_Num + Tow_Num + One_Num);
//					count++;
//				}
//			}
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int Is_NarNumber(int num,int n)
//{
//	int tmp = 0;
//	int sum = 0;
//	int flag = num;
//	while (num)
//	{
//		tmp = num % 10;
//		sum += (int)pow(tmp, n);
//		num /= 10;
//	}
//	if (sum == flag)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int min = (int)pow(10, N - 1);
//	int max = (int)pow(10, N);
//	for (int i = min; i < max; i++)
//	{
//		if (Is_NarNumber(i,N))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int Is_NarNumber(int num, int n)
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = (int)pow(i, n);
//	}
//	int flag = num;
//	int sum = 0;
//	while (num)
//	{
//		sum += arr[num % 10];
//		num /= 10;
//	}
//	if (sum == flag)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int min = (int)pow(10, N - 1);
//	int max = (int)pow(10, N);
//	for (int i = min; i < max; i++)
//	{
//		if (Is_NarNumber(i, N))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
