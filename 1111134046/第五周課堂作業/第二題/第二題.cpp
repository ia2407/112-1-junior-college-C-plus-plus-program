﻿// 第二題.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <iostream>

// function main begins program execution
int main(void)
{
    double amount=0; // amount on deposit
    float aim = 0;
    scanf_s("%f", &aim);
    double principal = 1000.0; // starting principal
    double rate = .05; // annual interest rate
    unsigned int year=0; // year counter

    // output table column heads
    printf("%4s%21s\n", "Year", "Amount on deposit");
    
    // calculate amount on deposit for each of ten years
    while (amount<aim)
    {
        year++;
        amount = principal * pow(1.0 + rate, year);
        printf("%4u%21.2f\n", year, amount);
    }
        // calculate new amount for specified year     
        // output one table row       
} // end function main

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
