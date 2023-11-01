// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
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


// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
