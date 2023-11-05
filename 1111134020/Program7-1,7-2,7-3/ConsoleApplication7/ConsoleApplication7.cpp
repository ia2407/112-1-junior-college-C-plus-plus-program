// ConsoleApplication7.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <math.h>
#include<stdio.h>
int fact(int x);
double exponen(int z);
double exponen2(int x, int z);

int main()
{
    int myVar = 1;
    int item = 1;
   int m = 1;
    printf("請輸入一個整數:");
    scanf_s("%d", &myVar);
    printf("請輸入要到第幾項:");
    scanf_s("%d", &item);
    printf("請輸入e^值:");
    scanf_s("%d", &m);

    printf("%d 的階乘是 %d\n", myVar, fact(myVar));
    printf("到第%d項的ex近似值是 %lf\n", item, exponen(item));
    printf("e^%d近似值是 %lf\n", m, exponen2(m,item));
}
int fact(int x)
{
   int result = 1;
   for (int count = 1; count <= x; count++) 
   {
        result =result *count;
   }
   return result;
}
double exponen(int z)
{
   double exp=1.0;
    for (int count2= 1; count2 <= z; count2++)
    {
        exp= exp + 1.0 / fact(count2);
    }
    return exp;
}
double exponen2(int x,int z)
{
    double exp2 =1;
    
    for (int count2 = 1; count2 <= z; count2++)
    {
        exp2 = exp2 +pow(x,count2)  / fact(count2);
    }
    return exp2;
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
