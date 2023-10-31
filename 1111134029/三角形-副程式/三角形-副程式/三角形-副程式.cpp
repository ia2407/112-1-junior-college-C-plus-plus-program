// 三角形-副程式.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<stdio.h>
void y(int a);
void y(int a)
{



	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void y2(int a);
void y2(int a)
{

	for (int i = a; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void y3(int a);
void y3(int a)
{

	for (int i = 1; i <= a; i++)
	{

		for (int j = 1; j <= a - i; j++)
		{
			printf(" ");
		}

		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}

		printf("\n");
	}
}
void y4(int a);
void y4(int a)
{

	for (int i = a; i >= 1; i--)
	{
		for (int j = 1; j <= a - i; j++)
		{
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int h = 0;

	printf("請輸入高\n");
	scanf_s("%d", &h);
	y(h);

	printf("\n");
	y2(h);

	
	printf("\n");
	y3(h);

	
	printf("\n");
	y4(h);
	return 0;
}

