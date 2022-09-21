#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//do while 先执行后判断//特点是循环至少会执行一次

int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;//跳过代码
		    //break;//跳出循环
		printf("%d ", i);
		i++;
	} while (i <= 10);
	return 0;
}