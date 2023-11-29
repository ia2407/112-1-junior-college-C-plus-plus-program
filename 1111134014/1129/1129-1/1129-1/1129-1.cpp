// 1129-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 10
void bubble(int arr[], int num);

int main(void)// 函數 main 開始程式執行
{
    
    int a[SIZE]  , size  ; //定義一個 a 陣列  ,size 
    printf("你要輸入幾個值?(不能超過10個!!)");
    scanf_s("%d", &size);//輸入幾個值,存在size
    for (int i = 0; (i < size)&&(i < SIZE) ; i++)//如果多了= 會多一個空間 因為從0開始/如果i=1 會把陣列0的位置吃掉
        scanf_s("%d", &a[i]);//輸入 size 個值
 
   
    puts("資料項目依原始順序排列");
    for (size_t i = 0; i < size; ++i) {
        printf("%4d", a[i]);
    }
                    
    puts("\n資料項目排列後印出");

    bubble(a, size );
    
    for (size_t i = 0; i < size; ++i) {
        printf("%4d", a[i]);
    }   
    puts("");
}

void bubble(int arr[], int size) {
for (unsigned int pass = 1; pass < size; ++pass) {
       
        for (size_t i = 0; i < size - 1; ++i) {
             
            if (arr[i] > arr[i + 1]) {
                int hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
            }
        }
    }
}

