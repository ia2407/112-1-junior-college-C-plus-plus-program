﻿// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<stdio.h>

int main()
{
    int v1,v2,sum,j,ch,cu,u;
    v1 = 9;
    v2 = 6;
    sum = v1 + v2;
    j = v1 - v2;
    ch = v1 * v2;
    cu = v1 / v2;
    u = v1 % v2;

    printf("\n%d 與 %d 的和是= %d", v1, v2, sum);
    printf("\n%d 與 %d 的減是= %d", v1, v2, j);
    printf("\n%d 與 %d 的積是= %d", v1, v2, ch);
    printf("\n%d 與 %d 的商是= %d", v1, v2, cu);
    printf("\n%d 與 %d 的餘數是= %d", v1, v2,u);
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
