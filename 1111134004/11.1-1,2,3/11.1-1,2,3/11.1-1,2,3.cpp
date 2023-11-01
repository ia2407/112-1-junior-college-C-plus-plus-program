// 11.1-1,2,3.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <math.h>

double fact1(int x);
double exponen(int z);
double max(int z, int i);


int main() {
    int f1 = 1;
    int f2 = 1;
    int f3 = 1;
    printf("輸入一個階層要的數");
    scanf_s("%d", &f1);
    printf("輸入項數");
    scanf_s("%d", &f2);
    printf("輸入變數值");
    scanf_s("%d", &f3);
    printf("%lf\n", fact1(f1));
    printf("%lf\n", exponen(f2));
    printf("%lf", max(f2, f3));
    return 0;
}double fact1(int x) {
    int count = 1;
    int result = 1;
    for (count = 1; count<= x; count++) {
        result = (result * count);
    }
    return result;
}
double exponen(int z) {
    int count2 = 1;
    double result2 = 1.0;
    for (count2 = 1; count2 <= z; count2++) {
        result2 = (result2 + (1 / fact1(count2)));
    }
    return result2;
}
double max(int z, int i) {
    int count3 = 1;
    double result3 = 1.0;
    for (count3 = 1; count3 <= z; count3++) {
        result3 = (result3 + ((pow(i, count3)) / fact1(z)));
    }
    return result3;
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
