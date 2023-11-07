
﻿#include <stdio.h>

int reward(double x, double y, double z);


int main() {
    double p = 1.0;//設定變數P=本金
    double r = 1.0;//設定變數r=年利率
    double aim = 1.0;//設定變數aim=存款目標
    printf("請輸入本金");
    scanf_s("%lf", &p);
    printf("請輸入年利率");
    scanf_s("%lf", &r);
    printf("請輸入存款目標");
    scanf_s("%lf", &aim);
    printf("%d", reward(p, r, aim));
    return 0;
}
int reward(double x, double y, double z) {
    int years = 0;
    while (x < z) {
        years++;
        x = (x * ((1 + y)));
    }
    return years;
}