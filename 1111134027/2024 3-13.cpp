﻿// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main()
{
	int lv, c, t;
	cout << "輸入綜合所得凈額";
	cin >> c;
	if (c <= 560000)
	{
		lv = 5;
		t = c * 0.5;

	}
	else if (c <= 1260000 && c >= 560001)
	{
		lv = 12;
		t = c * 0.12 - 39200;

	}
	else if (c <= 1260000 && c >= 560001)
	{

		lv = 20;
		t = c * 0.12 - 140000;

	}
	else if (c <= 1260000 && c >= 560001)
	{

		lv = 30;
		t = c * 0.3 - 392000;
	}
	else if (c <= 1260000 && c >= 560001)
	{
		lv = 40;
		t = c * 0.4 - 864000;
	}

	cout << "級距" << lv << "%\n";
	cout << "應納稅額" << t;

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
