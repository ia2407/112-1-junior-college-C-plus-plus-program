#include <stdio.h>
#define SIZE 10

// function main begins program execution
void bubble(int array[][4]);
void swap(int* a, int* b);
int main(void)
{
    // initialize a
    int a[SIZE][4] = { {1,95,89,0},{2,90,80,0},{3,85,90,0},
                     {4,99,87,0},{5,88,70,0},{6,75,72,0},{7,76,89,0},
                     {8,85,72,0},{9,87,78,0},{10,70,72,0}, };
   
    for (size_t i = 0; i < SIZE; ++i) {
        a[i][3] = (a[i][1] + a[i][2]) / 2;
    }
    bubble(a);
   
    // output sorted array
    printf("\n學號  數學  計概  平均");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("\n%4d  %4d  %4d  %4d", a[i][0], a[i][1], a[i][2], a[i][3]);
    }
    puts("");
}

void bubble(int array[][4])
{
    
    
    unsigned int pass;
    // bubble sort                                         
    // loop to control number of passes                    
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

       
        for (size_t i = 0; i < SIZE - 1; ++i) {
                   
            if (array[i][3] < array[i + 1][3]) {
                swap(&array[i][0], &array[i + 1][0]);
                swap(&array[i][1], &array[i + 1][1]);
                swap(&array[i][2], &array[i + 1][2]);
                swap(&array[i][3], &array[i + 1][3]);
            }
        }
    }
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}