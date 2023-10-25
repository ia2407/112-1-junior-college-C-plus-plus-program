// 印星星.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
int a, b,c,d;

#include <iostream>
#include <stdio.h>
void x(int b)
{
		for (int i = 1; i <= b; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void y(int b)
{
		for (int i = b; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void z(int b)
{
		for (int i = 1; i <= b; i++)
	{
		// 空格
		for (int j = 1; j <= b - i; j++) //第二個 for 跑完才跑第三for
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
void w(int b)
{

	for (int i = b; i >= 1; i--)
	{
		for (int j = 1; j <= b - i; j++)
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
	printf("請輸入高\n");
	scanf_s("%d", &d);
	x(d);
	y(d);
	z(d);
	w(d);
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
