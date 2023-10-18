// 10.18-D.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

int main()   //D
{
    int count = 0;
    for (count = 10; count > 0; count--)
    {
        for (int i = 1; i <= 11 - count; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    int count1 = 0;
    for (count1 = 10; count1 > 0; count1--)
    {
        for (int i = 1; i <= count1; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    int count2 = 0;
    for (count2 = 10; count2 > 0; count2--)
    {
        for (int a = 1; a <= 10 - count2; a++) printf(" ");
        for (int i = 1; i <= count2; i++) printf("*");
        printf("\n");
    }
    
    int count3 = 0;
    for (count3 = 10; count3 > 0; count3--)
    {
        for (int a = 1; a <= count3; a++) printf(" ");
        for (int i = 1; i <= 11 - count3; i++) printf("*");
        printf("\n");
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
