#include <stdio.h>
#define SIZE 10

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);//(陣列,鍵值,初始左邊界,初始右邊界)
void bubble(int array[SIZE]);
int main(void)
{
    int a[SIZE],key=1,result;

    for (size_t i = 0; i < SIZE; ++i) {
        printf("請輸入第%d個整數", i + 1);
        scanf_s("%d", &a[i]);
    }

    bubble(a);
    puts("\n陣列排列後的結果");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    puts("");
    while (key!= 0) {
        printf("\n請輸入你要搜尋的整數");
        scanf_s("%d", &key);
        result = binarySearch(a, key, 0, SIZE - 1);
        if (result != -1)
            printf("你要找的%d整數在陣列a[]的第%d個",key, result);
        else
            printf("你要找的%d整數不在陣列a[]裡", key);
    }
}

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
{
    while (low <= high) {
        if (searchKey < low)
            return -1;

        size_t middle = (low + high) / 2;

        if (searchKey == b[middle]) {
            return middle;
        }

        else if (searchKey < b[middle]) {
            high = middle - 1; //調整右邊界
        }
        else {
            low = middle + 1; //調整左邊界
        }
    } 

    return -1; 
}

void bubble(int array[SIZE])
{
    unsigned int pass;                  
    for (unsigned int pass = 1; pass < SIZE; ++pass) {
        for (size_t i = 0; i < SIZE - 1; ++i) {
  
            if (array[i] > array[i + 1]) {
                int hold = array[i];
                array[i] = array[i + 1];
                array[i + 1] = hold;
            }
        }
    }
}