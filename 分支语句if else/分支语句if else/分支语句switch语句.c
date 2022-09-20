#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//switch用于多分支语句
//输入1，输出星期一//输入2，输出星期二//输入3，输出星期三//输入4，输出星期四//输入5,输出星期五//输入6,输出星期六//输入7，输出星期日
//switch (整型表达式)
//{
//	语句项；//case语句项
//		//如：case 整型常量表达式：//必须是整型常量//字符也可以，字符也属于整型的一种，因为底层用的是ascall码值
//		//    语句；
//      //    break;//跳出，停止//不一定加 看情况 agir selon l'occusion
//}
//switch允许嵌套使用



//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;//跳出，停止
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");	
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}

//1-5 工作日， 6-7 工作日
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}