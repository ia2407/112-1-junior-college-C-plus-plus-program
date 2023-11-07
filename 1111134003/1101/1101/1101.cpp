// 1101.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//


#include <stdio.h>
#include <math.h>

int myFunc(int x);
double myFunc2(int z);
double myFunc3(int x, int z);


int myFunc(int x) {
    int a = 1;
    int a2 = 1;
    for (a = 1; a <= x; a++) {
        a2 = (a2 + x);
    }
    return a2;
}
int main() {
    int x = 1;
    int y = 1;
    int z = 1;
    int Item;
    printf("輸入一個整數");
    scanf_s("%d", &x);
    printf("要執行幾項");
    scanf_s("%d", &y);
    printf("第三題exp的次方直方值");
    scanf_s("", & Item);
    printf("%d", myFunc(x));
    printf("%f", myFunc2(y));
    printf("%f", myFunc3(z, y));
    return 0;
}
double myFunc2(int z) {
    int b = 1;
    double b2 = 1.0;
    for (b = 1; b <= z; b++) {
        b2 = (b2 + (1 / myFunc(b)));
    }
    return b2;
}
double myFunc3(int x, int z) {
    int c = 1;
    double b2 = 1.0;
    double c2 = 1.0;
    for (c = 1; c <= z; c++) {
        b2 = (b2 + ((pow(z, c)) / myFunc(c)));
    }
    return b2;
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
