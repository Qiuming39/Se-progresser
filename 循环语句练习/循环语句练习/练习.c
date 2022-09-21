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
int main()
{
	int i = 1;
	int n = 0;
	int a = 1;
	int k = 0;
	for (n = 1; n <= 3; n++)
	{
		for (i; i <= n; i++)
		{
			a = a * i;
		}
		k = k + a;
	}
	printf("%d", k);
	return 0;
}
int main()
{
	int n = 0;
	int a = 1;
	int k = 0;
	for (n = 1; n <= 3; n++)
	{
		
		a = a * n;//a不还原初值，当n=3时，a = a x 3 = 1x2x3
		k = k + a;
	}
	printf("%d", k);
	return 0;
}