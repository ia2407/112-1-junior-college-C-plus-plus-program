// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<stdio.h>
int main()
{
    double score;
    double total = 0.0;// 將total初始化為0.0(因為是小數點的關係,所以是0.0)
    double max_score = -1.0, min_score = 101.0; // 初始化最高和最低成績
int count = 0;

do {
    printf("請輸入學生的成績 (輸入負數結束): ");
    scanf_s("%lf", &score);// use double so need use %lf(book p3-18)

    if (score >= 0) 
    {
        total += score;// total += score = total =total +score 
       count++;// ++等於後至遞增  count 存儲成績(maybe)

        if (score > max_score) {
            max_score = score;
        }

        if (score < min_score) {
            min_score = score;
        }
    }
} while (score >= 0);

if (count > 0) {
    double average = total / count;
    printf("平均成績: %.2lf\n", average);
    printf("最高成績: %.2lf\n", max_score);
    printf("最低成績: %.2lf\n", min_score);
}
else {
    printf("未輸入任何有效成績。\n");
}

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
