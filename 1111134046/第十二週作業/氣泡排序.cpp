// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 10

void bubble (int arr[],int size)
{
    for (unsigned int pass = 1; pass < size; ++pass) {

        // loop to control number of comparisons per pass   
        for (size_t i = 0; i <size - 1; ++i) {

            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (arr[i] > arr[i + 1]) {
                int hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
            }
        }
    }
}
// function main begins program execution
int main(void)
{
    // initialize a
    int a[SIZE], size,b=0;
    printf("請輸入size\n");
    scanf_s("%d", &size);
    printf("請輸入%d個整數\n",size);
    for (int i = 0; i < size; i++)
    {
        scanf_s("%d", &a[i]);
    }
    puts("Data items in original order");
    // output original array
    for (int i = 0; i < size; ++i) {
        printf("%4d", a[i]);
    }
    bubble(a,size);
    puts("\nData items in ascending order");

    // output original array
    for (int i = 0; i < size; ++i) {
        printf("%4d", a[i]);
    }
    // bubble sort                                         
    // loop to control number of passes                    
    
}