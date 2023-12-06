// 12.6.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define SIZE 10

// function main begins program execution
void bubble(int array[SIZE]); //氣泡排序副程式
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high); //二元搜尋副程式

int main(void)
{
    // 宣告a陣列跟邀搜尋的值
    int a[SIZE] ,key = 1,result;
    puts("原始陣列");
    // 輸出原始陣列
    for (size_t i = 0; i < SIZE; ++i) {
        printf("請輸入第%d個整數", i + 1);
        scanf_s("%d", &a[i]);
    }

    bubble(a); // 傳入副程式

    puts("\n排序完結果");
    // 輸出排序完的陣列
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    puts("");

    while (key != 0) {  // 要找的值有沒有大於零
       printf("\n請輸入你要找的值");
       scanf_s("%d", &key);
       result= binarySearch(a, key, 0, SIZE - 1); // 傳入副程式    a陣列名稱 key要找的值 0左邊界 SIZE-1右邊界
       if (result != -1)  // 有結果
           printf("你要的值:%d在a[]的%d位置", key, result);
       else               // 沒結果
           printf("你要的值:%d不在a[]中",key);
    }
   
}

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)// 二元搜尋副程式    b陣列名稱 searchKey要找的值 low左邊界 high右邊界
{
    // 確認右邊界是否大於左邊界
    while (low <= high) {

        // 找出陣列中間位置
        size_t middle = (low + high) / 2;

        // 如果要找的值小於陣列中第一個值直接return-1  (程式Bug)
        if (searchKey < b[0]) {
            return -1;
        }

        // 如果要找的值在中間，直接輸出結果
        if (searchKey == b[middle]) {
            return middle;
        }

        // 小於中間
        else if (searchKey < b[middle]) {
            high = middle - 1; // 改右邊界      
        }

        // 大於中間
        else {
            low = middle + 1; // 改左邊界    
        }

    } // 結束

    return -1; // 如果找不到要的值
}

void bubble(int array[SIZE])// 氣泡排序副程式  
{
    unsigned int pass;
                                          
    // 控制迴圈傳遞次數                    
    for (unsigned int pass = 1; pass < SIZE; ++pass) {

        // 控制迴圈比較次數   
        for (size_t i = 0; i < SIZE - 1; ++i) {
            // 比較相鄰值如果大於隔壁先交換
            if (array[i] > array[i + 1]) {
                int hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;
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
