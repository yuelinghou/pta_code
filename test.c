#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	int sta=0;
//	int end = 0;
//	scanf("%d%d", &sta, &end);
//	int sta_h = sta / 100;
//	int sta_m = sta % 100;
//	int end_h = end / 100;
//	int end_m = end % 100;
//	if (sta_m > end_m)
//	{
//		printf("%02d:%02d\n", end_h-sta_h -1, 60 - sta_m + end_m);
//	}
//	else
//	{
//		if (60 - sta_m + end_m >= 60)
//		{
//			printf("%02d:%02d\n", end_h - sta_h, end_m - sta_m);
//		}
//		else
//		{
//			printf("%02d:%02d\n", end_h - sta_h, 60 + end_m - sta_m);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int i = 0;
//	double ret = 0.0;
//	for (i = 1; i <= N; i++)
//	{
//		ret += 1.0 / i;
//	}
//	printf("sum = %.6lf\n", ret);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int i = 0;
//	int j = 1;
//	double ret = 0.0;
//	for (i = 0; i < N; i++)
//	{
//		ret += 1.0 / j;
//		j += 2;
//	}
//	printf("sum = %.6lf\n", ret);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int i = 0;
//	int j = 1;
//	int k = 1;
//	double ret = 0.0;
//	for (i = 0; i < N; i++)
//	{
//		ret += k * 1.0 / j;
//		j += 3;
//		k *= -1;
//	}
//	printf("sum = %.3lf\n", ret);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int lower = 0;
//	int upper = 0;
//	scanf("%d%d", &lower, &upper);
//	if (lower > upper || upper > 100)
//	{
//		printf("Invalid.\n");
//	}
//	else
//	{
//		printf("fahr celsius\n");
//		int i = 0;
//		for (i = lower; i < upper + 1; i += 2)
//		{
//			printf("%d%6.1lf\n", i, 5.0*(i - 32) / 9);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int mol = 1;
//	int den = 1;
//	int i = 0;
//	double k = 1;
//	double ret = 0.0;
//	for (i = 0; i < N; i++)
//	{
//		ret += k * mol / den;
//		mol++;
//		den += 2;
//		k *= -1;
//	}
//	printf("%.3lf\n", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int i = 0;
//	double ret = 0.0;
//	for (i = m; i < n + 1; i++)
//	{
//		ret += (pow(i, 2) + 1.0 / i);
//	}
//	printf("sum = %.6lf\n", ret);
//	return 0;
//}

