#include <stdio.h>
#include <math.h>
double fact(int x);
double exponen(int z);
double exponen_x(int z ,int a);


int main() {
    int v = 1;
    int z = 1;
    int a = 1;
    printf("請輸入一個整數");
    scanf_s("%d", &v);
    printf("要輸入幾項");
    scanf_s("%d", &z);
    printf("第三題exp的次方值");
    scanf_s("%d", &a);
    printf("%lf\n", fact(v));
    printf("%lf\n", exponen(z));
    printf("%lf\n", exponen_x(z,a));
    return 0;
}
double fact(int x) {
    int count = 1;
    int result = 1;
    for (count = 1; count <= x; count++) {
        result = (result * count);
    }
    return result;
}
double exponen(int z) {
    int count2 = 1;
    double exp = 1.0;
    for (count2 = 1; count2 <= z; count2++) {
        exp = (exp + (1 / fact(count2)));
    }
    return exp;
}
double exponen_x(int z, int a) {
    int count3 = 1;
    double exp2 = 1.0;
    for (count3 = 1; count3 <= z; count3++) {
        exp2 = (exp2 + (( pow(a,count3)) / fact(z)));
    }
    return exp2;
}
