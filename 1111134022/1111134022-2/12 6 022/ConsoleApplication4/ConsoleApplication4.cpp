// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <stdio.h>
#define SIZE 10

// function main begins program execution
void bubble(int array[SIZE]);
int num,index;
int binarySearch(const int b[], int searchKey, int low, int high);
int main(void)
{
    int a[SIZE] ;
    puts("請輸入10個整數");
    for (int i = 0; i < SIZE; ++i) {
        printf("請輸入第%d個整數", i + 1);
        scanf_s("%d", &a[i]);
    }
    bubble(a);
    puts("\n排列後");
    for (int i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    puts("");
    
    while (num != 1) {
    printf("\n請輸入要找的值");
    scanf_s("%d",&num);
    index = binarySearch(a,num,0,SIZE-1);
    if (index != -1)
        printf("搜尋到值:%d\n", index+1);
    else
        printf("沒搜尋到值\n");
    }
  
    return 0;
}

void bubble(int array[SIZE])
{
    unsigned int pass;         
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

        for (int i = 0; i < SIZE - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;
            }
        }
    }
}

int binarySearch(const int b[], int searchKey, int low, int high)
{

    while (low <= high) {

        int middle = (low + high) / 2;

        if (searchKey < b[0]) {
            return-1;
        }

        if (searchKey == b[middle]) {
            return middle;
        }

        else if (searchKey < b[middle]) {
            high = middle - 1; // search low end of array      
        }

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
