#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int k = 1;
//	while (n > 0)
//	{
//		k = k * n;
//		n = n - 1;
//	}
//	printf("%d", k);
//	return 0;
//}




//int main()
//{
//	int i = 1;
//	int n = 0;
//	int a = 1;
//	int k = 0;
//	for (n=1; n <=3; n++)
//	{
//		a = 1;
//		for (i = 1; i <= n; i++)
//		{
//			a = a * i;
//		}
//		k = k + a;
//	}
//	printf("%d", k);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int a = 1;
//	int k = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		for (i; i <= n; i++)
//		{
//			a = a * i;
//		}
//		k = k + a;
//	}
//	printf("%d", k);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int a = 1;
//	int k = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		
//		a = a * n;//a����ԭ��ֵ����n=3ʱ��a = a x 3 = 1x2x3
//		k = k + a;
//	}
//	printf("%d", k);
//	return 0;
//}




//��һ�����������в���ĳ������n//����������ַ����۰����//Ч�ʷǳ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr������������в���7��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���:%d�ǵ�%d������",k, mid);//midָ�����±꣬7���±�Ϊ6
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}














