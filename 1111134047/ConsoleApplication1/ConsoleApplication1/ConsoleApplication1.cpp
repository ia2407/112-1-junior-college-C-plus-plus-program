﻿#include <stdio.h>
#define SIZE 10

void swap(int* x, int* y);
void bubble(int array[][4]);
int main(void)
{

    int a[SIZE][4] =
    { {1,75,46,0},
      {2,58,41,0},
      {3,37,62,0},
      {4,46,54,0},
      {5,81,67,0},
      {6,77,47,0},
      {7,15,34,0},
      {8,81,11,0},
      {9,93,25,0},
      {10,68,96,0} };
    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; ++i) {
        a[i][3] = (a[i][1] + a[i][2]) / 2;
    }

    bubble(a);
    puts("\nData items in ascending order");

    printf("\n%4s %4s %4s %4s", "學號", "數學", "計概", "平均");
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("\n%4d %4d %4d %4d", a[i][0], a[i][1], a[i][2], a[i][3]);
    }
    puts("");
}

void bubble(int array[][4])
{



    unsigned int pass;

    for (unsigned int pass = 1; pass < SIZE; ++pass) {


        for (size_t i = 0; i < SIZE - 1; ++i) {

            if (array[i][3] < array[i + 1][3])
            {
                swap(&array[i][0], &array[i + 1][0]);
                swap(&array[i][1], &array[i + 1][1]);
                swap(&array[i][2], &array[i + 1][2]);
                swap(&array[i][3], &array[i + 1][3]);

                /* int hold = array[i][0];
                  array[i][0] = array[i + 1][0];
                  array[i + 1][0] = hold;

                   hold = array[i][1];
                  array[i][1] = array[i + 1][1];
                  array[i + 1][1] = hold;

                   hold = array[i][0];
                  array[i][2] = array[i + 1][2];
                  array[i + 1][2] = hold;

                   hold = array[i][3];
                  array[i][3] = array[i + 1][3];
                  array[i + 1][3] = hold;*/
            }
        }
    }
}

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}