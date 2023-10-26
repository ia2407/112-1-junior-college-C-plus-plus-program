// 第一題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>


int first(int a)
{
	int i = 1, j = 1, k = 1;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
int second(int a)
{
	int i = 1, j = 1, k = 1;
	for (i = a; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
int third(int a)
{
	int i = 1, j = 1, k = 1;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= a - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
int forth(int a)
{
	int i = 1, j = 1, k = 1;
	for (i = a; i >= 1; i--)
	{
		for (j = 1; j <= a - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	int h = 0;
	printf("輸入高\n");
	scanf_s("%d", &h);
	first(h);
	second(h);
	third(h);
	forth(h);
}
