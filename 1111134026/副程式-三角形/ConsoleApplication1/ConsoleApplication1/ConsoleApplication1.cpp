// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<stdio.h>
void play(int a);
void play(int a)
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
void play2(int a);
void play2(int a)
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
void play3(int a);
void play3(int a)
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
	void play4(int a);
	void play4(int a)
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
		//左正三角形
		printf("請輸入高\n");
		scanf_s("%d", &h);
		play(h);
		//左倒三角形
		printf("\n");
		play2(h);

		//右正
		printf("\n");
		play3(h);

		//右倒
		printf("\n");
		play4(h);
		return 0;
	}

