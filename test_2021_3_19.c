#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////˼·��
////�ȴ�ӡÿ�е�һ����������������տո�+������ʽ��ӡ
//
//int main()
//{
//	//���ݵ�����
//	int N = 0;
//	scanf("%d", &N);
//	int arr[10] = { 0 };
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�ȴ�ӡ��һ�еĵ�һ����
//	printf("%d", arr[1] - arr[0]);
//	int time = 1;//ͳ�Ƶ�ǰһ���м�����
//	//��ӡ�������
//	for (int i = 1; i < N - 1; i++)
//	{
//		printf(" %d", arr[i + 1] - arr[i]);
//		time++;
//		//һ�����������Ļ��ͻ���
//		if (time == 3)
//		{
//			printf("\n");
//			//�����¿�ʼ�ȴ�ӡ��һ�еĵ�һ����
//			if (i != N - 2)
//			{
//				printf("%d", arr[i + 2] - arr[i + 1]);
//				time = 1;
//				i++;
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
////˼·��
////�����������鶼������������������
////������һ������������κ�����һ��������������Ƚϣ�ͳ�Ƹ������ֵĴ���
//
//int main()
//{
//	int N = 0;
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int max_num = 0;
//	int max_time = 0;
//	int tmp_time = 0;
//	//���ݵ�����
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr1[i]);
//		arr2[i] = arr1[i];
//	}
//	//ͳ��
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				tmp_time++;
//			}
//		}
//		if (!i)//i==0ʱ���Ȱѳ��������������ͳ��ִ�����ֵΪ����ĵ�һ��Ԫ�أ��˹���ִֻ��һ��
//		{
//			max_num = arr1[i];
//			max_time = tmp_time;
//		}
//		else//�ӵڶ�������ʼ�����αȽ�
//		{
//			if (tmp_time > max_time)
//			{
//				max_num = arr1[i];
//				max_time = tmp_time;
//			}
//		}
//		//ÿ�����Ƚ����֮��Ҫ��tmp_time��Ϊ0
//		tmp_time = 0;
//	}
//	printf("%d %d\n", max_num, max_time);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int row = 0;
//	int col = 0;
//	scanf("%d %d", &row, &col);
//	int arr[6][6] = {0};
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < row; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < col; j++)
//		{
//			sum += arr[i][j];
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (!(i + j == n - 1 || i == n - 1 || j == n - 1))
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}