#include <stdio.h>
#define SIZE 10

// function main begins program execution
void bubble(int array[][4]);
void swap(int* a, int* b);
int main(void)
{
    // initialize a
    int a[SIZE][4] = { {1,66,77,0},{2,88,93,0},{3,67,87,0},
        {4,76,93,0},{5,86,71,0},{6,77,72,0},{7,93,88,0},
        {8,54,98,0},{9,56,96,0},{10,59,61,0} };

    // output original array
    for (size_t i = 0; i < SIZE; ++i) {
        a[i][3] = (a[i][1] + a[i][2] / 2);
    }
    bubble(a);
    // output sorted array
    printf("%4s %4s %4s %4s", "學號", "數學", "計概", "平均");
    for (size_t i = 0; i < SIZE; ++i) {
        printf("\n%4d %4d %4d %4d", a[i][0], a[i][1], a[i][2], a[i][3]);
    }
    puts("");
}

void bubble(int array[][4])
{
    unsigned int pass;
    // bubble sort                                         
    // loop to control number of passes                    
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

        // loop to control number of comparisons per pass   
        for (size_t i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (array[i][3] < array[i + 1][3]) {
                swap(&array[i][0], &array[i + 1][0]);
                swap(&array[i][1], &array[i + 1][1]);
                swap(&array[i][2], &array[i + 1][2]);
                swap(&array[i][3], &array[i + 1][3]);
                /*int hold = array[i][0];
                array[i][0] = array[i + 1][0];
                array[i + 1][0] = hold;
                hold = array[i][1];
                array[i][1] = array[i + 1][1];
                array[i + 1][1] = hold;
                hold = array[i][2];
                array[i][2] = array[i + 1][2];
                array[i + 1][2] = hold;
                hold = array[i][3];
                array[i][3] = array[i + 1][3];
                array[i + 1][3] = hold;*/

            }
        }
    }
}
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
            