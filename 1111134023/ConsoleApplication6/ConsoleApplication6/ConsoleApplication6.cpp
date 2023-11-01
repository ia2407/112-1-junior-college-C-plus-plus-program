// ConsoleApplication6.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <math.h>
#include <stdio.h>

double fast(double unnamed);
double exponen(double z);


int main() {
    int myVar = 1;
    int z = 1;
    int z2 = 1;
    printf("");
    scanf_s("%d", &myVar);
    printf("");
    scanf_s("%d", &z);
    printf("");
    scanf_s("%d", &z2);
    printf("%lf\n", fast(myVar));
    printf("%lf\n", exponen(z));
    return 0;
}
double fast(double unnamed) 
{
    int count = 1;
    int result = 1;
    for (count = 1; count <= unnamed; count++) 
    {
        result = (result * count);
    }
    return result;
}
double exponen(double z) {
    int count2 = 1;
    double exp = 1.0;
    for (count2 = 1; count2 <= z; count2++) {
        exp = (exp + (1 / fast(count2)));
    }
    return count2;
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
