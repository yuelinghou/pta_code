#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//double Fac(int num)
//{
//	double ret = 1;
//	for (int i = 1; i < num + 1; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	double eps = 0.0;
//	scanf("%le", &eps);
//	double sum = 1.0;
//	double tmp = 1.0;
//	int i = 1;
//	int mol = 1;
//	int den = 2 * i + 1;
//	while (tmp >= eps)
//	{
//		int tmp2 = den;
//		tmp = 1.0*Fac(mol) / den;
//		sum += tmp;
//		mol++;
//		i++;
//		den = (2 * i + 1)*tmp2;
//	}
//	printf("PI = %.5lf\n", sum * 2);
//	return 0;
//}

//#include<stdio.h>
//
//int Fac(int num)
//{
//	int ret = 1;
//	for (int i = 1; i < num + 1; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	double eps = 0.0;
//	scanf("%le", &eps);
//	int mol = 1;
//	int flag_mol = 0;
//	int den = 1;
//	int flag_den = 1;
//	double last_num = 1.0;
//	double PI = 1.0;
//	while (last_num >= eps)
//	{
//		flag_mol++;
//		mol = Fac(flag_mol);
//		flag_den += 2;
//		den *= flag_den;
//		last_num = 1.0*mol / den;
//		PI += last_num;
//	}
//	printf("PI = %.5lf", PI*2);
//	return 0;
//}

//#include <stdio.h>
//double fac(int n);    //定义一个阶乘函数 
//int main()
//{
//	int i = 0;
//	double eps, n = 0, s = 1, PI=0.0;
//	scanf("%le", &eps);
//	for (i = 1; ; i += 2)
//	{
//		s *= i;
//		PI += fac(n) / s;
//		if (fac(n) / s < eps)
//			break;
//		n++;
//	}
//	printf("PI = %.5lf", 2.0*PI);
//
//	return 0;
//}
//double fac(int n)
//{
//	int i;
//	double s = 1;
//	if (n == 0)
//		s = 1;
//	else
//		for (i = 1; i <= n; i++)
//			s *= i;
//
//	return s;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr[100] = {0};
//	gets(arr);
//	int num_word = 0;
//	for (int i = 0; arr[i] != '\0'; i++)
//	{
//		if (arr[i] == ' ')
//		{
//			num_word++;
//		}
//	}
//	printf("%d\n", ++num_word);
//	return 0;
//}

//遇到空格就一直往后走，直到遇到文本的字符...
//遇到文本字符就让单词数量加一然后一直往后走，直到遇到空格...
//遇到'\0'统计结束
//#include<stdio.h>
//
//int main()
//{
//	char ch[1000] = { 0 };//存放要统计的文本
//	gets(ch);//会有空格的输入，不能用scanf
//	int flag = 0;
//	int word_num = 0;//统计文本中单词的数量
//	for (int i = 0; ch[i] != '\0'; i++)
//	{
//		if (ch[i] == ' ')
//		{
//			flag = 0;
//		}
//		else if (flag == 0)
//		{
//			flag = 1;
//			word_num++;
//		}
//	}
//	printf("%d\n", word_num);
//	return 0;
//}

//思路：
//把要插入的元素先放到原数组的最后一个位置
//对该数组排序（我用的是快速排序）

//#include<stdio.h>
//#include<stdlib.h>//使用qsort，需要引这个头文件
//
////自定义的比较两个整数的函数
//int cmp_int(const void* num1, const void* num2)
//{
//	return *((int*)num1) > *((int*)num2) ? 1 : -1;
//}
//
//int main()
//{
//	//输入原数组的元素个数N
//	int N = 0;
//	scanf("%d", &N);
//	//根据N的大小，动态开辟一块N+1个整型元素的空间
//	int* p = NULL;
//	p = (int*)malloc((N + 1) * sizeof(int));
//	if (p == NULL)//检查是否开辟成功
//	{
//		printf("动态开辟内存失败\n");
//		exit(-1);
//	}
//	//把原数组的元素和要插入的那一个元素放到动态开辟的空间里
//	int i = 0;
//	for (i = 0; i < N+1; i++)
//	{
//		scanf("%d", &p[i]);
//	}
//	//对该空间的N+1个元素快速排序
//	qsort(p, N + 1, sizeof(int), cmp_int);
//	//打印排序之后的元素
//	for (i = 0; i < N + 1; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//释放动态开辟的空间
//	free(p);
//	p = NULL;
//	return 0;
//}

//思路：
//先把第一个输入的数作为最大的数max_num
//接下来输入的数跟这个数比较如果更大就更新max_num的值和记录这个数的下标max_flag

//#include<stdio.h>
//
//int main()
//{
//	//输入数组的元素个数
//	int n = 0;
//	scanf("%d", &n);
//	int max_num = 0;
//	int max_flag = 0;
//	//把输入的第一个数最为最大值max_num
//	scanf("%d", &max_num);
//	//把max_num和接下来输入的数比较，并更新它的值和下标
//	for (int i = 1; i < n; i++)
//	{
//		int tmp = 0;
//		scanf("%d", &tmp);
//		if (tmp > max_num)
//		{
//			max_num = tmp;
//			max_flag = i;
//		}
//	}
//	//输出真正的最大值和它的下标
//	printf("%d %d\n", max_num, max_flag);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* p = (int*)malloc(n * sizeof(int));
//	if (p == NULL)
//	{
//		printf("动态开辟内存失败\n");
//		exit(-1);
//	}
//	for (int i = n - 1; i >= 0; i--)
//	{
//		scanf("%d", &p[i]);
//	}
//	for (int j = 0; j < n; j++)
//	{
//		if (j != (n - 1))
//		{
//			printf("%d ", p[j]);
//		}
//		else
//		{
//			printf("%d", p[j]);
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

#include<stdio.h>

int main()
{
	int arr1[20] = { 0 };
	int arr2[20] = { 0 };
	int dif_arr[40] = { 0 };
	int N1 = 0;
	scanf("%d", &N1);
	for (int i = 0; i < N1; i++)
	{
		scanf("%d", &arr1[i]);
	}
	int N2 = 0;
	scanf("%d", &N2);
	for (int i = 0; i < N2; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int k = 0;
	for (int i = 0; i < N1; i++)
	{
		int flag = 0;
		for (int j = 0; j < N2; j++)
		{
			if (arr1[i] == arr2[j])
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			dif_arr[k] = arr1[i];
			k++;
		}
	}
	for (int i = 0; i < N2; i++)
	{
		int flag = 0;
		for (int j = 0; j < N1; j++)
		{
			if (arr2[i] == arr1[j])
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			dif_arr[k] = arr2[i];
			k++;
		}
	}
	int src = 0;
	int dest = 1;
	for(int )

	for (int i = 0; i < k; i++)
	{
		if (i != k - 1)
		{
			printf("%d ", dif_arr[i]);
		}
		else
		{
			printf("%d\n", dif_arr[i]);
		}
	}
	return 0;
}