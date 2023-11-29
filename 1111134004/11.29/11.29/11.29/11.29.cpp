// 11.29.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

// Fig. 6.15: fig06_15.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 10  

void bubble(int arr[SIZE], unsigned int num); //副程式

void bubble(int arr[SIZE], unsigned int num) {

   // 氣泡排序                                         
   // 控制氣泡次數                    
    for (unsigned int pass = 1; pass < num; ++pass) {

        //控制比較次數  
        for (int i = 0; i < num - 1; ++i) {

            //比較數字並排序 
            //hold保持原本位置
             if (arr[i] > arr[i + 1]) {
                int hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
             }
        }
    }
} 

int main(void) //主程式
{
    
    int a[SIZE],size ; //宣告變數  (a[SIZE]:陣列 size:要的值)

    printf("輸入你要的值(不超過10)"); // 陣列元素數從零開始
    scanf_s("%d", &size);
    // 輸入數字
    for (int i = 0; (i < SIZE) && (i < size); ++i) 
        scanf_s("%d", &a[i]);

    puts("Data items in original order"); //輸出"氣泡前標題"

    // 輸出氣泡前
    for (int i = 0; i < size; ++i) {
        printf("%4d", a[i]);
    }

    puts("\nData items in ascending order"); //輸出"氣泡後標題"
    bubble(a, size); //呼叫數字進副程式
   // 輸出氣泡後
    for (int i = 0; i < size; ++i) {
        printf("%4d", a[i]);
    }
    puts("");
}



/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/


// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
