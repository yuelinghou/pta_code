#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
////˼·��
////���������໥�Ƚϣ��Ѹ��������ﲻ������һ���������Ԫ���ҳ����ŵ�����һ��������
////����ڶ�����һ���������Ԫ��ȥ���������
//int main()
//{
//	//��������
//	int a[20] = { 0 };//��ŵ�һ����������
//	int b[20] = { 0 };//��ŵڶ�����������
//	int c[40] = { 0 };//��Ų��ǹ��е�Ԫ��
//	//�����һ����
//	int num1 = 0;
//	scanf("%d", &num1);
//	for (int i = 0; i < num1; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	//����ڶ�����
//	int num2 = 0;
//	scanf("%d", &num2);
//	for (int i = 0; i < num2; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	//�ҳ����ǹ��е�Ԫ��
//	//1.a�����еģ�b����û�е�
//	int k = 0;
//	for (int i = 0; i < num1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num2; j++)
//		{
//			if (a[i] == b[j])
//			{
//				break;
//			}
//		}
//		if (j == num2)
//		{
//			c[k++] = a[i];
//		}
//	}
//	//2.b�����еģ�a����û�е�
//	for (int i = 0; i < num2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num1; j++)
//		{
//			if (b[i] == a[j])
//			{
//				break;
//			}
//		}
//		if (j == num1)
//		{
//			c[k++] = b[i];
//		}
//	}
//	//ȥ�غ��ӡ����
//	printf("%d", c[0]);//��ĿҪ��������пո������ȴ�ӡ��һ������������ĺ���İ��ա��ո�+%d����ӡ
//	for (int i = 1; i < k; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (c[i] == c[j])
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf(" %d", c[i]);
//		}
//	}
//	return 0;
//}

#include<stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);
	int arr[1000] = { 0 };
	int i = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	int count[10] = { 0 };
	for (i = 0; i < N; i++)
	{
		while (i > 0)
		{

		}
	}
	return 0;
}