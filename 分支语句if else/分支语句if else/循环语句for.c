#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//for里面是分号;不是逗号,//for(初始化;判断部分；调整部分){}
//break和while一样//continue只会去掉一个值。



//输出1-10
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);//没有5，其他1-10都有
//	}
//	return 0;
//}

//不可在for循环体内修改循环变量，防止for循环失控
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//		i = 5;//死循环
//	}
//	return 0;
//}
//建议for语句的循环控制变量的取值采用“前闭后开区间”写法
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//i = 0; i < 10//而不是i = 0: i <= 9//可读性更好
//	{
//		printf("d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	for (;;)//都可以省略//省略了判断部分，会死循环（此时判断部分恒为真）
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n");//9个
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");//3个
//		}
//	}
//	return 0;
//}

//双变量控制
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//++x:先加一再算x//x++先算x再加1
//	{
//		printf("%d,%d\n", x, y);//0,0和1,1
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0,k = 0; k = 0; k++)//一次都没执行，因为k被赋值为0， 0为假，不执行
//		k++;
//	return 0;
//}