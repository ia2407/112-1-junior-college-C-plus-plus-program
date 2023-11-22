
// Fig. 6.7: fig06_07.c
// Analyzing a student poll.
#include <stdio.h>
#define RESPONSES_SIZE 40 //40個元素的整數陣列定義     40份問卷
#define FREQUENCY_SIZE 11 //11個元素的整數陣列定義     評分0~10
void freq (int frequency[FREQUENCY_SIZE]);//副程式原型宣告
int main(void)//主程式
{    
    int frequency[FREQUENCY_SIZE] = { 0 }; //將陣列的11個值都初始化為0    /   於此程式作用為儲存統計結果
    int responses[RESPONSES_SIZE] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
         1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
         5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };//40個元素的整數陣列定義
    
    for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) {
        ++frequency[responses[answer]];//統計過程
    }
        freq(frequency);//呼叫副程式
}
void freq(int frequency[FREQUENCY_SIZE])//副程式開端
{
    int rating, i, j;//定義整數型態

    for (rating = 1; rating < FREQUENCY_SIZE; ++rating) 
        printf("%6d%17d\n", rating, frequency[rating]);//輸出統計結果

    printf("%s%17s\n", "Rating", "Frequency");//輸出開頭名稱

    for (i = 0; i < FREQUENCY_SIZE; ++i) {
       printf("%7u%13d        ", i, frequency[i]);//輸出統計結果

        for (int j = 1; j <= frequency[i]; ++j) { 

        printf("%c", '*');//輸出柱狀圖的星星
        }

    puts(""); //有點像\n的功能
     }
}