#include <stdio.h>
#define SIZE 10
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);//副程式圓形宣告

int main(void)// 函數 main 開始程式執行
{
    
    int a[SIZE] ,key=1 ;// 初始化一個 a陣列 , key , re
    int re = 1;
       for (size_t i = 0; i < SIZE; ++i) { 
        printf("請輸入第%d個整數", i + 1);
        scanf_s("%d", &a[i]);
    }
    
   
     puts("\n資料項按大小排列");
    for (size_t i = 0; i < SIZE; ++i) {// 輸出排序陣列
        printf("%4d", a[i]);
    }
    puts("");

    while (key != 0){ // key是否不等於0
        printf("\n請輸入您要找的整數");//輸出提醒字串
        scanf_s("%d", &key);//輸入數值key
        re = binarySearch(a, key, 0, SIZE - 1); // re(回傳值) = 呼叫富程式
        if (re != -1)
            printf("您要找的值 %d 在陣列中的第%d個元素!", key, re);
        else
            printf("您要找的值 %d 不在陣列中", key);
       
    }
}






// 執行數組二分查找的函數
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
{
    // 循環直到低索引大於高索引
    while (low <= high) {

        if (searchKey < b[0]) //如果輸入值比陣列最小的值還小,回傳-1
            return -1;
        size_t middle = (low + high) / 2; // 確定正在搜尋的子數組的中間元素
       
        //判斷式
        if (searchKey == b[middle]) {//如果searchKey符合中間元素，則傳回中間元素
            return middle;
        }       
        else if (searchKey < b[middle]) {// 如果 searchKey 小於中間元素，則設定新高(右邊界為中間-1)
            high = middle - 1;   
        }    
        else {
            low = middle + 1;// 如果 searchKey 大於中間元素，則設定新的低值(左邊界為中間+1)        
        }
    } // 結束迴圈
        
    return -1; // 沒有找到的話回傳-1
    
}