#include <stdio.h>
#include <iostream>
#include <math.h>

int main(void)
{
    double aim = 0;
    double amount = 0;
    double principal = 0.0;
    double rate = 0.00;
    int year = 0;
    std::cout << "輸入目標的錢";

    std::cin >> aim;
    std::cout << "輸入本金";

    std::cin >> principal;
    std::cout << "輸入利率";

    std::cin >> rate;

    while (amount < aim)
    {
        year = year + 1;
        amount = principal * pow(1 + rate, year);
        std::cout << "第" << year << "年" << "    " << "總計" << amount << "    " << "目標" << aim << "\n";

    }
}