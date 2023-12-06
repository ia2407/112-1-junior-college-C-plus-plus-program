#include <stdio.h>
#define SIZE 10

// function main begins program execution
void bubble(int array[SIZE]);
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
int main(void)
{
    // initialize a
    int a[SIZE],key=1,result;
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
    while (key != 0) {
        printf("\n請輸入你要搜尋的整數");
        scanf_s("%d", &key);
        result = binarySearch(a, key, 0, SIZE - 1);       
        if (result != -1)
            printf("你要找的%d在陣列a[]中第%d個元素",key,result);
        else
            printf("你要找的%d不在陣列中",key);
    }
}

void bubble(int array[SIZE])
{               
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

        // 循環控制每次比較的次數  
        for (size_t i = 0; i < SIZE - 1; ++i) {
            // 比較相鄰元素，如果先交換它們 
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
        if (searchKey< b[0])
        {
            return -1;
        }
        // display subarray used in this loop iteration
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
