// ConsoleApplication4.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define SIZE 10

void result(int a[SIZE][4]);
void swap(int*a,int*b);

int main()
{
    int a[SIZE][4] = { 
        {1,40,50,0},
        {2,20,30,0},
        {3,60,70,0},
        {4,80,90,0},
        {5,7,25,0},
        {6,61,39,0},
        {7,80,95,0},
        {8,82,85,0},
        {9,12,65,0},
        {10,20,95,0} };
     
    //平均
    for (int i = 0; i < 10; i++)
    {
        a[i][3] = (a[i][1] + a[i][2]) / 2;
    }

    result(a);

    printf("%s\t%s\t%s\t%s\n","學號","數學","計概","平均");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

void result(int a[SIZE][4])
{
    for (int pass = 1; pass < 10; ++pass)
    {
        for (int i = 0; i < 10 - 1; ++i) 
        {
            if (a[i][3] < a[i + 1][3])
            {
                swap(&a[i][3], &a[i + 1][3]);
                swap(&a[i][2], &a[i + 1][2]);
                swap(&a[i][1], &a[i + 1][1]);
                swap(&a[i][0], &a[i + 1][0]);
            }
        }
    }
}

void swap(int*x,int*y)
{
    int hold = *x;
    *x = *y;
    *y = hold;
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
