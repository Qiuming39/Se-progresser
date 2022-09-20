#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 1;
//	while (10 >= i)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//在while循环中，break用于永久地终止循环，只要break被执行，就永远回不来啦
//在while循环中，continue的作用是跳过本次循环continue后面的代码，直接去判断部分，看是否进行下一次循环
//int main()
//{
//	int i = 1;
//	while (10 >= i)
//	{
//		if (5 == i)
//			//{
//			//	break;//在while循环中，break用于永久地终止循环，只要break被执行，就永远回不来啦
//			//}
//		{
//			continue;//死循环//跳过continue后面的代码，会直接回到while的位置
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//getcahr()功能是读取一个字符//返回类型是int[int getchar(void)]//字符本质是由ascll码值存储的，ascll码是整型
//stdin 标准输入 - 即键盘//EOF - end of file - 文件的结束标志（-1）
//int main()
//{
//	int ch = getchar();
//	printf("%c\n", ch);//
//	putchar(ch);//输出一个字符
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//ctrl + z - getchar()读到了EOF，读取结束
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	//
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//123456
//	//数组名代表数组首元素所在的地址，不需要取地址&
//	//scanf_s要求在输入char或者字符串数组时，添加最大长度作为参数//这里得输入scanf_s("%s", password, 20)
//	printf("请确认密码（Y/N）:>");
//	//清理缓冲区
//	//getchar();//处理'/n'//scanf自动读取到空格之前
//	//清理缓冲区中多个字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();//回车会触发scanf和getchar
//	if (ch == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
//}

//只输出数字，去掉数字之外的成分
// 
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != 0)
//	{
//		if (ch < '0' || ch > '9')//比较字符比较的是它的ascll码值//在ascll码表上小于字符'0'大于字符'9'
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}



//菱形是判断框，矩形是处理框