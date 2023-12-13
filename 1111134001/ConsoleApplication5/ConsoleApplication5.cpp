// ConsoleApplication5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

#include <stdio.h>
#define SIZE 10
//函數宣告
void bubble(int array[SIZE]);//
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);

int main(void)//主程式 輸入數字
{
    // initialize a
    int a[SIZE], key = 1, result;//= { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("請輸入第%d個整數", i + 1);
        scanf_s("%d", &a[i]);
    }
    bubble(a);
    puts("\nData items in ascending order");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    puts("");
    //詢問 找元素
    while (key != 0) {
        printf("\n請輸入你要搜尋的整數");
        scanf_s("%d", &key);
        result = binarySearch(a, key, 0, SIZE - 1);//呼叫函式
        if (result != -1)
            printf("你要找的%d在陣列[]中第%d個元素", key, result);
        else
            printf("你要找的%d不在陣列[]中!", key);
    }
}
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)//二次搜尋法
{
    while (low <= high) {

        size_t middle = (low + high) / 2;

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

void bubble(int array[SIZE])//泡沫排序法
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