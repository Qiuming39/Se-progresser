#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//C语言是结构化的程序设计语言
//所有事情都可以抽象成三种结构
//顺序结构
//选择结构
//循环结构


//分支语句//if 语句//switch语句
//int main()//用分号隔开的句子就叫语句
//{
//
//	printf("hehe\n");
//	;//空语句
//	return 0;
//}

//if语句
//if{} else if{}  else{}
//int main()
//{
//	int age = 20;

	//if (age >= 18)
	//	printf("成年\n");
	//else
	//{
	//	printf("未成年\n");
	//	printf("不能谈恋爱\n");//成年
	//}
	//else
	//   printf("未成年\n");
	//   printf("不能谈恋爱\n"); //成年 不能谈恋爱
	
     //int age = 60;
	 //  if (age < 18)
	 //     printf("少年\n");
	 // else if (age>=18 && age<26)//这里也可以直接写 else if(age < 26)
	 //	    printf("青年\n");
	 // else if (18 <= age < 26) //没有代码错误，但逻辑错误
	 //	    printf("青年\n");
	    
//	return 0;
//}

//悬空else
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("haha\n");
//	else//else和他最近的if匹配，即是if (b == 2)//在无大括号情况下
//			printf("haha\n");
//	return 0;
//}

//代码风格 - 《高质量C++/C的编程指南》
//int test()//坏风格
//{
//	if (0)
//		return 0;
//
//	return 1;
//}
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int num = 3;
//	//if (num = 5)//hehe
//	//if(5 = num)//报错，运行不了 //当两个整型变量比较时，把常量放在左边//好风格
//	if (5 == num)
//		printf("hehe\n");
//	return 0;
//}


//判断一个数是不是奇数
//int main()
//{
//	int num = 15;
//	if (1 == num % 2)
//		printf("奇数\n");
//
//	return 0;
//}

//输出1-100之间的奇数
//int main()
//{
//	int num1 = 1;
//	while (100 >= num1)
//	{
//		if (1 == num1 % 2)
//		{
//			printf("%d\n", num1);
//		}
//		num1++;
//	}
//	
//	//for
//	int i = 0;
//	for (i = 1; 100 >= i; i++)//i += 2
//	{
//		if (1 == i % 2)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
