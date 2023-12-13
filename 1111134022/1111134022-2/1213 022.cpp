#include <stdio.h>
#define SIZE 10

void result(int a[SIZE][4]);
void swap(int* a, int* b);

int main()
{
    int a[SIZE][4] = {
        {1,40,50,0},
        {2,20,30,0},
        {3,60,70,0},
        {4,80,90,0},
        {5,7,25,0},
        {6,61,39,0},
        {7,80,95,0},
        {8,82,85,0},
        {9,12,65,0},
        {10,20,95,0} };

    //平均
    for (int i = 0; i < 10; i++)
    {
        a[i][3] = (a[i][1] + a[i][2]) / 2;
    }

    result(a);

    printf("%s\t%s\t%s\t%s\n", "學號", "數學", "計概", "平均");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void result(int a[SIZE][4])
{
    for (int pass = 1; pass < 10; ++pass)
    {
        for (int i = 0; i < 10 - 1; ++i)
        {
            if (a[i][3] < a[i + 1][3])
            {
                swap(&a[i][3], &a[i + 1][3]);
                swap(&a[i][2], &a[i + 1][2]);
                swap(&a[i][1], &a[i + 1][1]);
                swap(&a[i][0], &a[i + 1][0]);
            }
        }
    }
}

void swap(int* x, int* y)
{
    int hold = *x;
    *x = *y;
    *y = hold;
}