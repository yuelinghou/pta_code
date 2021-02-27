#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	double eps = 0.0;
//	scanf("%lf", &eps);
//	double mol = 1.0;
//	double den = 1.0;
//	double flag = 1.0;
//	double num = flag * mol / den;
//	while (fabs(mol / den) > eps)
//	{
//		den += 3;
//		flag *= -1;
//		num += flag * mol / den;
//	}
//	printf("sum = %lf\n", num);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	int guess = 0;
//	int N = 0;
//	scanf("%d%d", &num, &N);
//	int i = 0;
//	for (i = 1;i<N+1; i++)
//	{
//		scanf("%d", &guess);
//		if (guess < 0)
//		{
//			break;
//		}
//		if (guess == num)
//		{
//			if (i == 1)
//			{
//				printf("Bingo!\n");
//				break;
//			}
//			else if (i > 1 && i <= 3)
//			{
//				printf("Lucky You!\n");
//				break;
//			}
//			else if (i > 3 && i <= N)
//			{
//				printf("Good Guess!\n");
//				break;
//			}
//		}
//		if (guess > num)
//		{
//			printf("Too big\n");
//
//		}
//		else
//		{
//			printf("Too small\n");
//		}
//	}
//	if (i > N||guess<0)
//	{
//		printf("Game Over\n");
//	}
//	return 0;
//}
