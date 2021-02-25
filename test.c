#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	scanf("%lf%lf%lf",&a,&b,&c);
//	if (a == 0.0&&b == 0.0)
//	{
//		if (c == 0.0)
//		{
//			printf("Zero Equation\n");
//			return 0;
//		}
//		else
//		{
//			printf("Not An Equation\n");
//			return 0;
//		}
//	}
//	if (a == 0.0)
//	{
//		printf("%.2lf\n", -1 * c / b);
//		return 0;
//	}
//	double dt = b*b-4*a*c;
//	if (dt == 0)
//	{
//		printf("%.2lf\n", -1 * b / (2 * a));
//	}
//	else if (dt > 0.0)
//	{
//		if (a > 0.0)
//		{
//			printf("%.2lf\n%.2lf\n", ((-1 * b) + sqrt(dt)) / (2 * a), ((-1 * b) - sqrt(dt)) / (2 * a));
//		}
//		else
//		{
//			printf("%.2lf\n%.2lf\n", ((-1 * b) - sqrt(dt)) / (2 * a), ((-1 * b) + sqrt(dt)) / (2 * a));
//		}
//	}
//	else
//	{
//		double rea = -1 * b / (2 * a);
//		double ima = sqrt(-1 * dt) / (2 * a);
//		if (b == 0.0)
//		{
//			if (a > 0.0)
//			{
//				printf("%.2lfi\n%.2lfi\n", ima, ima);
//				return 0;
//			}
//			else
//			{
//				printf("%.2lfi\n%.2lfi\n", -1 * ima,  * ima);
//				return 0;
//			}
//		}
//		if (a > 0.0)
//		{
//			printf("%.2lf+%.2lfi\n%.2lf%.2lfi\n", rea, ima, rea, ima);
//		}
//		else if (a < 0.0)
//		{
//			printf("%.2lf+%.2lfi\n%.2lf-%.2lfi\n", rea, -1 * ima, rea, -1 * ima);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	printf("%.2lf", -1*0.0);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num)
//	{
//		if (num > 0)
//		{
//			printf("sign(%d) = %d\n", num, 1);
//		}
//		else
//		{
//			printf("sign(%d) = %d\n", num, -1);
//		}
//	}
//	else
//	{
//		printf("sign(%d) = %d\n", num, 0);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int cmp(void* p1, void* p2)
//{
//	return *(int*)p1 > *(int*)p2 ? 1 : -1;
//}
//
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, 3, sizeof(arr[0]), cmp);
//	printf("%d->%d->%d\n", arr[0], arr[1], arr[2]);
//	return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//
//int main()
//{
//	int letter = 0;
//	int blank = 0;
//	int digit = 0;
//	int other = 0;
//	int i = 0;
//	char tmp = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%c", &tmp);
//		if (isalpha(tmp))
//		{
//			letter++;
//			continue;
//		}
//		else if (isdigit(tmp))
//		{
//			digit++;
//			continue;
//		}
//		else if (tmp == ' ' || tmp == '\n')
//		{
//			blank++;
//			continue;
//		}
//		else
//		{
//		   other++;
//		   continue;
//		}
//	}
//	printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
//	return 0;
//}

//#include<stdio.h>
//
//void menu()
//{
//	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
//}
//
//enum KIND
//{
//	apple=1,
//	pear,
//	orange,
//	grape
//};
//
//int main()
//{
//	menu();
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int input = 0;
//		scanf("%d", &input);
//		if (!input)
//		{
//			break;
//		}
//		switch (input)
//		{
//		case apple:
//			printf("price = 3.00\n");
//			break;
//		case pear:
//			printf("price = 2.50\n");
//			break;
//		case orange:
//			printf("price = 4.10\n");
//			break;
//		case grape:
//			printf("price = 10.20\n");
//			break;
//		default:
//			printf("price = 0.00\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	double salary = 0.0;
//	scanf("%lf", &salary);
//	if (salary <= 1600)
//	{
//		printf("0.00\n");
//	}
//	else if (salary > 1600 && salary <= 2500)
//	{
//		printf("%.2lf\n", 0.05*(salary-1600));
//	}
//	else if (salary > 2500 && salary <= 3500)
//	{
//		printf("%.2lf\n", 0.1*(salary - 1600));
//	}
//	else if (salary > 3500 && salary <= 4500)
//	{
//		printf("%.2lf\n", 0.15*(salary - 1600));
//	}
//	else if (salary > 4500)
//	{
//		printf("%.2lf\n", 0.2*(salary - 1600));
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int num_A = 0;
//	int num_B = 0;
//	int num_C = 0;
//	int num_D = 0;
//	int num_E = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		double score = 0;
//		scanf("%lf ", &score);
//		if (score >= 90)
//		{
//			num_A++;
//		}
//		else if (score >= 80 && score < 90)
//		{
//			num_B++;
//		}
//		else if (score >= 70 && score < 80)
//		{
//			num_C++;
//		}
//		else if (score >= 60 && score < 70)
//		{
//			num_D++;
//		}
//		else
//		{
//			num_E++;
//		}
//	}
//	printf("%d %d %d %d %d\n", num_A, num_B, num_C, num_D, num_E);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	if (N % 5 >= 1 && N%5 <= 3)
//	{
//		printf("Fishing in day %d\n", N);
//	}
//	else
//	{
//		printf("Drying in day %d\n", N);
//	}
//	return 0;
//}