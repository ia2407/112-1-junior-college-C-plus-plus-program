#include <stdio.h>
#include <iostream>
int main(void)
{
    double amount = 0; 
    float aim = 0;
    printf("請輸入目標金額");
    scanf_s("%f", &aim);
    float principal=0; 
    printf("請輸入本金");
    scanf_s("%f", &principal);
    float rate=0 ;
    printf("請輸入利率");
    scanf_s("%f", &rate);
    unsigned int year = 0; 

   
    printf("%4s%21s\n", "Year", "Amount on deposit");

    
    while (amount < aim)
    {
        ++year;
        amount = principal * pow(1.0 + rate, year);
        printf("%4u%21.2f\n", year, amount);
    }      
} 