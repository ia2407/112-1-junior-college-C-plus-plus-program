

#include <iostream>
int reward(double p, double r, double aims)
{
    int years=0;
    double moneyrate;
    moneyrate = p * r;
    for (years=0; p<aims; years++)
    {
        p = p + moneyrate;
    }
    return(years);
}
int main()
{
    double money, rate, aims;
    printf("請輸入本金:");
    scanf_s("%lf", &money);
    printf("請輸入利率:");
    scanf_s("%lf", &rate);
    printf("請輸入目標:");
    scanf_s("%lf", &aims);
    printf("所需年限為:%d年", reward(money,rate,aims));
}

