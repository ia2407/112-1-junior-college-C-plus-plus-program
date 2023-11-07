// 1111134016.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

#include<stdio.h>
int r1();//原型宣告
int r2();
int r3();
int r4();

int r1(int i, int j) //函數定義
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
int r2(int i, int j)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = i; j <= 9; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
int r3(int i, int j)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int n = 0; n <= 9 - i; n++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
int r4(int i, int j)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 1; j <= 9 - i; j++) {
			printf(" ");
		}
		for (int n = 0; n <= i; n++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, k = 0;
	r1(a, b);//函數呼叫
	printf("\n");
	r2(c, d);
	printf("\n");
	r3(e, f);
	printf("\n");
	r4(g, k);

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
