#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//for�����Ƿֺ�;���Ƕ���,//for(��ʼ��;�жϲ��֣���������){}
//break��whileһ��//continueֻ��ȥ��һ��ֵ��



//���1-10
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);//û��5������1-10����
//	}
//	return 0;
//}

//������forѭ�������޸�ѭ����������ֹforѭ��ʧ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//		i = 5;//��ѭ��
//	}
//	return 0;
//}
//����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//i = 0; i < 10//������i = 0: i <= 9//�ɶ��Ը���
//	{
//		printf("d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	for (;;)//������ʡ��//ʡ�����жϲ��֣�����ѭ������ʱ�жϲ��ֺ�Ϊ�棩
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
//			printf("hehe\n");//9��
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
//			printf("hehe\n");//3��
//		}
//	}
//	return 0;
//}

//˫��������
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//++x:�ȼ�һ����x//x++����x�ټ�1
//	{
//		printf("%d,%d\n", x, y);//0,0��1,1
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0,k = 0; k = 0; k++)//һ�ζ�ûִ�У���Ϊk����ֵΪ0�� 0Ϊ�٣���ִ��
//		k++;
//	return 0;
//}