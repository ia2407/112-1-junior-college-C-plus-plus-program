// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdio.h>
#include <math.h>

double myFunc(double x);
double myFunc2(double x);
double myFunc3(double x, double y);


int main() {
    int myVar = 1;
    int myVar2 = 1;
    int myVar3 = 1;
    printf("階層");
    scanf_s("%d", &myVar);
    printf("1/階層");
    scanf_s("%d", &myVar2);
    printf("x次方/階層");
    scanf_s("%d", &myVar3);
    printf("%lf", myFunc(myVar));
    printf("%lf", myFunc2(myVar2));
    printf("%lf", myFunc3(myVar2, myVar3));
    return 0;
}
double myFunc(double x) {
    int count = 1;
    int reault = 1;
    for (count = 1; count <= x; count++) {
        reault = (reault * count);
    }
    return reault;
}
double myFunc2(double x) {
    int count2 = 1;
    double exp = 1.0;
    for (count2 = 1; count2 <= x; count2++) {
        exp = (exp + (1 / myFunc(count2)));
    }
    return exp;
}
double myFunc3(double x, double y) {
    int count3 = 1;
    double exp2 = 1.0;
    for (count3 = 1; count3 <= x; count3++) {
        exp2 = (exp2 + ((pow(x, count3)) / myFunc(x)));
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
