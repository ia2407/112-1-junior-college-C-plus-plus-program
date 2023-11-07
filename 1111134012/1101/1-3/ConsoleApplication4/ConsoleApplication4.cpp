#include <stdio.h>
#include <math.h>

double fact(double x);
double exponen(int z);
double exponen2(int z, int x);


int main() {
    double myVar = 1;
    int z = 1;
    int ex = 1;
    printf("請輸入一個整數");
    scanf_s("%lf", &myVar);
    printf("你總共要執行幾項");
    scanf_s("%d", &z);
    printf("第三題exp的次方");
    scanf_s("%d", &ex);
    printf("%lf\n", fact(myVar));
    printf("%lf\n", exponen(z));
    printf("%lf\n", exponen2(z, ex));
    return 0;
}
double fact(double x) {
    int count = 1;
    int result = 1;
    for (count = 1; count <= x; count++) {
        result = (result * count);
    }
    return result;
}
double exponen(int z) {
    double exp = 1.0;
    for (int count2 = 1; count2 <= z; count2++) {
        exp = (exp + (1 / fact(count2)));
    }
    return exp;
}
double exponen2(int z, int x) {
    int count3 = 1;
    double exp2 = 1.0;
    for (count3 = 1; count3 <= z; count3++) {
        exp2 = (exp2 + ((pow(x, count3)) / fact(z)));
    }
    return exp2;
}