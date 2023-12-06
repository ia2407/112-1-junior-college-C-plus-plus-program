#include <stdio.h>
#define SIZE 10

// function main begins program execution
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
void bubble(int array[SIZE]);
int main(void)
{
    // initialize a
    int b=0,key=1,a[SIZE] ;
    puts("Data items in original order");
    // output original array
    for (size_t i = 0; i < SIZE; ++i) {
        printf("請輸入第%d個整數", i + 1);
        scanf_s("%d", &a[i]);
    }
    bubble(a);
    puts("\nData items in ascending order");
    // output sorted array
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    puts("");
    while (key !=0) {
        printf("請輸入您要搜尋的值");
        scanf_s("%d", &key);
        b = binarySearch(a, key, 0, SIZE - 1);
        if (b !=-1)
        {
            printf("您要找的值在a[]陣列中的第%d項", b);
        }
        else
        {
            printf("此陣列中沒有您要找的值");
        }
    } 
}

void bubble(int array[SIZE])
{
    // bubble sort                                         
    // loop to control number of passes                    
    for (int pass = 1; pass < SIZE; ++pass) {

        // loop to control number of comparisons per pass   
        for (size_t i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first 
            // element is greater than second element           
            if (array[i] > array[i + 1]) {
                int hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;
            }
        }
    }
}
// function to perform binary search of an array
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
{
    // loop until low index is greater than high index
    while (low <= high) {

        // determine middle element of subarray being searched
        size_t middle = (low + high) / 2;

        if (searchKey < b[0]) {
            return -1;
        }
        // if searchKey matched middle element, return middle
        if (searchKey == b[middle]) {
            return middle;
        }

        // if searchKey is less than middle element, set new high
        else if (searchKey < b[middle]) {
            high = middle - 1; // search low end of array      
        }

        // if searchKey is greater than middle element, set new low
        else {
            low = middle + 1; // search high end of array        
        }
    } // end while

    return -1; // searchKey not found
}
