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

//��whileѭ���У�break�������õ���ֹѭ����ֻҪbreak��ִ�У�����Զ�ز�����
//��whileѭ���У�continue����������������ѭ��continue����Ĵ��룬ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
//int main()
//{
//	int i = 1;
//	while (10 >= i)
//	{
//		if (5 == i)
//			//{
//			//	break;//��whileѭ���У�break�������õ���ֹѭ����ֻҪbreak��ִ�У�����Զ�ز�����
//			//}
//		{
//			continue;//��ѭ��//����continue����Ĵ��룬��ֱ�ӻص�while��λ��
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//getcahr()�����Ƕ�ȡһ���ַ�//����������int[int getchar(void)]//�ַ���������ascll��ֵ�洢�ģ�ascll��������
//stdin ��׼���� - ������//EOF - end of file - �ļ��Ľ�����־��-1��
//int main()
//{
//	int ch = getchar();
//	printf("%c\n", ch);//
//	putchar(ch);//���һ���ַ�
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//ctrl + z - getchar()������EOF����ȡ����
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
//	printf("����������:>");
//	scanf("%s", password);//123456
//	//����������������Ԫ�����ڵĵ�ַ������Ҫȡ��ַ&
//	//scanf_sҪ��������char�����ַ�������ʱ�������󳤶���Ϊ����//���������scanf_s("%s", password, 20)
//	printf("��ȷ�����루Y/N��:>");
//	//��������
//	//getchar();//����'/n'//scanf�Զ���ȡ���ո�֮ǰ
//	//���������ж���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();//�س��ᴥ��scanf��getchar
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//	return 0;
//}

//ֻ������֣�ȥ������֮��ĳɷ�
// 
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != 0)
//	{
//		if (ch < '0' || ch > '9')//�Ƚ��ַ��Ƚϵ�������ascll��ֵ//��ascll�����С���ַ�'0'�����ַ�'9'
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}



//�������жϿ򣬾����Ǵ����