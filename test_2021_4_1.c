#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////˼·��
////��������������δ����number_num[10]��ÿ��Ԫ���У����±��Ӧ��������ÿ�����ֳ��ֵĴ���
////�ȴ�ӡ��һ�����±�1-9��ʼ��С���Ǹ��±�
////�ڱ���number_num���飬��С�������δ�ӡ�������±�
//
//int main()
//{
//	//���ݵ�����
//	int number_num[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &number_num[i]);
//	}
//	//�ȴ�ӡһ��1��9��С���±�
//	for (int i = 1; i < 10; i++)
//	{
//		if (number_num[i])
//		{
//			printf("%d", i);
//			number_num[i]--;
//			break;
//		}
//	}
//	//�ٴ�ӡ��0��9���е��±�
//	for (int i = 0; i < 10; i++)
//	{
//		while (number_num[i]--)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[6][6] = { 0 };
//	int tmp[6][6] = { 0 };
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			tmp[i][(j + m) % n] = arr[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", tmp[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[6][6] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int max_row = 0;
//	int maz_col = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			int flag_row = 1;
//			int flag_col = 1;
//			for (int k = 0; k < n; k++)
//			{
//				if(k !=j )
//				{
//					if (arr[i][j] < arr[i][k])
//					{
//						flag_row = 0;
//						break;
//					}
//				}
//			}
//			for (int m = 0; m < n; m++)
//			{
//				if(m != i)
//				{
//					if (arr[i][j] > arr[m][j])
//					{
//						flag_row = 0;
//						break;
//					}
//				}
//			}
//			if (flag_col&&flag_row)
//			{
//				printf("%d %d\n", i, j);
//				return 0;
//			}
//		}
//	}
//	printf("NONE\n");
//	return 0;
//}

