// 副程式pi.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#include <math.h>
float fc(float pi, float a, int times);

float fc(float pi ,float a,int times)
{
    
    float number;
    float b;

    number = 4 / a;
    b = times % 2;

    if (b == 0)
        pi += number;
    else
        pi -= number;
    return pi;
}
int main()
{
    int count;
    printf("請輸入需要算到第幾項\n");
    scanf_s("%d", &count);

    int times = 1;
    float a = 1;
    int start = 1;
    float result = 4;

    for (times;times<=count; times++)
    {
        a += 2;

        result = fc(result,a,times);

        if (times >= count)
            start = 0;
        
        printf("%lf\n", result);
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
