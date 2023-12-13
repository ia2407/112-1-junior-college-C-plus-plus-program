#include <stdio.h>
#define SIZE 10

// function main begins program execution
void bubble(int array[][4]);
void swap(int* a, int* b);

int main(void)
{
    // initialize a
    int a[SIZE][4] = { {1,74,89,0} ,{2,64,71,0} , {3,12,23,0}, 
    {4,94,56,0} , {5,100,100,0} , {6,64,71,0} , 
    {7,24,100,0} , {8,94,37,0} , {9,56,45,0} , {10,88,91,0}};
    puts("Data items in original order");
    // output original array

    for (size_t i = 0; i < SIZE; ++i) {
        a[i][3]=(a[i][1]+a[i][2])/2;
    }

    bubble(a);
    puts("\nData items in ascending order");
    printf("\n%4s %4s %4s %4s", "學號", "數學", "計概", "平均");
    // output sorted array
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