#include <stdio.h>
#define SIZE 10
void result(int a[SIZE], int b);

int main()
{
    int a[SIZE] = {}, b;

    printf("請輸入要幾個數字(不超過10個)\n");
    scanf_s("%d", &b);

    printf("請輸入%d個數字\n", b);

    for (int i = 0; i < b; i++)
    {
        scanf_s("%d", &a[i]);
    }

    puts("原本的數字排列");

    for (int i = 0; i < b; ++i) {
        printf("%4d", a[i]);
    }

    result(a, b);
}

void result(int a[SIZE], int b)
{
    for ( int pass = 1; pass < b; ++pass) {

        for (int i = 0; i < b - 1; ++i) {

            if (a[i] > a[i + 1]) {
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }

    puts("\n目前的數字排列");

    for (int i = 0; i < b; ++i) {
        printf("%4d", a[i]);
    }
}
