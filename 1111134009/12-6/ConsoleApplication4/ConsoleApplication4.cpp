// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
#include <stdio.h>
#define SIZE 10

void bubble(int array[SIZE]);
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);//宣告副程式
int main(void)//主程式
{
    int a[SIZE],key=1,result;
    puts("原始數值");
    for (size_t i = 0; i < SIZE; ++i) {//從鍵盤輸入的值，會儲存到i
        printf("請輸入第%d個整數", i + 1);
        scanf_s("%d", &a[i]);
    }
    bubble(a);//呼叫副程式

    puts("\n排列過的數值");
    for (size_t i = 0; i < SIZE; ++i) {//將輸入的值做大小排序
        printf("%4d", a[i]);
    }
    puts("");

    while(key!=0){//迴圈循環，反覆搜尋
        printf("\n請輸入你要搜尋的整數：");//從鍵盤輸入值
        scanf_s("%d", &key);
        result = binarySearch(a, key, 0, SIZE - 1);//a 陣列名稱；key 輸入的值
        if (result != -1)//-1不在元素裡面； !=代表不能等於；陣列是從0開始
            printf("你要找的%d在陣列a[]中第%d個元素！", key, result);
        else
            printf("你要找的%d不在陣列a[]中！", key);
    }
}
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
//二元搜尋 b 陣列名稱；searchKey 輸入的值；low 左邊界； high 右邊界
{                 
    while (low <= high) {//確認左邊小於右邊
        size_t middle = (low + high) / 2;//計算中間值

        if (searchKey == b[middle]) {//輸入的值=中間值，傳回中間值
            return middle;
        }
        else if (searchKey < b[middle]) {//輸入的值<中間值，中間值-1
            high = middle - 1;  
        }
        else {//輸入的值>中間值，中間值+1
            low = middle + 1;     
        }
    }
    return -1; //輸入值找不到
}


void bubble(int array[SIZE])//副程式定義(氣泡排序)
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
// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案