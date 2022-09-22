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
//		a = a * n;//a不还原初值，当n=3时，a = a x 3 = 1x2x3
//		k = k + a;
//	}
//	printf("%d", k);
//	return 0;
//}




//在一个有序数组中查找某个数字n//有序数组二分法，折半查找//效率非常高
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要查找的数字
//	//在arr这个有序数组中查找7的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
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
//			printf("找到了:%d是第%d个数字",k, mid);//mid指的是下标，7的下标为6
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}














