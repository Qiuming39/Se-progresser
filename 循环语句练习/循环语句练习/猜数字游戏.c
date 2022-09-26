#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
//写一个猜数字游戏
//1.自动产生一个1-100的数
//2.猜数字 //分支语句，if, if else, else//可以再加一个错误的值
//  a.猜对了，恭喜你，游戏结束
//  b.猜错了，会告诉猜大了，猜小了，继续猜，直到猜对。
//3.这个游戏可以一直玩，除非退出游戏
//

//void menu()
//{
//	printf("***********************\n");
//	printf("*********1.play********\n");
//	printf("*********2.exit********\n");
//	printf("***********************\n");
//}
//void game()
//{
//	//猜数字游戏的实现
//	int ret = rand()%101;//rand()函数返回了一个0-32767（7FFFF）的数字，但不够随机//%100
//	int guess = 0;
//	while (1)
//	{
//
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		system("cls");
//		if (guess < ret)
//			printf("小了");
//		else if (guess > ret)
//			printf("大了");
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//需要一个一直变化的值//引入时间戳概念
//
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			system("cls");
//			printf("猜数字");
//			game();
//			break;
//		case 2:
//			system("cls");
//			printf("退出游戏");
//			break;
//		default:
//			system("cls");
//			menu();
//			printf("重新选择");
//
//			break;
//		}
//
//	} while(input);
//
//	return 0;
//}