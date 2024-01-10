// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>

int max(int a, int b, int c);

/* play()函數的定義 */
int max(int a, int b, int c)
{
    int max_value = a;
    if (b > max_value)
        max_value = b;
    if (c > max_value)
        max_value = c;

    return max_value;
}

/* 在main()函數呼叫play()函數 */
int main()
{
    int x, y, z;                 /* 宣告變數 */

    printf("請輸入三個值\n");  /* 顯示提示字串 */
    scanf_s("%d %d %d", &x, &y, &z);          /* 輸入整數值 */

    printf("最大值為:%d", max(x, y, z));               /* 呼叫函數 */

    return 0;
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
