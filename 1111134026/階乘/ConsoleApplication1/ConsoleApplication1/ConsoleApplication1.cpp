﻿#include <stdio.h>
int fact();
int fact(int a)
{
    int result = 1;//total
    int count = 1;//1*2*...*%d
    for (count = 1; count <= a; count++)
    {
        result = result * count;
    }
    return result;
}
int main()
{
    int x;
    printf("請輸入值");
    scanf_s("%d", &x);
    fact(x);
    printf("1*2*...*%d=%d", x, fact(x));//前者x為maun ,後者為fact
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
