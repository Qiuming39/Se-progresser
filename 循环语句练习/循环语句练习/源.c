#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
//编写代码，演示多个字符从两端移动往中间汇聚
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
// //sizeof得减2因为有\0//如果数组初始化时候没有把填大小如arr[],sizeof会把\0算进去（仅仅针对为字符串数组的时候）
//	int right = strlen(arr1) - 1;//求字符串长度
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//单位是ms,睡眠一秒
//		system("cls");//清空屏幕
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

//只能输入三次密码




//int main()
//{
//	int i = 0;
//	char password[20];
//	char key[] = "123456";
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码");
//		scanf("%s", password);
//		if (password == key;//两个字符串比较不能用==应该用strcmp
//		if (strcmp(password, key) == 0)
//		{
//			printf( "登陆成功" );
//			break;
//		}
//		else
//		{
//			printf("密码输入错误\n");
//		}
//	}
//	if(i==3)
//	{
//		printf("三次密码全错，退出程序");
//	}
//	
//	return 0;
//}