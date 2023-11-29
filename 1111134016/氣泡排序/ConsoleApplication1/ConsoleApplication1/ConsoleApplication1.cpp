// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 10
void bubble(int arr[SIZE], unsigned int);
// function main begins program execution
int main(void)
{
    // initialize a
    int a[SIZE], size, i;

    printf("你輸入幾個值?(不能超過10個)");
    scanf_s("%d", &size);
    for (i = 0; (i <size) && (i < SIZE); i++)//陣列是從0開始,所以如果從1開始,0的位子會被吃掉,不能打=, 會多給一個空格
        scanf_s("%d", &a[i]);
    puts("Data items in original order");

    // output original array
    for (size_t i = 0; i < size; ++i) {
        printf("%4d", a[i]);
    }

    // bubble sort                                         
    // loop to control number of passes                    
    bubble(a, size);

    puts("\nData items in ascending order");

    // output sorted array
    for (size_t i = 0; i < size; ++i) {
        printf("%4d", a[i]);
    }

    puts("");
}

void bubble(int arr[SIZE], unsigned int size)
{
    for (unsigned int pass = 1; pass < size; ++pass) {

        // loop to control number of comparisons per pass   
        for (size_t i = 0; i < size - 1; ++i) {

            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (arr[i] > arr[i + 1]) 
            {
                int hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
            }
        }
    }

}