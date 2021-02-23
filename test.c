#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("pow(3,%d) = %.0lf\n", i, pow(3, i));
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double ret = 0.0;
//	int i = 0;
//	for (i = 1; i < n + 1; i++)
//	{
//		ret += sqrt(i);
//	}
//	printf("sum = %.6lf\n", ret);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int tmp = 1;
//		for (j = 1; j <= i; j++)
//		{
//			tmp *= j;
//		}
//		ret += tmp;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret += pow(2, i + 1);
//	}
//	printf("result = %d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//
//double Fac(int num)
//{
//	if (num != 1)
//	{
//		return 1.0*num * Fac(num - 1);
//	}
//	return 1.0;
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	double ret = 0.0;
//	scanf("%d%d", &m, &n);
//	if (n == m)
//	{
//		printf("%.0lf", 1.0);
//	}
//	else
//	{
//		ret = Fac(n) / (Fac(m)*Fac(n - m));
//		printf("result = %.0lf", ret);
//	}
//	return 0;
//}

#include<stdio.h>
#include<math.h>

int main()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a == 0 && b == 0)
	{
		if (c == 0)
		{
			printf("Zero Equation");
		}
		else
		{
			printf("Not An Equation");
		}
	}
	if (a == 0)
	{
		printf("%.2lf\n", -1 * c / b);
	}
	double dt = b * b - 4 * a*c;
	if (dt)
	{
		if (dt > 0)
		{
			if (a > 0)
			{
				printf("%.2lf %.2lf\n", (-1 * b + sqrt(dt)) / 2 * a, (-1 * b - sqrt(dt)) / 2 * a);
			}
			else
			{
				printf("%.2lf %.2lf\n", (-b - sqrt(dt)) / 2 * a, (-b + sqrt(dt)) / 2 * a);
			}
		}
		else
		{
			if (a > 0)
			{
				printf("%.2lf %.2lf\n", (-1 * b + sqrt(-1*dt)) / 2 * a, (-1 * b - sqrt(-1*dt)) / 2 * a);
			}
			else
			{
				printf("%.2lf %.2lf\n", (-b - sqrt(-1*dt)) / 2 * a, (-b + sqrt(-1*dt)) / 2 * a);
			}
		}
	}
	else
	{
		printf("")
	}
	return 0;
}
