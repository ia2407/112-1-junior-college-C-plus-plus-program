// 1111134005.11.29.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

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

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
