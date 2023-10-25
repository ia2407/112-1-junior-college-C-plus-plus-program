// 10.18-D.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>


#include<stdio.h>

char A(int a) //A
{
        for (int c = 1;c <= a; c++)  //行數
    {
        for (int i = 1; i <= c; i++) //**數
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
char  B(int a)   //B
{
      for (int c = 1; c <= a; c++)  //行數
     {
            for (int i = c; i <= a; i++)  //**數
            {
                printf("*");
            }
            printf("\n");
     }
   return 0;
}
char  C(int a)  //C
{
        for (int c = 1; c <= a; c++)  //行數
    {
        for (int z = 1; z <= a-c; z++) printf(" "); //空格數
        for (int i = 1; i <= c; i++) printf("*");  //**數
        printf("\n");
    }
    return 0;
}
char  D(int a)   //D
{
       for (int c = 0; c <= a; c++)  //行數
    {
        for (int z= 1; z <= c; z++) printf(" ");   //空格數
        for (int i = 1; i <= a-c; i++) printf("*");  //**數
        printf("\n");
    }
    return 0;
}

int main()
{
    int a;
    printf("輸入行數");
    scanf_s("%d", &a);
    A(a);  //傳入
    printf("輸入行數");
    scanf_s("%d", &a);
    B(a);  //傳入
    printf("輸入行數");
    scanf_s("%d", &a);
    C(a);  //傳入
    printf("輸入行數");
    scanf_s("%d", &a);
    D(a);  //傳入
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
