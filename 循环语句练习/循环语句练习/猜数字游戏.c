#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
//дһ����������Ϸ
//1.�Զ�����һ��1-100����
//2.������ //��֧��䣬if, if else, else//�����ټ�һ�������ֵ
//  a.�¶��ˣ���ϲ�㣬��Ϸ����
//  b.�´��ˣ�����߲´��ˣ���С�ˣ������£�ֱ���¶ԡ�
//3.�����Ϸ����һֱ�棬�����˳���Ϸ
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
//	//��������Ϸ��ʵ��
//	int ret = rand()%101;//rand()����������һ��0-32767��7FFFF�������֣����������//%100
//	int guess = 0;
//	while (1)
//	{
//
//		printf("������֣�");
//		scanf("%d", &guess);
//		system("cls");
//		if (guess < ret)
//			printf("С��");
//		else if (guess > ret)
//			printf("����");
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//��Ҫһ��һֱ�仯��ֵ//����ʱ�������
//
//	do 
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			system("cls");
//			printf("������");
//			game();
//			break;
//		case 2:
//			system("cls");
//			printf("�˳���Ϸ");
//			break;
//		default:
//			system("cls");
//			menu();
//			printf("����ѡ��");
//
//			break;
//		}
//
//	} while(input);
//
//	return 0;
//}