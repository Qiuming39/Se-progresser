#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
//��д���룬��ʾ����ַ��������ƶ����м���
//welcome to bit!!!!!!!!!!!
//w#######################!
//we#####################!!
//wel###################!!!
//...
//welcome to bit!!!!!!!!!!!
//int main()
//{
//	char arr1[] = { "welcome to bit!" };
//	char arr2[] = { "###############" };
//	int left = 0;
//	//int right = (sizeof arr1 / sizeof arr1[0]) - 2; 
// //sizeof�ü�2��Ϊ��\0//��������ʼ��ʱ��û�а����С��arr[],sizeof���\0���ȥ���������Ϊ�ַ��������ʱ��
//	int right = strlen(arr1) - 1;//���ַ�������
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��λ��ms,˯��һ��
//		system("cls");//�����Ļ
//		left += 1;
//		right -= 1;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = {1,2,3};
//	char arr2[] = { "scsa" };//
//	int len = sizeof arr2 / sizeof arr2[0] - 2;
//	char t = arr2[len];
//	printf("%d\n", sizeof arr1);
//	printf("%0ld\n", sizeof arr2);
//	printf("%d\n", len);
//	printf("%s\n", t);
//	return 0;
//}

//ֻ��������������




//int main()
//{
//	int i = 0;
//	char password[20];
//	char key[] = "123456";
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������");
//		scanf("%s", password);
//		if (password == key;//�����ַ����Ƚϲ�����==Ӧ����strcmp
//		if (strcmp(password, key) == 0)
//		{
//			printf( "��½�ɹ�" );
//			break;
//		}
//		else
//		{
//			printf("�����������\n");
//		}
//	}
//	if(i==3)
//	{
//		printf("��������ȫ���˳�����");
//	}
//	
//	return 0;
//}