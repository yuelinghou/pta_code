#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////˼·��
////������������
////arr[1000]������������
////count[10]ͳ�ƶ�Ӧ0-9���ֳ��ֵĴ���
////���count[10]���������Ԫ�ؾ��������ִ�������Ӧ�±�Ϊ�������ĸ�λ����
//int main() 
//{
//	//����NΪҪ�������ֵĸ���
//	int N = 0;
//	scanf("%d", &N);
//	//����N������
//	int arr[1000] = { 0 };
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int count[10] = { 0 };//count[10]ͳ�ƶ�Ӧ0 - 9���ֳ��ֵĴ���
//	int much_time = count[0];//much_timeΪ����������ֵĴ�������Ĭ��Ϊ����0���ֵĴ���
//	//����������ֽ���0-9ÿ�����ֳ��ִ�����ͳ��
//	for (int i = 0; i < N; i++)
//	{
//		//��������Ϊ0��������
//		if (arr[i]==0)
//		{
//			count[0]++;
//		}
//		//�������ַ�0�����
//		else
//		{
//			while (arr[i])
//			{
//				int tmp = arr[i]%10;
//				count[tmp]++;
//				arr[i] /= 10;
//			}
//		}
//	}
//	//ͳ�Ƴ���������ֵĴ���
//	for (int i = 1; i < 10; i++)
//	{
//		if (count[i] > much_time)
//		{
//			much_time = count[i];
//		}
//	}
//	//�ȴ�ӡ�����ֵĴ���
//	printf("%d:", much_time);
//	//��ӡ������������
//	for (int i = 0; i < 10; i++)
//	{
//		if (count[i] == much_time)
//		{
//			printf(" %d", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int arr[4] = { 0 };
//	arr[0] = (num / 1000 + 9) % 10;
//	arr[1] = (num / 100 + 9) % 10;
//	arr[2] = (num / 10 + 9) % 10;
//	arr[3] = (num / 1 + 9) % 10;
//	printf("The encrypted number is %d%d%d%d\n", arr[2], arr[3], arr[0], arr[1]);
//	return 0;
//}

//#include<stdio.h>
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
//	int max_flag = 0;
//	int max_num = arr[0];
//	for (int i = 1; i < N; i++)
//	{
//		if (arr[i] > max_num)
//		{
//			max_flag = i;
//			max_num = arr[i];
//		}
//	}
//	int tmp_num = arr[N-1];
//	arr[N - 1] = max_num;
//	arr[max_flag] = tmp_num;
//	int min_flag = 0;
//	int min_num = arr[0];
//	for (int i = 1; i < N; i++)
//	{
//		if (arr[i] < min_num)
//		{
//			min_flag = i;
//			min_num = arr[i];
//		}
//	}
//	tmp_num = arr[0];
//	arr[0] = min_num;
//	arr[min_flag] = tmp_num;
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}