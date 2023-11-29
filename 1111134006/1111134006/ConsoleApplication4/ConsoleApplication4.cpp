


// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 10
void bubble(int arr[SIZE], unsigned int num);
// function main begins program execution
int main(void)
{
    // initialize a
    int a[SIZE], size, i;// {2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    printf("你要輸入幾個值?(不能超過10個)");
    scanf_s("%d", &size);
    for (i = 0; (i < size) && (i < SIZE); i++)////陣列是從0開始,所以如果從1開始,0的位子會被吃掉,不能打=因為會多給一個空格
        scanf_s("%d", &a[i]);

    puts("Data items in original order");

    // output original array
    for (int i = 0; i < size; ++i) {
        printf("%4d", a[i]);
    }

    // bubble sort                                         
    // loop to control number of passes                    


    puts("\nData items in ascending order");
    bubble(a, size);
    // output sorted array
    for (int i = 0; i < size; ++i) {
        printf("%4d", a[i]);
    }

    puts("");
}
void bubble(int arr[SIZE], unsigned int num)
{
    for (unsigned int pass = 1; pass < num; ++pass) {

        // loop to control number of comparisons per pass   
        for (int i = 0; i < num - 1; ++i) {

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
