// 11.22-1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define RESPONSES_SIZE 40 // 40份答案
#define FREQUENCY_SIZE 11 // 10個等級

void printf_result(int frequency[FREQUENCY_SIZE]); //副程式

void printf_result(int frequency[FREQUENCY_SIZE]) {
   
    printf("%s%17s\n", "Rating", "Frequency"); // 開頭
        
    // 統計等級總數
    for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating) {
        printf("%6d%17d\n", rating, frequency[rating]);
    }

    printf("%s%17s%10s\n", "Rating", "Frequency","Star");// 開頭

    // 統計等級結果
    for (size_t i = 0; i < FREQUENCY_SIZE; ++i) { 
        printf("%7u%13d        ", i, frequency[i]);

        for (int j = 1; j <= frequency[i]; ++j) { // 印出星星數
            printf("%c", '*');
        }

       puts(""); //類似\n，換行
    }

}

int main(void)// 主程式
{
   
    int frequency[FREQUENCY_SIZE] = { 0 }; // 初始值為0

    // 每份問卷之等級
    int responses[RESPONSES_SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
         1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
         5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };
   
    //算出各等級總數
    for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) {
        ++frequency[responses[answer]];
    }

    printf_result(frequency); // 副程式結果輸出
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
