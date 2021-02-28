#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
////1-1
////2-1
////3-2
////4-3
////5-5
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int month = 1;
//	if (N == 1)
//	{
//		printf("%d\n", month);
//	}
//	else
//	{
//		int last = 1;
//		int last_last = 1;
//		month = 2;
//		while (last < N)
//		{
//			int tmp = last;
//			last += last_last;
//			last_last = tmp;
//			month++;
//		}
//		printf("%d\n", month);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int start_high=0;
//	int n = 0;
//	scanf("%d%d",&start_high, &n);
//	if (!n)
//	{
//		printf("%.1lf %.1lf\n", 0.0, 0.0);
//		return 0;
//	}
//	double sum_high = (double)start_high;
//	double n_high = sum_high / 2;
//	for (int i = 1; i < n; i++)
//	{
//		sum_high += n_high*2;
//		n_high /= 2;
//	}
//	printf("%.1lf %.1lf\n", sum_high, n_high);
//	return 0;
//}

#include<stdio.h>

long long Fac(int num)
{
	int ret = 1;
	for (int i = 0; i < num-1; i++)
	{
		ret *= ret + 1;
	}
	return ret;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n)
	{
		double ret = 1.0;
		for (int i = 0; i < n; i++)
		{
			ret += 1.0 / Fac(i + 1);
		}
		printf("%.8lf\n", ret);
	}
	else
	{
		printf("%.8lf\n", 1.0);
	}
	return 0;
}