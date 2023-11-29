// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 10


void  bubble(int arr[SIZE], unsigned int size);

void  bubble(int arr[SIZE], unsigned int size) {
 // bubble sort                                         
    // loop to control number of passes                    
    for (unsigned int pass = 1; pass < size; ++pass) {

        // loop to control number of comparisons per pass   
        for (int i = 0; i < size - 1; ++i) {

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
    int a[SIZE],size;


    printf("輸入要得值");
    scanf_s("%d", &size);
    
    for (int i = 0; (i < size) && (i < SIZE); ++i) {
         scanf_s("%d", &a[i]);
     }
       
    bubble(a, size);
  
     

    puts("\nData items in ascending order");
   
    // output sorted array
    for (int i = 0; i < size; ++i) {
        printf("%4d", a[i]);
    }

    puts("");
}


