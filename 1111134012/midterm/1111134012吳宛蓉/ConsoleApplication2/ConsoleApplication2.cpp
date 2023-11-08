

#include <iostream>
#include <stdio.h>
#include <math.h>

int reward(int p, int aims, double r);
int main()
{
    int p, aims;
    double r;
    printf("請輸入本金");
    scanf_s("%d", &p);
    printf("請輸入年利率");
    scanf_s("%lf", &r);
    printf("請輸入存款目標");
    scanf_s("%d", &aims);
    printf("需要存%d年", reward(p, aims, r));


}


int reward(int p, int aims, double r)
{
    int years = 0;
    while (p < aims) {
        years++;
        p = (p * (pow(1 + r, years)));
    }
    return years;

}
