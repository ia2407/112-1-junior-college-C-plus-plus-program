// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <math.h>

double exponen(int k);
int fact(int x);
double exponen_x(int x, int k);


double exponen(int k) {
    int count2 = 1;
    double exp = 1.0;
    for (count2 = 1; count2 <= k; count2++) {
        exp = (exp + (1 / fact(count2)));
    }
    return exp;
}
int fact(int x) {
    int count = 1;
    int resutlt = 1;
    for (count = 1; count <= x; count++) {
        resutlt = (resutlt + x);
    }
    return resutlt;
}
int main() {
    int x = 1;
    int a = 1;
    int b = 1;
    printf("請輸入一個整數");
    scanf("%d", &x);
    printf("請輸入你要執行幾項");
    scanf("%d", &a);
    printf("第三題exp的次方項");
    scanf("%d", &b);
    printf("%d", fact(x));
    printf("%f", exponen(a));
    printf("%f", exponen_x(b, a));
    return 0;
}
double exponen_x(int x, int w) {
    int count3 = 1;
    double exp2 = 1.0;
    for (count3 = 1; count3 <= w; count3++) {
        exp2 = (exp2 + ((pow(w, count3)) / fact(count3)));
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
