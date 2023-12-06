
#include <stdio.h>
#define SIZE 10
void sequence(int a[SIZE], int NUM);
size_t binarySearch(int b[], int searchKey, int low, int high);
int main(void)
{
    while (0 == 0)
    {
        int num, a[SIZE], x, seq;
        printf("【請輸入陣列要有幾個數字(最多輸入10個)】:");
        scanf_s("%d", &num);

        if (num < SIZE)
        {
            //陣列排序
            printf("\n【請輸入%d數字】\n", num);
            for (x = 0; (x < num); ++x)
            {
                printf("請輸入第%d個數字:",x+1);
                scanf_s("%d", &a[x]);
            }
            printf("未排序:");
            for (size_t i = 0; i < num; ++i) {
                printf("%d ", a[i]);
            }
            sequence(a, num);
            printf("\n已排序:");
            for (size_t i = 0; i < num; ++i) {
                printf("%d ", a[i]);
            }
            puts("");
            //搜尋陣列數字
            int key;
            while (0 == 0)
            {
                printf("\n【請輸入要搜尋的數字】:");
                scanf_s("%d", &key);
                seq = binarySearch(a, key, 0, num);
                if (seq != -1)
                    printf("【查詢結果】:你輸入的數字在第%d位", seq + 1);
                else
                    printf("【查詢結果】:您輸入的數字不存在");
            }
        }
        else
        {
            printf("\n!!!最多輸入10個數字!!!\n\n");
        }
    }
}
//副程式區域(排序)
void sequence(int arr[SIZE],int NUM)
{
    for (unsigned int pass = 1; pass < NUM; ++pass) {
        for (size_t i = 0; i < NUM - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                int hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
            }
        }
    }
}
//副程式區域(搜尋)
size_t binarySearch(int b[], int searchKey, int low, int high)
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