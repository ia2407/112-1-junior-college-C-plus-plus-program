// 陣列和排序和搜尋.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define SIZE 10

// function main begins program execution
void bubble(int array[SIZE]);
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);

int main(void)
{
    int key;
    int rv;
    // initialize a
    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
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

    printf("請輸入想要找的值");
    scanf_s("%d", &key);

    rv = binarySearch(a, key, 0, SIZE-1);
    if (rv != -1)
    {
        printf("你想要找的值%d在第%d個", key,rv);
    }
    else
    {
        printf("你想要找的值%d不在資料裡面", key);
    }
}



void bubble(int array[SIZE])
{
    unsigned int pass;
    // bubble sort                                         
    // loop to control number of passes                    
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

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

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
{
    // loop until low index is greater than high index
    while (low <= high) {

        if (searchKey < b[0])
            return -1;
            
        // determine middle element of subarray being searched
        size_t middle = (low + high) / 2;

        // if searchKey matched middle element, return middle
        if (searchKey == b[middle]) {
            return middle;
        }

        // if searchKey is less than middle element, set new high
        else if (searchKey < b[middle]) {
             ; // search low end of array      
        }

        // if searchKey is greater than middle element, set new low
        else {
            low = middle + 1; // search high end of array        
        }
    } // end while

    return -1; // searchKey not found
}
// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
