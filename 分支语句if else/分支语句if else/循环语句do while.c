#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//do while ��ִ�к��ж�//�ص���ѭ�����ٻ�ִ��һ��

int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;//��������
		    //break;//����ѭ��
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}