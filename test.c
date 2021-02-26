#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a + b > c&&a + c > b&&b + c > a)
//	{
//		double s = (a + b + c) / 2.0;
//		double area = sqrt(s*(s - a)*(s - b)*(s - c));
//		double peri = a + b + c;
//		printf("area = %.2lf; perimeter = %.2lf\n",area,peri);
//	}
//	else
//	{
//		printf("These sides do not correspond to a valid triangle\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int speed = 0;
//	int limt = 0;
//	scanf("%d%d", &speed, &limt);
//	double percentage = 100.0*(speed-limt)/limt;
//	if (speed >= (limt + limt * 0.1)&&speed<(limt+limt*0.5))
//	{
//		printf("Exceed %.0lf%%. Ticket 200\n", percentage);
//	}
//	else if (speed >= (limt + limt * 0.5))
//	{
//		printf("Exceed %.0lf%%. License Revoked\n", percentage);
//	}
//	else
//	{
//		printf("OK\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	char c = 0;
//	scanf("%d%d %c", &a, &b, &c);
//	double price = 0.0;
//	double discount = 0.0;
//	if (b == 90)
//	{
//		price = 6.95;
//	}
//	else if (b == 93)
//	{
//		price = 7.44;
//	}
//	else
//	{
//		price = 7.93;
//	}
//	if (c == 'm')
//	{
//		discount = 0.95;
//	}
//	else
//	{
//		discount = 0.97;
//	}
//	printf("%.2lf", a*price*discount);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int M = 0;
//	int N = 0;
//	int tmp = 0;
//	scanf("%d%d", &M, &N);
//	int num = M * N;
//	while (N)
//	{
//		tmp = N;
//		N = M % N;
//		M = tmp;
//	}
//	printf("%d %d\n", M, num / M);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	scanf("%d", &num);
//	while (num > 0)
//	{
//		if (num % 2)
//		{
//			sum += num;
//		}
//		scanf("%d", &num);
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int min = 0;
//	int num = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		if (n == 1)
//		{
//			min = num;
//		}
//		else if (min > num)
//		{
//			min = num;
//		}
//	}
//	printf("min = %d\n",min);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int num = 0;
//	scanf("%d", &num);
//	if (!num)
//	{
//		printf("1 0\n");
//		return 0;
//	}
//	while (num)
//	{
//		n++;
//		sum += num % 10;
//		num /= 10;
//	}
//	printf("%d %d\n", n, num);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	for (num = 0;; num++)
//	{
//		if ((num % 5 == 1) && (num % 6 == 5) && (num % 7 == 4) && (num % 11) == 10)
//		{
//			break;
//		}
//	}
//	printf("%d\n", num);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	double mol = 2.0;
//	double par = 1.0;
//	double sum = 0.0;
//	double tmp = 0.0;
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += mol / par;
//		tmp = mol;
//		mol += par;
//		par = tmp;
//	}
//	printf("%.2lf\n", sum);
//	return 0;
//}

#include<stdio.h>

int main()
{
	int a = 0;
	int n = 0;
	int sum = 0;
	scanf("%d%d", &a, &n);
	int i = 0;
	int tmp = a;
	for (i = 0; i < n; i++)
	{
		sum += a;
		a = a * 10 + tmp;
	}
	printf("s = %d\n", sum);
	return 0;
}