#include <stdio.h>
#define SIZE 10


void bubble(int array[SIZE][4]);
void swap(int* a, int* b);
int main(void)
{

    int a[SIZE][4] = { {1,67,45,0},{2,87,65,0},{3,95,32,0},
        {4,85,12,0},{5,67,94,0},{6,61,45,0},{7,30,72,0},
        {8,60,55,0},{9,75,91,0},{10,4,3,0}};
    puts("Data items in original order");


    puts("\nData items in ascending order");
    for (int x=0;x<=9;x++)
    {
        a[x][3] = (a[x][1] + a[x][2]) / 2;
    }
    bubble(a);
    for (size_t i = 0; i < SIZE; ++i) {
        for (int x=0 ; x<=3;  x++)
        {
            printf("%4d", a[i][x]);
        }
        printf("\n");
    }
    puts("");
}

void bubble(int array[SIZE][4])
{
    unsigned int pass;
              
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

        for (size_t i = 0; i < SIZE - 1; ++i) {
         
            if (array[i][3] < array[i + 1][3]) {
                for (int x = 0; x<=3; x++)
                {
                    swap(&array[i][x],&array[i+1][x]);
                }
               
            }
        }
    }
}
void swap(int* a, int* b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
