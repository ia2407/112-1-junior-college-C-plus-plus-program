// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define SIZE 10
void bubble(int array[SIZE]);
int binarySearch(const int b[], int searchKey, int low, int high);

int main(void)
{
    int a[SIZE], key = 1, result;
    for (int i = 0; i < SIZE; ++i) {
        printf("請輸入第%d個整數", i + 1);
        scanf_s("%d", &a[i]);
    }
    bubble(a);
    puts("\nData items in ascending order");
    
    for (int i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }// 輸出排序陣列
    puts("");

    while (key != 0)  // key是否不等於0
    {
        printf("\n請輸入你要搜尋的值");
        scanf_s("%d", &key);
            result = binarySearch(a,key,0,SIZE-1);// re(回傳值) = 呼叫副程式
        if (result != -1)
            printf("你要找的%d在陣列a[]中第%d個元素!",key, result);
        else
            printf("你要找%d不在陣列a[]!",key);
    }
}

int binarySearch(const int b[], int searchKey,int low,int high)
{
    // loop until low index is greater than high index
    while (low <= high) {

        // determine middle element of subarray being searched
       int middle = (low + high) / 2;
        
        
        
            if (searchKey == b[middle])
            {
                return middle;
            }

           
            else if (searchKey < b[middle])
            {
                high = middle - 1;   
            }

            else
            {
                low = middle + 1;        
            }
        } 

        return -1; 
 }



void bubble(int array[SIZE])//氣泡排序法
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