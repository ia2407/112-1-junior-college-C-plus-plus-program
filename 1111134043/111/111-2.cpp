#include <stdio.h>
int fact(int x)
{
    int a = 1;
    for (int i = 1; i <= x; i++)
    {
        a *= i;
    }
    return a;
}

double exponen(int x)
{
    double a = 1;
    double result = 1;
    for (int i = 1; i <= x; i++)
    {
        a *= i;
        result += 1.0 / a;
    }

    return result;
}

int main()
{
    int a;
    double result;
    scanf_s("%d", &a);
    result = exponen(a);
    printf("%lf", result);
}