﻿// 1111134011.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
int main()
{
	int X1, X2, A, B, C, D, E;
	X1 = 5;
	X2 = 6;
	A = X1 + X2;
	B = X1 - X2;
	C = X1 * X2;
	D = X1 / X2;
	E = X1 % X2;
	printf("\"第一個C語言程式好刺激好刺激~\"");
	printf("\n%d與%d相加=%d",X1,X2,A);
	printf("\n%d與%d相減=%d", X1, X2, B);
	printf("\n%d與%d相乘=%d", X1, X2, C);
	printf("\n%d與%d相除=%d", X1, X2, D);
	printf("\n%d與%d取餘數=%d", X1, X2, E);
	
	
	
	// std::cout << "Hello World!\n";
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
