// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
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

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
