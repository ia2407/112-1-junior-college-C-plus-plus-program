// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define SIZE 10
void bubble(int arr[], int num);

int main(void)
{

    int a[SIZE], size; //定義一個 a 陣列  ,size 
    printf("你要輸入幾個值?(不能超過10個!!)");
    scanf_s("%d", &size);//輸入幾個值,存在size
    for (int i = 0; (i < size) && (i < SIZE); i++)//如果多了= 會多一個空間 因為從0開始/如果i=1 會把陣列0的位置吃掉
        scanf_s("%d", &a[i]);//輸入 size 個值


    printf("\n資料項目依原始順序排列");
    for (int i = 0; i < size; ++i) {
        printf("%4d", a[i]);
    }

    puts("\n資料項目排列後印出");

    bubble(a, size);

    for (int i = 0; i < size; ++i) {
        printf("%4d", a[i]);
    }
    puts("");
}

void bubble(int arr[], int size) {
    for (unsigned int pass = 1; pass < size; ++pass) {

        for (int i = 0; i < size - 1; ++i) {

            if (arr[i] > arr[i + 1]) {
                int hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
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
