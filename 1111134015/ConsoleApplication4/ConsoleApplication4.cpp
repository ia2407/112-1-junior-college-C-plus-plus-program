#include <iostream>


#define SIZE 10
void bubble(int arr[SIZE], unsigned int size);
// function main begins program execution
int main(void)
{
    // initialize a
    int a[SIZE], size, i; //= { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    printf("你要輸入幾個值");
    scanf_s("%d", &size);
    for (i = 0; i < size; i++)
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
            if (arr[i] > arr[i + 1]) {
                int hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
            }
        }
    }
}