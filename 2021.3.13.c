#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = num;
//	int op = 0;
//	int flag = 1;
//	while (1)
//	{
//		scanf("%d", &op);
//		switch (op)
//		{
//		case '+':
//			scanf("%d", &num);
//			ret += num;
//			break;
//		case '-':
//			scanf("%d", &num);
//			ret -= num;
//			break;
//		case '*':
//			scanf("%d", &num);
//			ret *= num;
//	    	break;
//		case '/':
//			scanf("%d", &num);
//			if (!num)
//			{
//				printf("ERROR\n");
//				flag = 0;
//			}
//			else
//			{
//				ret /= num;
//			}
//			break;
//		case '=':
//			printf("%d\n", ret);
//			flag = 0;
//			break;
//		default:
//			printf("ERROR\n");
//			flag = 0;
//			break;
//		}
//		if (!flag)
//		{
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, result;
//	int i, flag = 1;
//	char op;
//	scanf("%d", &a);
//	result = a;
//	for (i = 1; ; i++) {
//		op = getchar();
//		scanf("%d", &a);
//		switch (op) {
//		case '+':result += a;
//			break;                         //switch中的break只能跳出switch，不能跳出循环。
//		case '-':result -= a;
//			break;
//		case '*':result *= a;
//			break;
//		case '/':
//			if (a == 0) {
//				printf("ERROR");
//				flag = 0;
//				break;
//			}
//			else
//				result /= a;
//			break;
//		case '=':
//			printf("%d\n", result);
//			flag = 0;
//			break;
//		default:
//			printf("ERROR");
//			flag = 0;
//			break;
//		}
//		if (flag == 0)
//			break;
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n1 = 0;
//	scanf("%d", &n1);
//	int arr1[20] = { 0 };
//	for (int i = 0; i < n1; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	int n2 = 0;
//	scanf("%d", &n2);
//	int arr2[20] = { 0 };
//	for (int j = 0; j < n2; j++)
//	{
//		scanf("%d", &arr2[j]);
//	}
//	int arr3[40] = { 0 };
//	int k = 0;
//	for (int i = 0; i < n1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < n2; j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (!flag)
//		{
//			arr3[k++] = arr1[i];
//		}
//	}
//	for (int i = 0; i < n2; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < n1; j++)
//		{
//			if (arr2[i] == arr1[j])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (!flag)
//		{
//			arr3[k++] = arr2[i];
//		}
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p2 > *(int*)p1 ? 1: -1;
//}
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
//	qsort(arr, N, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < N; i++)
//	{
//		if (i == N - 1)
//		{
//			printf("%d", arr[N - 1]);
//		}
//		else
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int N = 0;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		int num=0;
//		scanf("%d", &num);
//		if (!num)
//		{
//			arr[0]++;
//		}
//		while (num)
//		{
//			arr[num % 10]++;
//			num /= 10;
//		}
//	}
//	int M = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > M)
//		{
//			M = arr[i];
//		}
//	}
//	printf("%d: ", M);
//	int time = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] == M)
//		{
//			time++;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		int flag = 0;
//		if (arr[i] == M)
//		{
//			if (flag == time - 1)
//			{
//				printf("%d\n", i);
//			}
//			else
//			{
//				printf("%d ", i);
//				flag++;
//			}
//		}
//	}
//	return 0;
//}

