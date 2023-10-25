// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<stdio.h>
int main()//左正三角形
{
	int height = 10;

	for (int i = 1; i <= height; i++) 
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//第一個`for`循環的目的是控制左正三角形的高度，即控制多個行。
	printf("\n");

	//左倒三角形
	{
		for (int i = height; i >= 1; i--)
		{
			for (int j = 1; j <= i; j++) 
			{
				printf("*");
			}
			printf("\n");
		}
	}
	printf("\n");
	//右正
	{
		for (int i = 1; i <= height; i++)
		{
			// 空格
			for (int j = 1; j <= height - i; j++) 
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

	printf("\n");
	//右倒
	{


		for (int i = height; i >= 1; i--)
		{
			for (int j = 1; j <= height - i; j++)
			{
				printf(" ");
			}
			for (int k = 1; k <= i; k++) {
				printf("*");
			}
			printf("\n");
		}
	}
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
