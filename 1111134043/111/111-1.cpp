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

int main()
{
    int a, result;
    printf("請輸入要算出階層的數\n");
    scanf_s("%d", &a);
    result = fact(a);
    printf("%d!=%d", a, result);
}
