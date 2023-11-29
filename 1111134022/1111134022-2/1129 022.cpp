
#include <stdio.h>
#define SIZE 10

void bubble(int ar[SIZE], int size);

int main(void)
{
    // initialize a
    int a[SIZE] = {}, size, i;

    printf("要輸入幾個值(不可超過10個)\n");
    scanf_s("%d", &size);

    printf("請輸入%d個值\n", size);

    for (i = 0; i < size; i++)
    {
        scanf_s("%d", &a[i]);
    }

    printf("原本的數字排列\n");
    for (i = 0; i < size; ++i)
    {
        printf("%4d", a[i]);
    }
    printf("\n");
    bubble(a, size);

}

void bubble(int arr[SIZE], int size)
{
    for (int pass = 1; pass < size; ++pass) {

        for (int i = 0; i < size - 1; ++i) {

            if (arr[i] > arr[i + 1]) {
                int hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
            }
        }
    }
    printf("目前的數字排列\n");
    for (int i = 0; i < size; ++i) {
        printf("%4d", arr[i]);
    }
    puts("");