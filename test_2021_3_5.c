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
//double fac(int n);    //����һ���׳˺��� 
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

//�����ո��һֱ�����ߣ�ֱ�������ı����ַ�...
//�����ı��ַ����õ���������һȻ��һֱ�����ߣ�ֱ�������ո�...
//����'\0'ͳ�ƽ���
//#include<stdio.h>
//
//int main()
//{
//	char ch[1000] = { 0 };//���Ҫͳ�Ƶ��ı�
//	gets(ch);//���пո�����룬������scanf
//	int flag = 0;
//	int word_num = 0;//ͳ���ı��е��ʵ�����
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

//˼·��
//��Ҫ�����Ԫ���ȷŵ�ԭ��������һ��λ��
//�Ը������������õ��ǿ�������

//#include<stdio.h>
//#include<stdlib.h>//ʹ��qsort����Ҫ�����ͷ�ļ�
//
////�Զ���ıȽ����������ĺ���
//int cmp_int(const void* num1, const void* num2)
//{
//	return *((int*)num1) > *((int*)num2) ? 1 : -1;
//}
//
//int main()
//{
//	//����ԭ�����Ԫ�ظ���N
//	int N = 0;
//	scanf("%d", &N);
//	//����N�Ĵ�С����̬����һ��N+1������Ԫ�صĿռ�
//	int* p = NULL;
//	p = (int*)malloc((N + 1) * sizeof(int));
//	if (p == NULL)//����Ƿ񿪱ٳɹ�
//	{
//		printf("��̬�����ڴ�ʧ��\n");
//		exit(-1);
//	}
//	//��ԭ�����Ԫ�غ�Ҫ�������һ��Ԫ�طŵ���̬���ٵĿռ���
//	int i = 0;
//	for (i = 0; i < N+1; i++)
//	{
//		scanf("%d", &p[i]);
//	}
//	//�Ըÿռ��N+1��Ԫ�ؿ�������
//	qsort(p, N + 1, sizeof(int), cmp_int);
//	//��ӡ����֮���Ԫ��
//	for (i = 0; i < N + 1; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//�ͷŶ�̬���ٵĿռ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//˼·��
//�Ȱѵ�һ�����������Ϊ������max_num
//���������������������Ƚ��������͸���max_num��ֵ�ͼ�¼��������±�max_flag

//#include<stdio.h>
//
//int main()
//{
//	//���������Ԫ�ظ���
//	int n = 0;
//	scanf("%d", &n);
//	int max_num = 0;
//	int max_flag = 0;
//	//������ĵ�һ������Ϊ���ֵmax_num
//	scanf("%d", &max_num);
//	//��max_num�ͽ�������������Ƚϣ�����������ֵ���±�
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
//	//������������ֵ�������±�
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
//		printf("��̬�����ڴ�ʧ��\n");
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