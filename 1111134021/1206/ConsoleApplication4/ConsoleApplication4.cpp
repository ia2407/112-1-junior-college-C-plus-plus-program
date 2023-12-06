// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define SIZE 10

void result(int a[SIZE]);
int binarySearch(const int b[], int searchKey, int low, int high);

int main()
{
    int a[SIZE] = {},num;
    int key = 1;

    printf("請輸入10個數字\n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("第%d個數字",i+1);
        scanf_s("%d", &a[i]);
    }

    puts("\n未排列的數字");

    for (int i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }

    result(a);

    while (key != -1)
    {
        printf("\n請輸入你要找的數字(輸入-1以結束)\n");

        scanf_s("%d", &key);

        num = binarySearch(a, key, 0, SIZE - 1);

        if (num != -1)
            printf("您要找的數字在陣列第%d位\n", num + 1);
        else
            printf("您要找的數字不存在在陣列中\n");
    }
}

void result(int a[SIZE])
{
    for (int pass = 1; pass < SIZE; ++pass) {

        for (int i = 0; i < SIZE - 1; ++i) {

            if (a[i] > a[i + 1]) {
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }

    puts("\n排列好的數字");

    for (int i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
}

int binarySearch(const int b[], int searchKey, int low, int high)
{
    while (low <= high) {

        int middle = (low + high) / 2;

        if (searchKey == b[middle]) {
            return middle;
        }

        else if (searchKey < b[middle]) {
            high = middle - 1;   
        }

        else {
            low = middle + 1; 
        }
    }
    return -1;
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
