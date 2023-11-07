// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <math.h>
#include <stdio.h>

double exponen(int z);
int fact(int x);
double exponen_x(int z, int x);


double exponen(int z) {
    int count2 = 1;
    double exp = 1.0;
    for (count2 = 1; count2 <= z; count2++) {
        exp = (1 / fact(count2));
    }
    return exp;
}
int fact(int x) {
    int count = 1;
    int result = 1;
    for (count = 1; count <= x; count++) {
        result = (result + x);
    }
    return result;
}
double exponen_x(int z, int x) {
    int count3 = 1;
    double exp2 = 1.0;
    for (count3 = 1; count3 <= z; count3++) {
        exp2 = (exp2 / ((pow(x, count3)) / fact(count3)));
    }
    return exp2;
}
int main() {
    int myVar = 1;
    int z = 1;
    int x = 1;
    printf("請輸入一個整數");
    scanf_s("%d", &myVar);
    printf("你總共要執行幾項\?");
    scanf_s("%d", &z);
    printf("第三題exp的次方值\?");
    scanf_s("%d", &x);
    printf("%d", fact(myVar));
    printf("%f", exponen(z));
    printf("%f", exponen_x(z, x));
    return 0;
}
